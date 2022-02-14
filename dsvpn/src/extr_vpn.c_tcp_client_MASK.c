
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct addrinfo {scalar_t__ ai_family; int ai_addrlen; int * ai_addr; int ai_socktype; scalar_t__ ai_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr const*,int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (struct addrinfo*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char const*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (struct addrinfo*,int ,int) ;
 int FUNC_7 (char*,char const*,char const*) ;
 int FUNC_8 (scalar_t__,int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(const char *VAR_8, const char *VAR_9)
{
    struct addrinfo VAR_10, *VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14;

    FUNC_7("Connecting to %s:%s...\n", VAR_8, VAR_9);
    FUNC_6(&VAR_10, 0, sizeof VAR_10);
    VAR_10.ai_flags = 0;
    VAR_10.ai_family = VAR_2;
    VAR_10.ai_socktype = VAR_5;
    VAR_10.ai_addr = ((void*)0);
    if ((VAR_12 = FUNC_5(VAR_8, VAR_9, &VAR_10, &VAR_11)) != 0 ||
        (VAR_11->ai_family != VAR_0 && VAR_11->ai_family != VAR_1)) {
        FUNC_2(VAR_7, "Unable to create the client socket: [%s]\n", FUNC_4(VAR_12));
        VAR_6 = VAR_3;
        return -1;
    }
    if ((VAR_13 = FUNC_8(VAR_11->ai_family, VAR_5, VAR_4)) == -1 ||
        FUNC_9(VAR_13) != 0 ||
        FUNC_1(VAR_13, (const struct sockaddr *) VAR_11->ai_addr, VAR_11->ai_addrlen) != 0) {
        FUNC_3(VAR_11);
        VAR_14 = VAR_6;
        (void) FUNC_0(VAR_13);
        VAR_6 = VAR_14;
        return -1;
    }
    FUNC_3(VAR_11);
    return VAR_13;
}
