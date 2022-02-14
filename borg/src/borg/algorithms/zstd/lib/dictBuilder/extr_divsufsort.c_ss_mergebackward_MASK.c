
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (unsigned char const*,int const*,int const*,int) ;

__attribute__((used)) static
void
FUNC_2(const unsigned char *VAR_0, const int *VAR_1,
                 int *VAR_2, int *VAR_3, int *VAR_4,
                 int *VAR_5, int VAR_6) {
  const int *VAR_7, *VAR_8;
  int *VAR_9, *VAR_10, *VAR_11, *VAR_12;
  int VAR_13;
  int VAR_14;
  int VAR_15;

  VAR_12 = VAR_5 + (VAR_4 - VAR_3) - 1;
  FUNC_0(VAR_5, VAR_3, VAR_4 - VAR_3);

  VAR_15 = 0;
  if(*VAR_12 < 0) { VAR_7 = VAR_1 + ~*VAR_12; VAR_15 |= 1; }
  else { VAR_7 = VAR_1 + *VAR_12; }
  if(*(VAR_3 - 1) < 0) { VAR_8 = VAR_1 + ~*(VAR_3 - 1); VAR_15 |= 2; }
  else { VAR_8 = VAR_1 + *(VAR_3 - 1); }
  for(VAR_13 = *(VAR_9 = VAR_4 - 1), VAR_10 = VAR_12, VAR_11 = VAR_3 - 1;;) {
    VAR_14 = FUNC_1(VAR_0, VAR_7, VAR_8, VAR_6);
    if(0 < VAR_14) {
      if(VAR_15 & 1) { do { *VAR_9-- = *VAR_10, *VAR_10-- = *VAR_9; } while(*VAR_10 < 0); VAR_15 ^= 1; }
      *VAR_9-- = *VAR_10;
      if(VAR_10 <= VAR_5) { *VAR_5 = VAR_13; break; }
      *VAR_10-- = *VAR_9;
      if(*VAR_10 < 0) { VAR_7 = VAR_1 + ~*VAR_10; VAR_15 |= 1; }
      else { VAR_7 = VAR_1 + *VAR_10; }
    } else if(VAR_14 < 0) {
      if(VAR_15 & 2) { do { *VAR_9-- = *VAR_11, *VAR_11-- = *VAR_9; } while(*VAR_11 < 0); VAR_15 ^= 2; }
      *VAR_9-- = *VAR_11, *VAR_11-- = *VAR_9;
      if(VAR_11 < VAR_2) {
        while(VAR_5 < VAR_10) { *VAR_9-- = *VAR_10, *VAR_10-- = *VAR_9; }
        *VAR_9 = *VAR_10, *VAR_10 = VAR_13;
        break;
      }
      if(*VAR_11 < 0) { VAR_8 = VAR_1 + ~*VAR_11; VAR_15 |= 2; }
      else { VAR_8 = VAR_1 + *VAR_11; }
    } else {
      if(VAR_15 & 1) { do { *VAR_9-- = *VAR_10, *VAR_10-- = *VAR_9; } while(*VAR_10 < 0); VAR_15 ^= 1; }
      *VAR_9-- = ~*VAR_10;
      if(VAR_10 <= VAR_5) { *VAR_5 = VAR_13; break; }
      *VAR_10-- = *VAR_9;
      if(VAR_15 & 2) { do { *VAR_9-- = *VAR_11, *VAR_11-- = *VAR_9; } while(*VAR_11 < 0); VAR_15 ^= 2; }
      *VAR_9-- = *VAR_11, *VAR_11-- = *VAR_9;
      if(VAR_11 < VAR_2) {
        while(VAR_5 < VAR_10) { *VAR_9-- = *VAR_10, *VAR_10-- = *VAR_9; }
        *VAR_9 = *VAR_10, *VAR_10 = VAR_13;
        break;
      }
      if(*VAR_10 < 0) { VAR_7 = VAR_1 + ~*VAR_10; VAR_15 |= 1; }
      else { VAR_7 = VAR_1 + *VAR_10; }
      if(*VAR_11 < 0) { VAR_8 = VAR_1 + ~*VAR_11; VAR_15 |= 2; }
      else { VAR_8 = VAR_1 + *VAR_11; }
    }
  }
}
