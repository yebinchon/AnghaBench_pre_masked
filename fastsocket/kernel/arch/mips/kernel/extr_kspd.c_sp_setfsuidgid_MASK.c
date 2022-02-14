
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct cred {int fsgid; int fsuid; } ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (struct cred*) ;
 struct cred* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(uid_t VAR_1, gid_t VAR_2)
{
 struct cred *VAR_3;

 VAR_3 = FUNC_1();
 if (!VAR_3)
  return -VAR_0;

 VAR_3->fsuid = VAR_1;
 VAR_3->fsgid = VAR_2;

 FUNC_0(VAR_3);

 return 0;
}
