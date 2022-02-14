
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int pool_md; } ;


 int FUNC_0 (char*,int ,char const*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct pool*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pool*,int ) ;

__attribute__((used)) static void FUNC_4(struct pool *VAR_1, const char *VAR_2, int VAR_3)
{
 FUNC_0("%s: metadata operation '%s' failed: error = %d",
      FUNC_2(VAR_1->pool_md), VAR_2, VAR_3);

 FUNC_1(VAR_1);
 FUNC_3(VAR_1, VAR_0);
}
