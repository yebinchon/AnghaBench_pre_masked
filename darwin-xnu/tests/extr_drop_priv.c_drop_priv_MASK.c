
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int pw_gid; int pw_uid; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct passwd*,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 struct passwd* FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(void)
{




    struct passwd *VAR_4 = FUNC_3("mobile");
    VAR_2; VAR_3; FUNC_0(VAR_4, "getpwnam(\"mobile\")");
    uid_t VAR_5 = VAR_4->pw_uid;
    gid_t VAR_6 = VAR_4->pw_gid;

    FUNC_1(FUNC_4(VAR_6), "Change group to %u", VAR_6);
    FUNC_1(FUNC_5(VAR_5), "Change user to %u", VAR_5);
}
