
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct nls_table {int (* char2uni ) (unsigned char const*,int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char const*,int,int *) ;
 int FUNC_1 (unsigned char const*,int,int ,int *,int) ;

__attribute__((used)) static int
FUNC_2(const unsigned char *VAR_4, int VAR_5, unsigned char *VAR_6,
      int *VAR_7, int *VAR_8, int VAR_9, int VAR_10,
      struct nls_table *VAR_11)
{
 const unsigned char *VAR_12;
 unsigned char VAR_13;
 unsigned char *VAR_14;
 unsigned int VAR_15;
 int VAR_16, VAR_17, VAR_18;
 int VAR_19;

 if (VAR_10) {
  *VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_3,
       (wchar_t *) VAR_6, VAR_2 + 2);
  if (*VAR_8 < 0)
   return *VAR_8;
  else if (*VAR_8 > VAR_2)
   return -VAR_1;

  VAR_14 = &VAR_6[*VAR_8 * sizeof(wchar_t)];
 } else {
  if (VAR_11) {
   for (VAR_16 = 0, VAR_12 = VAR_4, VAR_14 = VAR_6, *VAR_8 = 0;
        VAR_16 < VAR_5 && *VAR_8 <= VAR_2;
        *VAR_8 += 1)
   {
    if (VAR_9 && (*VAR_12 == ':')) {
     if (VAR_16 > VAR_5 - 5)
      return -VAR_0;
     VAR_15 = 0;
     for (VAR_17 = 1; VAR_17 < 5; VAR_17++) {
      VAR_13 = VAR_12[VAR_17];
      VAR_15 <<= 4;
      if (VAR_13 >= '0' && VAR_13 <= '9') {
       VAR_15 |= VAR_13 - '0';
       continue;
      }
      if (VAR_13 >= 'a' && VAR_13 <= 'f') {
       VAR_15 |= VAR_13 - ('a' - 10);
       continue;
      }
      if (VAR_13 >= 'A' && VAR_13 <= 'F') {
       VAR_15 |= VAR_13 - ('A' - 10);
       continue;
      }
      return -VAR_0;
     }
     *VAR_14++ = VAR_15 & 0xFF;
     *VAR_14++ = VAR_15 >> 8;
     VAR_12 += 5;
     VAR_16 += 5;
    } else {
     if ((VAR_19 = VAR_11->char2uni(VAR_12, VAR_5 - VAR_16, (wchar_t *)VAR_14)) < 0)
      return -VAR_0;
     VAR_12 += VAR_19;
     VAR_16 += VAR_19;
     VAR_14 += 2;
    }
   }
   if (VAR_16 < VAR_5)
    return -VAR_1;
  } else {
   for (VAR_16 = 0, VAR_12 = VAR_4, VAR_14 = VAR_6, *VAR_8 = 0;
        VAR_16 < VAR_5 && *VAR_8 <= VAR_2;
        VAR_16++, *VAR_8 += 1)
   {
    *VAR_14++ = *VAR_12++;
    *VAR_14++ = 0;
   }
   if (VAR_16 < VAR_5)
    return -VAR_1;
  }
 }

 *VAR_7 = *VAR_8;
 if (*VAR_8 % 13) {
  *VAR_14++ = 0;
  *VAR_14++ = 0;
  *VAR_8 += 1;
  if (*VAR_8 % 13) {
   VAR_18 = 13 - (*VAR_8 % 13);
   for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++) {
    *VAR_14++ = 0xff;
    *VAR_14++ = 0xff;
   }
   *VAR_8 += VAR_18;
  }
 }

 return 0;
}
