
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tex; int context; int display; } ;
typedef int EGLClientBuffer ;
typedef TYPE_1__ CUBE_STATE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,scalar_t__*) ;
 int FUNC_6 (int,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int *,int ,scalar_t__) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_11(CUBE_STATE_T *VAR_19)
{

   FUNC_5(1, &VAR_19->tex);

   FUNC_2(VAR_6, VAR_19->tex);
   FUNC_7(VAR_6, 0, VAR_5, VAR_14, VAR_13, 0,
                VAR_5, VAR_12, ((void*)0));

   FUNC_8(VAR_6, VAR_9, VAR_4);
   FUNC_8(VAR_6, VAR_8, VAR_4);
   FUNC_8(VAR_6, VAR_10, VAR_2);
   FUNC_8(VAR_6, VAR_11, VAR_2);


   VAR_15 = FUNC_0(
                VAR_19->display,
                VAR_19->context,
                VAR_0,
                (EGLClientBuffer)VAR_19->tex,
                0);

   if (VAR_15 == VAR_1)
   {
      FUNC_9("eglCreateImageKHR failed.\n");
      FUNC_1(1);
   }


   FUNC_10(&VAR_17, ((void*)0), VAR_18, VAR_15);


   FUNC_6(2, VAR_3, 0, VAR_16);
   FUNC_4(VAR_7);

   FUNC_3(VAR_6);


   FUNC_2(VAR_6, VAR_19->tex);
}
