
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int FILE ;


 int FUNC_0 (int *) ;

png_uint_32 FUNC_1 (FILE *VAR_0, int VAR_1)
{
  static int VAR_2 = 0;
  static int VAR_3 = 0;
  static int VAR_4 = 0;
  int VAR_5;
  png_uint_32 VAR_6;

  if (VAR_4 == 0)
    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
      VAR_4 = (VAR_4 >> 1) | 0x80;

  if (VAR_2 <= 0)
  {
    VAR_3 = FUNC_0 (VAR_0);
    VAR_2 = 8;
  }

  VAR_6 = VAR_3 & VAR_4;
  for (VAR_5 = 1; VAR_5 < (8 / VAR_1); VAR_5++)
    VAR_6 = VAR_6 || (VAR_6 >> VAR_1);

  VAR_3 = (VAR_3 << VAR_1) & 0xFF;
  VAR_2 -= VAR_1;

  return VAR_6;
}
