
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
void FUNC_4(const char *VAR_0,
          FILE *VAR_1, unsigned char *VAR_2, size_t VAR_3,
          char VAR_4)
{
  size_t VAR_5;
  size_t VAR_6;

  unsigned int VAR_7 = 0x10;

  if(VAR_4)

    VAR_7 = 0x40;

  FUNC_1(VAR_1, "%s, %zu bytes (0x%zx)\n", VAR_0, VAR_3, VAR_3);

  for(VAR_5 = 0; VAR_5<VAR_3; VAR_5 += VAR_7) {

    FUNC_1(VAR_1, "%04zx: ", VAR_5);

    if(!VAR_4) {

      for(VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
        if(VAR_5 + VAR_6 < VAR_3)
          FUNC_1(VAR_1, "%02x ", VAR_2[VAR_5 + VAR_6]);
        else
          FUNC_3("   ", VAR_1);
    }

    for(VAR_6 = 0; (VAR_6 < VAR_7) && (VAR_5 + VAR_6 < VAR_3); VAR_6++) {

      if(VAR_4 && (VAR_5 + VAR_6 + 1 < VAR_3) && VAR_2[VAR_5 + VAR_6] == 0x0D &&
         VAR_2[VAR_5 + VAR_6 + 1] == 0x0A) {
        VAR_5 += (VAR_6 + 2 - VAR_7);
        break;
      }
      FUNC_1(VAR_1, "%c",
              (VAR_2[VAR_5 + VAR_6] >= 0x20) && (VAR_2[VAR_5 + VAR_6]<0x80)? VAR_2[VAR_5 + VAR_6] : '.');

      if(VAR_4 && (VAR_5 + VAR_6 + 2 < VAR_3) && VAR_2[VAR_5 + VAR_6 + 1] == 0x0D &&
         VAR_2[VAR_5 + VAR_6 + 2] == 0x0A) {
        VAR_5 += (VAR_6 + 3 - VAR_7);
        break;
      }
    }
    FUNC_2('\n', VAR_1);
  }
  FUNC_0(VAR_1);
}
