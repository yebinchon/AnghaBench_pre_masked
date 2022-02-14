
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int pmd; int pool_md; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_0 ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct pool*,int ) ;

__attribute__((used)) static void FUNC_6(struct pool *VAR_1)
{
 const char *VAR_2 = FUNC_2(VAR_1->pool_md);

 FUNC_1("%s: aborting current metadata transaction", VAR_2);
 if (FUNC_3(VAR_1->pmd)) {
  FUNC_0("%s: failed to abort metadata transaction", VAR_2);
  FUNC_5(VAR_1, VAR_0);
 }

 if (FUNC_4(VAR_1->pmd)) {
  FUNC_0("%s: failed to set 'needs_check' flag in metadata", VAR_2);
  FUNC_5(VAR_1, VAR_0);
 }
}
