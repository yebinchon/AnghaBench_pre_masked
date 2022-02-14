
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 unsigned char* VAR_3 ;
 unsigned char* VAR_4 ;
 unsigned char* VAR_5 ;
 int FUNC_1 (int ,unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_2 (conv_t VAR_6, ucs4_t* VAR_7, ucs4_t VAR_8)
{
  unsigned char VAR_9[2];
  int VAR_10 = FUNC_1(VAR_6,VAR_9,VAR_8,2);
  if (VAR_10 != VAR_2) {
    unsigned int VAR_11 = (VAR_9[0] << 8) | VAR_9[1];
    unsigned char VAR_12 = VAR_4[(VAR_11 >> 10) & 31];
    unsigned char VAR_13 = VAR_5[(VAR_11 >> 5) & 31];
    unsigned char VAR_14 = VAR_3[VAR_11 & 31];
    if ((VAR_11 >> 15) != 1) FUNC_0();
    if (VAR_12 != VAR_1 && VAR_13 != VAR_1 && VAR_14 != VAR_1) {


      ucs4_t* VAR_15 = VAR_7;
      if (VAR_12 != VAR_0)
        *VAR_15++ = 0x3130 + VAR_12;
      if (VAR_13 != VAR_0)
        *VAR_15++ = 0x3130 + VAR_13;
      if (VAR_14 != VAR_0)
        *VAR_15++ = 0x3130 + VAR_14;
      return VAR_15-VAR_7;
    }
  }
  return VAR_2;
}
