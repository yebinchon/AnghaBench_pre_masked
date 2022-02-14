
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; int pw_gid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct passwd* FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*,...) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_1)
{
    VAR_0 = 0;
    struct passwd *VAR_2 = FUNC_1(VAR_1);
    if (VAR_0) {
        FUNC_4("getpwnam(\"%s\")", VAR_1);
        FUNC_0(32);
    }
    if (!VAR_2) {
        FUNC_5("getpwnam(\"%s\"): no such user", VAR_1);
        FUNC_0(33);
    }

    int VAR_3 = FUNC_2(VAR_2->pw_gid);
    if (VAR_3 == -1) {
        FUNC_4("setgid(%d \"%s\")", VAR_2->pw_gid, VAR_1);
        FUNC_0(34);
    }

    VAR_3 = FUNC_3(VAR_2->pw_uid);
    if (VAR_3 == -1) {
        FUNC_4("setuid(%d \"%s\")", VAR_2->pw_uid, VAR_1);
        FUNC_0(34);
    }
}
