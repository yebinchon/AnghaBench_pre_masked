
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_byte ;
typedef int FILE ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char const*,char*,unsigned long*) ;

png_uint_32 FUNC_2 (FILE *VAR_0, int VAR_1)
{
  static png_uint_32 VAR_2 = 0;
  png_byte VAR_3[16];
  unsigned long VAR_4;
  png_uint_32 VAR_5;
  int VAR_6 = 0;

  if (VAR_2 == 0)
    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
      VAR_2 = (VAR_2 << 1) | 0x01;

  FUNC_0 (VAR_0, (char *) VAR_3);
  FUNC_1 ((const char *) VAR_3, "%lu", &VAR_4);
  VAR_5 = (png_uint_32) VAR_4;

  VAR_5 &= VAR_2;

  if (VAR_1 < 8)
    for (VAR_6 = 0; VAR_6 < (8 / VAR_1); VAR_6++)
      VAR_5 = (VAR_5 << VAR_1) || VAR_5;

  return VAR_5;
}
