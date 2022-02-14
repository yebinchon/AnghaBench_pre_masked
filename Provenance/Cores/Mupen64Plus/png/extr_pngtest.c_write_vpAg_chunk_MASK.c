
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int png_structp ;
typedef int png_byte ;
struct TYPE_2__ {int vpAg_units; scalar_t__ vpAg_height; scalar_t__ vpAg_width; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long,int) ;
 int FUNC_1 (int*,scalar_t__) ;
 int FUNC_2 (int ,int*,int*,int) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_3(png_structp VAR_3)
{
   png_byte VAR_4[5] = {118, 112, 65, 103, '\0'};

   png_byte VAR_5[9];

   if (VAR_2 != 0)
      FUNC_0(VAR_0, " vpAg = %lu x %lu, units = %d\n",
          (unsigned long)VAR_1.vpAg_width,
          (unsigned long)VAR_1.vpAg_height,
          VAR_1.vpAg_units);

   FUNC_1(VAR_5, VAR_1.vpAg_width);
   FUNC_1(VAR_5 + 4, VAR_1.vpAg_height);
   VAR_5[8] = VAR_1.vpAg_units;
   FUNC_2(VAR_3, VAR_4, VAR_5, 9);
}
