
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int dummy; } ;
typedef int drmEventContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (int *,int ,int) ;

void FUNC_4(void)
{
   if (VAR_1)
      FUNC_1(VAR_1);
   if (VAR_0)
      FUNC_0(VAR_0);
   if (VAR_4)
      FUNC_2(VAR_4);

   FUNC_3(&VAR_3, 0, sizeof(struct pollfd));
   FUNC_3(&VAR_2, 0, sizeof(drmEventContext));

   VAR_1 = ((void*)0);
   VAR_0 = ((void*)0);
   VAR_4 = ((void*)0);
}
