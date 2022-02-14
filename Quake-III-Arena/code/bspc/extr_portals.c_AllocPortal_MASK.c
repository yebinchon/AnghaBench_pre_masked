
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int portal_t ;


 int * FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_3 ;

portal_t *FUNC_3 (void)
{
 portal_t *VAR_4;

 VAR_4 = FUNC_0(sizeof(portal_t));
 FUNC_2 (VAR_4, 0, sizeof(portal_t));

 if (VAR_3 == 1)
 {
  VAR_0++;
  if (VAR_0 > VAR_1)
  {
   VAR_1 = VAR_0;
  }
  VAR_2 += FUNC_1(VAR_4);
 }




 return VAR_4;
}
