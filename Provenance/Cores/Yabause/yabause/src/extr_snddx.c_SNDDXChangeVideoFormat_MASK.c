
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

int FUNC_3(int VAR_4)
{
   VAR_2 = 44100 / VAR_4;
   VAR_1 = VAR_2 * VAR_0 * 2 * 2;

   if (VAR_3)
      FUNC_0(VAR_3);

   if ((VAR_3 = (u16 *)FUNC_1(VAR_1)) == ((void*)0))
      return -1;

   FUNC_2(VAR_3, 0, VAR_1);
   return 0;
}
