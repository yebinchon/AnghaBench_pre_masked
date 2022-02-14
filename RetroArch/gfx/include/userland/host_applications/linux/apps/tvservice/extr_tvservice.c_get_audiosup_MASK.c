
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,char const*,int,int,int) ;
 scalar_t__ FUNC_1 (int,int,int,int) ;

__attribute__((used)) static int FUNC_2( void )
{
  uint8_t VAR_7[] = {32, 44, 48, 88, 96, 176, 192};
  uint8_t VAR_8[] = {16, 20, 24};
  const char *VAR_9[] = {"Reserved", "PCM", "AC3", "MPEG1", "MP3", "MPEG2", "AAC", "DTS", "ATRAC", "DSD", "EAC3", "DTS_HD", "MLP", "DST", "WMAPRO", "Extended"};
  int VAR_10, VAR_11, VAR_12;
  for (VAR_12=VAR_1; VAR_12<VAR_0; VAR_12++) {
    int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
    for (VAR_10=1; VAR_10<=8; VAR_10++) {
      if (FUNC_1(VAR_12, VAR_10, VAR_4, VAR_5 ) == 0)
        VAR_13 = VAR_10;
    }
    for (VAR_10=0, VAR_11=VAR_3; VAR_11<=VAR_2; VAR_10++, VAR_11<<=1) {
      if (FUNC_1(VAR_12, 1, VAR_11, VAR_5 ) == 0)
        VAR_14 = VAR_10;
    }
    if (VAR_12==VAR_1) {
      for (VAR_10=0, VAR_11=VAR_5; VAR_11<=VAR_6; VAR_10++, VAR_11<<=1) {
        if (FUNC_1(VAR_12, 1, VAR_4, VAR_11 ) == 0)
          VAR_15 = VAR_10;
      }
      if (VAR_13>0)
        FUNC_0("%8s supported: Max channels: %d, Max samplerate:%4dkHz, Max samplesize %2d bits.", VAR_9[VAR_12], VAR_13, VAR_7[VAR_14], VAR_8[VAR_15]);
    } else {
      for (VAR_10=0; VAR_10<256; VAR_10++) {
        if (FUNC_1(VAR_12, 1, VAR_4, VAR_10 ) == 0)
          VAR_15 = VAR_10;
      }
      if (VAR_13>0)
        FUNC_0("%8s supported: Max channels: %d, Max samplerate:%4dkHz, Max rate %4d kb/s.", VAR_9[VAR_12], VAR_13, VAR_7[VAR_14], 8*VAR_15);
    }
  }
  return 0;
}
