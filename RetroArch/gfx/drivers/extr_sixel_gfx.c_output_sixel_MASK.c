
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sixel_output_t ;
typedef int sixel_dither_t ;
typedef int SIXELSTATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned char*,int,int,int,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned char*,int,int,int,int *,int *) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static SIXELSTATUS FUNC_7(unsigned char *VAR_5, int VAR_6, int VAR_7,
      int VAR_8, int VAR_9)
{
   sixel_output_t *VAR_10;
   sixel_dither_t *VAR_11;
   SIXELSTATUS VAR_12;

   VAR_10 = FUNC_5(VAR_3, VAR_4);
   VAR_11 = FUNC_1(VAR_8);
   VAR_12 = FUNC_2(VAR_11, VAR_5,
         VAR_6, VAR_7,
         VAR_9,
         VAR_0,
         VAR_2,
         VAR_1);
   if (FUNC_0(VAR_12))
      return VAR_12;
   VAR_12 = FUNC_4(VAR_5, VAR_6, VAR_7,
         VAR_9, VAR_11, VAR_10);
   if (FUNC_0(VAR_12))
      return VAR_12;
   FUNC_6(VAR_10);
   FUNC_3(VAR_11);

   return VAR_12;
}
