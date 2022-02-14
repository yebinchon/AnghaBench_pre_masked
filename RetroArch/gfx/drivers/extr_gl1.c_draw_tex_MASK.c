
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ tex; scalar_t__ menu_tex; scalar_t__ rotation; scalar_t__ menu_smooth; scalar_t__ smooth; scalar_t__ supports_bgra; } ;
typedef TYPE_1__ gl1_t ;
typedef scalar_t__ GLuint ;
typedef int GLint ;
typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,int ,int ,float*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (scalar_t__,float,float,float) ;
 int FUNC_14 (int,int ,int ,float*) ;
 int FUNC_15 (int ,int ,int ,int,int,int ,int ,int ,int *) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int,int ,int ,float*) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static void FUNC_19(gl1_t *VAR_25, int VAR_26, int VAR_27, int VAR_28, int VAR_29, GLuint VAR_30, const void *VAR_31)
{
   uint8_t *VAR_32 = ((void*)0);
   uint8_t *VAR_33 = ((void*)0);

   GLint VAR_34 = VAR_10;
   GLenum VAR_35 = VAR_25->supports_bgra ? VAR_0 : VAR_11;
   GLenum VAR_36 = VAR_23;

   float VAR_37[] = {
    -1.0f, -1.0f, 0.0f,
    -1.0f, 1.0f, 0.0f,
    1.0f, -1.0f, 0.0f,
    1.0f, 1.0f, 0.0f,
   };

   float VAR_38[] = {
      1.0f, 1.0f, 1.0f, 1.0f,
      1.0f, 1.0f, 1.0f, 1.0f,
      1.0f, 1.0f, 1.0f, 1.0f,
      1.0f, 1.0f, 1.0f, 1.0f
   };

   float VAR_39 = (1.0f / (float)VAR_26) * (float)VAR_28;
   float VAR_40 = (1.0f / (float)VAR_27) * (float)VAR_29;

   float VAR_41[] = {
      0.0f, 0.0f,
      0.0f, 0.0f,
      0.0f, 0.0f,
      0.0f, 0.0f
   };

   VAR_41[1] = VAR_41[5] = VAR_40;
   VAR_41[4] = VAR_41[6] = VAR_39;

   FUNC_3(VAR_3);
   FUNC_3(VAR_2);
   FUNC_3(VAR_13);
   FUNC_3(VAR_12);
   FUNC_6(VAR_14);





   FUNC_10(VAR_21, 1);
   FUNC_10(VAR_22, VAR_26);

   FUNC_1(VAR_14, VAR_30);

   VAR_32 = (uint8_t*)VAR_31;
   if (!VAR_25->supports_bgra)
   {
      VAR_33 = (uint8_t*)FUNC_18(VAR_26 * VAR_27 * 4);
      if (VAR_33)
      {
         int VAR_42, VAR_43;
         for (VAR_43 = 0; VAR_43 < VAR_27; VAR_43++)
         {
            for (VAR_42 = 0; VAR_42 < VAR_26; VAR_42++)
            {
               int VAR_44 = (VAR_43 * VAR_26 + VAR_42) * 4;
               VAR_33[VAR_44 + 2] = VAR_32[VAR_44 + 0];
               VAR_33[VAR_44 + 1] = VAR_32[VAR_44 + 1];
               VAR_33[VAR_44 + 0] = VAR_32[VAR_44 + 2];
               VAR_33[VAR_44 + 3] = VAR_32[VAR_44 + 3];
            }
         }
         VAR_32 = VAR_33;
      }
   }

   FUNC_15(VAR_14, 0, VAR_34, VAR_26, VAR_27, 0, VAR_35, VAR_36, VAR_32);
   if (VAR_33)
       FUNC_0(VAR_33);

   if (VAR_30 == VAR_25->tex)
   {
      FUNC_16(VAR_14, VAR_17, (VAR_25->smooth ? VAR_5 : VAR_7));
      FUNC_16(VAR_14, VAR_16, (VAR_25->smooth ? VAR_5 : VAR_7));
   }
   else if (VAR_30 == VAR_25->menu_tex)
   {
      FUNC_16(VAR_14, VAR_17, (VAR_25->menu_smooth ? VAR_5 : VAR_7));
      FUNC_16(VAR_14, VAR_16, (VAR_25->menu_smooth ? VAR_5 : VAR_7));
   }

   FUNC_16(VAR_14, VAR_18, VAR_9);
   FUNC_16(VAR_14, VAR_19, VAR_9);

   FUNC_9(VAR_8);
   FUNC_12();
   FUNC_8();

   FUNC_9(VAR_6);
   FUNC_12();
   FUNC_8();

   if (VAR_25->rotation && VAR_30 == VAR_25->tex)
      FUNC_13(VAR_25->rotation, 0.0f, 0.0f, 1.0f);

   FUNC_7(VAR_1);
   FUNC_7(VAR_24);
   FUNC_7(VAR_15);

   FUNC_2(4, VAR_4, 0, VAR_38);
   FUNC_17(3, VAR_4, 0, VAR_37);
   FUNC_14(2, VAR_4, 0, VAR_41);

   FUNC_5(VAR_20, 0, 4);

   FUNC_4(VAR_15);
   FUNC_4(VAR_24);
   FUNC_4(VAR_1);

   FUNC_9(VAR_6);
   FUNC_11();
   FUNC_9(VAR_8);
   FUNC_11();
}
