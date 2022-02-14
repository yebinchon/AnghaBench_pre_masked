
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {scalar_t__ fsgid; scalar_t__ fsuid; } ;


 int VAR_0 ;
 struct cred* FUNC_0 (struct cred*) ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (struct cred*) ;

__attribute__((used)) static int
FUNC_3(const struct cred **VAR_1)
{
 struct cred *VAR_2;

 VAR_2 = FUNC_1();
 if (!VAR_2)
  return -VAR_0;

 VAR_2->fsuid = 0;
 VAR_2->fsgid = 0;
 *VAR_1 = FUNC_0(VAR_2);
 FUNC_2(VAR_2);
 return 0;
}
