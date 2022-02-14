
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_structrp ;
typedef int png_size_t ;
typedef scalar_t__ png_byte ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,scalar_t__*,int ) ;

void
FUNC_3(png_structrp VAR_2, int VAR_3)
{
   png_byte VAR_4[1];

   FUNC_0(1, "in png_write_sRGB");

   if (VAR_3 >= VAR_0)
      FUNC_1(VAR_2,
          "Invalid sRGB rendering intent specified");

   VAR_4[0]=(png_byte)VAR_3;
   FUNC_2(VAR_2, VAR_1, VAR_4, (png_size_t)1);
}
