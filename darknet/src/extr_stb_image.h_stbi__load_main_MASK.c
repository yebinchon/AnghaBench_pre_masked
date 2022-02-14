
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int bits_per_channel; scalar_t__ num_channels; int channel_order; } ;
typedef TYPE_1__ stbi__result_info ;
typedef int stbi__context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 void* FUNC_1 (int *,int*,int*,int*,int,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 void* FUNC_3 (char*,char*) ;
 void* FUNC_4 (int *,int*,int*,int*,int,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;
 float* FUNC_6 (int *,int*,int*,int*,int,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *) ;
 void* FUNC_8 (float*,int,int,int) ;
 void* FUNC_9 (int *,int*,int*,int*,int,TYPE_1__*) ;
 scalar_t__ FUNC_10 (int *) ;
 void* FUNC_11 (int *,int*,int*,int*,int,TYPE_1__*) ;
 scalar_t__ FUNC_12 (int *) ;
 void* FUNC_13 (int *,int*,int*,int*,int,TYPE_1__*) ;
 scalar_t__ FUNC_14 (int *) ;
 void* FUNC_15 (int *,int*,int*,int*,int,TYPE_1__*) ;
 scalar_t__ FUNC_16 (int *) ;
 void* FUNC_17 (int *,int*,int*,int*,int,TYPE_1__*,int) ;
 scalar_t__ FUNC_18 (int *) ;
 void* FUNC_19 (int *,int*,int*,int*,int,TYPE_1__*) ;
 scalar_t__ FUNC_20 (int *) ;

__attribute__((used)) static void *FUNC_21(stbi__context *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int VAR_5, stbi__result_info *VAR_6, int VAR_7)
{
   FUNC_0(VAR_6, 0, sizeof(*VAR_6));
   VAR_6->bits_per_channel = 8;
   VAR_6->channel_order = VAR_0;
   VAR_6->num_channels = 0;


   if (FUNC_10(VAR_1)) return FUNC_9(VAR_1,VAR_2,VAR_3,VAR_4,VAR_5, VAR_6);


   if (FUNC_14(VAR_1)) return FUNC_13(VAR_1,VAR_2,VAR_3,VAR_4,VAR_5, VAR_6);


   if (FUNC_2(VAR_1)) return FUNC_1(VAR_1,VAR_2,VAR_3,VAR_4,VAR_5, VAR_6);


   if (FUNC_5(VAR_1)) return FUNC_4(VAR_1,VAR_2,VAR_3,VAR_4,VAR_5, VAR_6);


   if (FUNC_18(VAR_1)) return FUNC_17(VAR_1,VAR_2,VAR_3,VAR_4,VAR_5, VAR_6, VAR_7);


   if (FUNC_12(VAR_1)) return FUNC_11(VAR_1,VAR_2,VAR_3,VAR_4,VAR_5, VAR_6);


   if (FUNC_16(VAR_1)) return FUNC_15(VAR_1,VAR_2,VAR_3,VAR_4,VAR_5, VAR_6);



   if (FUNC_7(VAR_1)) {
      float *VAR_8 = FUNC_6(VAR_1, VAR_2,VAR_3,VAR_4,VAR_5, VAR_6);
      return FUNC_8(VAR_8, *VAR_2, *VAR_3, VAR_5 ? VAR_5 : *VAR_4);
   }




   if (FUNC_20(VAR_1))
      return FUNC_19(VAR_1,VAR_2,VAR_3,VAR_4,VAR_5, VAR_6);


   return FUNC_3("unknown image type", "Image not of any known type, or corrupt");
}
