
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ trace ;
typedef int curl_infotype ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char const VAR_2 ;
 int FUNC_0 (int ,unsigned char const) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char,int *) ;
 int FUNC_4 (char*,int *) ;

__attribute__((used)) static void FUNC_5(const char *VAR_3, const char *VAR_4,
                 FILE *VAR_5, const unsigned char *VAR_6, size_t VAR_7,
                 trace VAR_8, curl_infotype VAR_9)
{
  size_t VAR_10;
  size_t VAR_11;

  unsigned int VAR_12 = 0x10;

  if(VAR_8 == VAR_0)

    VAR_12 = 0x40;

  FUNC_2(VAR_5, "%s%s, %zu bytes (0x%zx)\n", VAR_3, VAR_4, VAR_7, VAR_7);

  for(VAR_10 = 0; VAR_10 < VAR_7; VAR_10 += VAR_12) {

    FUNC_2(VAR_5, "%04zx: ", VAR_10);

    if(VAR_8 == VAR_1) {

      for(VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
        if(VAR_10 + VAR_11 < VAR_7)
          FUNC_2(VAR_5, "%02x ", VAR_6[VAR_10 + VAR_11]);
        else
          FUNC_4("   ", VAR_5);
    }

    for(VAR_11 = 0; (VAR_11 < VAR_12) && (VAR_10 + VAR_11 < VAR_7); VAR_11++) {

      if((VAR_8 == VAR_0) &&
         (VAR_10 + VAR_11 + 1 < VAR_7) && (VAR_6[VAR_10 + VAR_11] == 0x0D) &&
         (VAR_6[VAR_10 + VAR_11 + 1] == 0x0A)) {
        VAR_10 += (VAR_11 + 2 - VAR_12);
        break;
      }
      (void)VAR_9;
      FUNC_2(VAR_5, "%c", ((VAR_6[VAR_10 + VAR_11] >= 0x20) && (VAR_6[VAR_10 + VAR_11] < 0x80)) ?
              VAR_6[VAR_10 + VAR_11] : VAR_2);


      if((VAR_8 == VAR_0) &&
         (VAR_10 + VAR_11 + 2 < VAR_7) && (VAR_6[VAR_10 + VAR_11 + 1] == 0x0D) &&
         (VAR_6[VAR_10 + VAR_11 + 2] == 0x0A)) {
        VAR_10 += (VAR_11 + 3 - VAR_12);
        break;
      }
    }
    FUNC_3('\n', VAR_5);
  }
  FUNC_1(VAR_5);
}
