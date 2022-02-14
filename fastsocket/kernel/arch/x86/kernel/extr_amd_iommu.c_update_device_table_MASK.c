
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protection_domain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct protection_domain** VAR_2 ;
 int FUNC_0 (int,struct protection_domain*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct protection_domain *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 <= VAR_1; ++VAR_5) {
  if (VAR_2[VAR_5] != VAR_3)
   continue;
  FUNC_1(&VAR_0, VAR_4);
  FUNC_0(VAR_5, VAR_3);
  FUNC_2(&VAR_0, VAR_4);
 }
}
