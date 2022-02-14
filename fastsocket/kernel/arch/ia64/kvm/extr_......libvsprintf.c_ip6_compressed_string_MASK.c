
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zerolength ;
typedef int u8 ;
typedef int u16 ;
struct in6_addr {scalar_t__* s6_addr16; int * s6_addr; } ;


 void* FUNC_0 (int) ;
 char* FUNC_1 (char*,int *,int) ;
 scalar_t__ FUNC_2 (struct in6_addr*) ;
 scalar_t__ FUNC_3 (struct in6_addr*) ;
 int FUNC_4 (struct in6_addr*,char const*,int) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (scalar_t__) ;
 char* FUNC_7 (char*,int) ;

__attribute__((used)) static char *FUNC_8(char *VAR_0, const char *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;
 unsigned char VAR_5[8];
 int VAR_6 = 1;
 int VAR_7 = -1;
 u16 VAR_8;
 u8 VAR_9;
 u8 VAR_10;
 bool VAR_11 = 0;
 bool VAR_12;
 struct in6_addr VAR_13;

 FUNC_4(&VAR_13, VAR_1, sizeof(struct in6_addr));

 VAR_12 = FUNC_3(&VAR_13) || FUNC_2(&VAR_13);

 FUNC_5(VAR_5, 0, sizeof(VAR_5));

 if (VAR_12)
  VAR_4 = 6;
 else
  VAR_4 = 8;


 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  for (VAR_3 = VAR_2; VAR_3 < VAR_4; VAR_3++) {
   if (VAR_13[VAR_3] != 0)
    break;
   VAR_5[VAR_2]++;
  }
 }
 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  if (VAR_5[VAR_2] > VAR_6) {
   VAR_6 = VAR_5[VAR_2];
   VAR_7 = VAR_2;
  }
 }


 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  if (VAR_2 == VAR_7) {
   if (VAR_11 || VAR_2 == 0)
    *VAR_0++ = ':';
   *VAR_0++ = ':';
   VAR_11 = 0;
   VAR_2 += VAR_6 - 1;
   continue;
  }
  if (VAR_11) {
   *VAR_0++ = ':';
   VAR_11 = 0;
  }

  VAR_8 = FUNC_6(VAR_13[VAR_2]);
  VAR_9 = VAR_8 >> 8;
  VAR_10 = VAR_8 & 0xff;
  if (VAR_9) {
   if (VAR_9 > 0x0f)
    VAR_0 = FUNC_7(VAR_0, VAR_9);
   else
    *VAR_0++ = FUNC_0(VAR_9);
  }
  if (VAR_9 || VAR_10 > 0x0f)
   VAR_0 = FUNC_7(VAR_0, VAR_10);
  else
   *VAR_0++ = FUNC_0(VAR_10);
  VAR_11 = 1;
 }

 if (VAR_12) {
  if (VAR_11)
   *VAR_0++ = ':';
  VAR_0 = FUNC_1(VAR_0, &VAR_13[12], 0);
 }

 *VAR_0 = '\0';
 return VAR_0;
}
