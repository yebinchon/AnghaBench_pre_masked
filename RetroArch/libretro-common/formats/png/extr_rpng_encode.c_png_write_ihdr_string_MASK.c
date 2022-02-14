
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
struct png_ihdr {char depth; char color_type; char compression; char filter; char interlace; int width; int height; } ;
typedef int intfstream_t ;
typedef int ihdr_raw ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static bool FUNC_3(intfstream_t *VAR_0, const struct png_ihdr *VAR_1)
{
   uint8_t VAR_2[21];

   VAR_2[0] = '0';
   VAR_2[1] = '0';
   VAR_2[2] = '0';
   VAR_2[3] = '0';
   VAR_2[4] = 'I';
   VAR_2[5] = 'H';
   VAR_2[6] = 'D';
   VAR_2[7] = 'R';
   VAR_2[8] = 0;
   VAR_2[9] = 0;
   VAR_2[10] = 0;
   VAR_2[11] = 0;
   VAR_2[12] = 0;
   VAR_2[13] = 0;
   VAR_2[14] = 0;
   VAR_2[15] = 0;
   VAR_2[16] = VAR_1->depth;
   VAR_2[17] = VAR_1->color_type;
   VAR_2[18] = VAR_1->compression;
   VAR_2[19] = VAR_1->filter;
   VAR_2[20] = VAR_1->interlace;

   FUNC_0(VAR_2 + 0, sizeof(VAR_2) - 8);
   FUNC_0(VAR_2 + 8, VAR_1->width);
   FUNC_0(VAR_2 + 12, VAR_1->height);
   if (FUNC_1(VAR_0, VAR_2, sizeof(VAR_2)) != sizeof(VAR_2))
      return 0;

   return FUNC_2(VAR_0, VAR_2 + sizeof(uint32_t),
         sizeof(VAR_2) - sizeof(uint32_t));
}
