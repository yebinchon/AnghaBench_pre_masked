
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int portal_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_2 ;

portal_t *FUNC_2 (void)
{
 portal_t *VAR_3;

 if (VAR_2 == 1)
  VAR_0++;
 if (VAR_0 > VAR_1)
  VAR_1 = VAR_0;

 VAR_3 = FUNC_0 (sizeof(portal_t));
 FUNC_1 (VAR_3, 0, sizeof(portal_t));

 return VAR_3;
}
