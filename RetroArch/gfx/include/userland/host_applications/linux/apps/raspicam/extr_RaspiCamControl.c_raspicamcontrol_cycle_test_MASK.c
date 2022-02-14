
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int mmal_mode; } ;
struct TYPE_8__ {int mmal_mode; } ;
struct TYPE_7__ {int mmal_mode; } ;
struct TYPE_6__ {int u; int v; int enable; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ MMAL_PARAM_COLOURFX_T ;
typedef int MMAL_COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;

 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int*,int,int,int) ;
 int FUNC_12 (int *) ;

int FUNC_13(MMAL_COMPONENT_T *VAR_9)
{
   static int VAR_10 = 0;
   static int VAR_11 = 128;

   FUNC_12(VAR_9);



   if (VAR_10 == 0)
   {

      if (FUNC_11(&VAR_11, -100, 100, 10))
         FUNC_10(VAR_9, VAR_11);
      else
      {
         FUNC_10(VAR_9, 0);
         VAR_10++;
      }
   }
   else if (VAR_10 == 1)
   {

      if (FUNC_11(&VAR_11, -100, 100, 10))
         FUNC_3(VAR_9, VAR_11);
      else
      {
         FUNC_3(VAR_9, 0);
         VAR_10++;
      }
   }
   else if (VAR_10 == 2)
   {

      if (FUNC_11(&VAR_11, 0, 100, 10))
         FUNC_1(VAR_9, VAR_11);
      else
      {
         FUNC_1(VAR_9, 50);
         VAR_10++;
      }
   }
   else if (VAR_10 == 3)
   {

      if (FUNC_11(&VAR_11, -100, 100, 10))
         FUNC_9(VAR_9, VAR_11);
      else
      {
         VAR_10++;
         FUNC_9(VAR_9, 0);
      }
   }
   else if (VAR_10 == 4)
   {

      if (FUNC_11(&VAR_11, -10, 10, 4))
         FUNC_4(VAR_9, VAR_11);
      else
      {
         FUNC_4(VAR_9, 0);
         VAR_10++;
      }
   }
   else if (VAR_10 == 5)
   {

      if (FUNC_11(&VAR_11, 0, VAR_6, 1))
         FUNC_5(VAR_9, VAR_5[VAR_11].mmal_mode);
      else
      {
         FUNC_5(VAR_9, VAR_1);
         VAR_10++;
      }
   }
   else if (VAR_10 == 6)
   {

      if (FUNC_11(&VAR_11, 0, VAR_4, 1))
         FUNC_0(VAR_9, VAR_3[VAR_11].mmal_mode);
      else
      {
         FUNC_0(VAR_9, VAR_0);
         VAR_10++;
      }
   }
   if (VAR_10 == 7)
   {

      if (FUNC_11(&VAR_11, 0, VAR_8, 1))
         FUNC_7(VAR_9, VAR_7[VAR_11].mmal_mode);
      else
      {
         FUNC_7(VAR_9, VAR_2);
         VAR_10++;
      }
   }
   if (VAR_10 == 8)
   {
      MMAL_PARAM_COLOURFX_T VAR_12 = {0,0,0};
      switch (VAR_11)
      {
      case 128 :
         VAR_11 = 1;
         VAR_12.u = 128;
         VAR_12.v = 128;
         break;
      case 1 :
         VAR_11 = 2;
         VAR_12.u = 100;
         VAR_12.v = 200;
         break;
      case 2 :
         VAR_11 = 128;
         VAR_12.enable = 0;
         VAR_10++;
         break;
      }
      FUNC_2(VAR_9, &VAR_12);
   }


   if (VAR_10 == 9)
   {
      switch (VAR_11)
      {
      case 128:
         FUNC_8(VAR_9, 90);
         VAR_11 = 1;
         break;

      case 1 :
         FUNC_8(VAR_9, 180);
         VAR_11 = 2;
         break;

      case 2 :
         FUNC_8(VAR_9, 270);
         VAR_11 = 3;
         break;

      case 3 :
      {
         FUNC_8(VAR_9, 0);
         FUNC_6(VAR_9, 1,0);
         VAR_11 = 4;
         break;
      }
      case 4 :
      {
         FUNC_6(VAR_9, 0,1);
         VAR_11 = 5;
         break;
      }
      case 5 :
      {
         FUNC_6(VAR_9, 1, 1);
         VAR_11 = 6;
         break;
      }
      case 6 :
      {
         FUNC_6(VAR_9, 0, 0);
         VAR_11 = 128;
         VAR_10++;
         break;
      }
      }
   }

   if (VAR_10 == 10)
   {
      VAR_10 = 1;
      return 0;
   }

   return 1;
}
