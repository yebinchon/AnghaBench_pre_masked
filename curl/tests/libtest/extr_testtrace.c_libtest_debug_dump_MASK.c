
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (char*,int *) ;

__attribute__((used)) static
void FUNC_4(const char *VAR_0, const char *VAR_1, FILE *VAR_2,
                        const unsigned char *VAR_3, size_t VAR_4, int VAR_5)
{
  size_t VAR_6;
  size_t VAR_7;

  unsigned int VAR_8 = 0x10;

  if(VAR_5)

    VAR_8 = 0x40;

  FUNC_1(VAR_2, "%s%s, %zu bytes (0x%zx)\n", VAR_0, VAR_1,
          VAR_4, VAR_4);

  for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6 += VAR_8) {

    FUNC_1(VAR_2, "%04zx: ", VAR_6);

    if(!VAR_5) {

      for(VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
        if(VAR_6 + VAR_7 < VAR_4)
          FUNC_1(VAR_2, "%02x ", VAR_3[VAR_6 + VAR_7]);
        else
          FUNC_3("   ", VAR_2);
    }

    for(VAR_7 = 0; (VAR_7 < VAR_8) && (VAR_6 + VAR_7 < VAR_4); VAR_7++) {

      if(VAR_5 &&
         (VAR_6 + VAR_7 + 1 < VAR_4) && (VAR_3[VAR_6 + VAR_7] == 0x0D) &&
         (VAR_3[VAR_6 + VAR_7 + 1] == 0x0A)) {
        VAR_6 += (VAR_7 + 2 - VAR_8);
        break;
      }
      FUNC_1(VAR_2, "%c", ((VAR_3[VAR_6 + VAR_7] >= 0x20) && (VAR_3[VAR_6 + VAR_7] < 0x80)) ?
              VAR_3[VAR_6 + VAR_7] : '.');

      if(VAR_5 &&
         (VAR_6 + VAR_7 + 2 < VAR_4) && (VAR_3[VAR_6 + VAR_7 + 1] == 0x0D) &&
         (VAR_3[VAR_6 + VAR_7 + 2] == 0x0A)) {
        VAR_6 += (VAR_7 + 3 - VAR_8);
        break;
      }
    }
    FUNC_2('\n', VAR_2);
  }
  FUNC_0(VAR_2);
}
