
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int * f_fstypename; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,struct statfs*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(void)
{
 VAR_4;
 FUNC_1(FUNC_3(FUNC_4()), ((void*)0));


 FUNC_9(VAR_1);
 FUNC_9(VAR_2);
 FUNC_6(VAR_0);


 struct statfs VAR_6 = { 0 };
 VAR_3; FUNC_0(FUNC_7(".", &VAR_6), ((void*)0));
 if (FUNC_5(&VAR_6.f_fstypename[0], "apfs", FUNC_8("apfs")) != 0) {
  FUNC_2("utimensat is APFS-only, but working directory is non-APFS");
 }

 VAR_5;
}
