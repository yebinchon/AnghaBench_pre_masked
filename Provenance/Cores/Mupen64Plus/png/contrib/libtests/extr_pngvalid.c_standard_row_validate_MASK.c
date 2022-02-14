
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ps; int bit_width; int id; } ;
typedef TYPE_1__ standard_display ;
typedef scalar_t__ png_uint_32 ;
typedef int png_const_structp ;
typedef int png_byte ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*,unsigned long,int,int ,int ) ;
 int FUNC_4 (int ,int *,int ,scalar_t__) ;
 int * FUNC_5 (int ,int ,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(standard_display *VAR_1, png_const_structp VAR_2,
   int VAR_3, int VAR_4, png_uint_32 VAR_5)
{
   int VAR_6;
   png_byte VAR_7[VAR_0];




   FUNC_0(VAR_7, 178, sizeof VAR_7);
   FUNC_4(VAR_2, VAR_7, VAR_1->id, VAR_5);






   if (VAR_3 >= 0 &&
      (VAR_6 = FUNC_1(VAR_7, FUNC_5(VAR_1->ps, VAR_2, VAR_3, VAR_5),
            VAR_1->bit_width)) != 0)
   {
      char VAR_8[64];
      FUNC_3(VAR_8, "PNG image row[%lu][%d] changed from %.2x to %.2x",
         (unsigned long)VAR_5, VAR_6-1, VAR_7[VAR_6-1],
         FUNC_5(VAR_1->ps, VAR_2, VAR_3, VAR_5)[VAR_6-1]);
      FUNC_2(VAR_2, VAR_8);
   }

   if (VAR_4 >= 0 &&
      (VAR_6 = FUNC_1(VAR_7, FUNC_5(VAR_1->ps, VAR_2, VAR_4, VAR_5),
         VAR_1->bit_width)) != 0)
   {
      char VAR_9[64];
      FUNC_3(VAR_9, "display row[%lu][%d] changed from %.2x to %.2x",
         (unsigned long)VAR_5, VAR_6-1, VAR_7[VAR_6-1],
         FUNC_5(VAR_1->ps, VAR_2, VAR_4, VAR_5)[VAR_6-1]);
      FUNC_2(VAR_2, VAR_9);
   }
}
