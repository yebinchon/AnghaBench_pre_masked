
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct sockaddr_un*,int ,int) ;
 int FUNC_5 (char*,int,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (char*,struct stat*) ;
 size_t const FUNC_9 (char*) ;
 int FUNC_10 (int ,char*,size_t const) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_14 (char*,...) ;

__attribute__((used)) static int
FUNC_15(char *VAR_3)
{
    int VAR_4 = -1, VAR_5;
    struct stat VAR_6;
    struct sockaddr_un VAR_7;
    const size_t VAR_8 = sizeof(VAR_7.sun_path) - 1;

    FUNC_4(&VAR_7, 0, sizeof(struct sockaddr_un));
    VAR_7.sun_family = VAR_0;
    if (FUNC_9(VAR_3) > VAR_8) {
        FUNC_14("socket path %s is too long (%ld characters), where maximum allowed is %ld",
              VAR_3, FUNC_9(VAR_3), VAR_8);
        return -1;
    }
    FUNC_10(VAR_7.sun_path, VAR_3, VAR_8);

    VAR_5 = FUNC_8(VAR_3, &VAR_6);
    if (VAR_5 == 0) {
        if (FUNC_0(VAR_6.st_mode)) {
            FUNC_14("removing existing local socket to replace it");
            VAR_5 = FUNC_13(VAR_3);
            if (VAR_5 == -1) {
                FUNC_11("unlink");
                return -1;
            }
        } else {
            FUNC_12("another file already exists in the given path");
            return -1;
        }
    }

    VAR_4 = FUNC_7(VAR_0, VAR_1, 0);
    if (VAR_4 == -1) {
        FUNC_11("socket()");
        return -1;
    }

    VAR_5 = FUNC_6(VAR_4);
    if (VAR_5 == -1) {
        FUNC_2(VAR_4);
        return -1;
    }

    VAR_5 = FUNC_1(VAR_4, (struct sockaddr *) &VAR_7, sizeof(struct sockaddr_un));
    if (VAR_5 == -1) {
        FUNC_11("bind()");
        FUNC_2(VAR_4);
        return -1;
    }
    if (VAR_2) {
        FUNC_5("bind %d %s\n", VAR_4, VAR_3);
    }

    VAR_5 = FUNC_3(VAR_4, 1024);
    if (VAR_5 == -1) {
        FUNC_11("listen()");
        FUNC_2(VAR_4);
        return -1;
    }

    return VAR_4;
}
