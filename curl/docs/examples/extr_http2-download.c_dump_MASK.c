
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,unsigned char,...) ;
 int FUNC_1 (char,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static
void FUNC_3(const char *VAR_1, int VAR_2, unsigned char *VAR_3, size_t VAR_4,
          char VAR_5)
{
  size_t VAR_6;
  size_t VAR_7;

  unsigned int VAR_8 = 0x10;

  if(VAR_5)

    VAR_8 = 0x40;

  FUNC_0(VAR_0, "%hhu %s, %lu bytes (0x%lx)\n",
          VAR_2, VAR_1, (unsigned long)VAR_4, (unsigned long)VAR_4);

  for(VAR_6 = 0; VAR_6<VAR_4; VAR_6 += VAR_8) {

    FUNC_0(VAR_0, "%4.4hhx: ", (unsigned long)VAR_6);

    if(!VAR_5) {

      for(VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
        if(VAR_6 + VAR_7 < VAR_4)
          FUNC_0(VAR_0, "%02hhx ", VAR_3[VAR_6 + VAR_7]);
        else
          FUNC_2("   ", VAR_0);
    }

    for(VAR_7 = 0; (VAR_7 < VAR_8) && (VAR_6 + VAR_7 < VAR_4); VAR_7++) {

      if(VAR_5 && (VAR_6 + VAR_7 + 1 < VAR_4) && VAR_3[VAR_6 + VAR_7] == 0x0D &&
         VAR_3[VAR_6 + VAR_7 + 1] == 0x0A) {
        VAR_6 += (VAR_7 + 2 - VAR_8);
        break;
      }
      FUNC_0(VAR_0, "%c",
              (VAR_3[VAR_6 + VAR_7] >= 0x20) && (VAR_3[VAR_6 + VAR_7]<0x80)?VAR_3[VAR_6 + VAR_7]:'.');

      if(VAR_5 && (VAR_6 + VAR_7 + 2 < VAR_4) && VAR_3[VAR_6 + VAR_7 + 1] == 0x0D &&
         VAR_3[VAR_6 + VAR_7 + 2] == 0x0A) {
        VAR_6 += (VAR_7 + 3 - VAR_8);
        break;
      }
    }
    FUNC_1('\n', VAR_0);
  }
}
