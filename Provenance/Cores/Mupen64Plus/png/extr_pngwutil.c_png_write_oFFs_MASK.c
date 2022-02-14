
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_structrp ;
typedef int png_size_t ;
typedef int png_int_32 ;
typedef scalar_t__ png_byte ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,scalar_t__*,int ) ;

void
FUNC_4(png_structrp VAR_2, png_int_32 VAR_3, png_int_32 VAR_4,
    int VAR_5)
{
   png_byte VAR_6[9];

   FUNC_0(1, "in png_write_oFFs");

   if (VAR_5 >= VAR_0)
      FUNC_2(VAR_2, "Unrecognized unit type for oFFs chunk");

   FUNC_1(VAR_6, VAR_3);
   FUNC_1(VAR_6 + 4, VAR_4);
   VAR_6[8] = (png_byte)VAR_5;

   FUNC_3(VAR_2, VAR_1, VAR_6, (png_size_t)9);
}
