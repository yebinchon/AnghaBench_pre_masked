
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (void*,void const*,int) ;

__attribute__((used)) static void FUNC_2(const int VAR_2, void *VAR_3, const void *VAR_4, int VAR_5)
{
 unsigned short *VAR_6, *VAR_7, VAR_8;
 unsigned char *VAR_9, *VAR_10;

 if (VAR_2 == VAR_0) {
  FUNC_1(VAR_3, VAR_4, VAR_5);
 } else if (VAR_2 == VAR_1) {
  VAR_8 = VAR_5 >> 1;
  VAR_6 = (unsigned short *) VAR_3;
  VAR_7 = (unsigned short *) VAR_4;

  while (VAR_8--) {
   *VAR_6++ = *VAR_7++;
   VAR_6++;
  }

  VAR_8 = VAR_5 & 1;
  VAR_9 = (unsigned char *) VAR_6;
  VAR_10 = (unsigned char *) VAR_7;
  while (VAR_8--) {
   *VAR_9++ = *VAR_10++;
  }
 } else {



  VAR_8 = VAR_5 >> 4;
  VAR_6 = (unsigned short *) VAR_3;
  VAR_7 = (unsigned short *) VAR_4;
  while (VAR_8--) {
   *VAR_6++ = *VAR_7++;
   *VAR_6++ = *VAR_7++;
   *VAR_6++ = *VAR_7++;
   *VAR_6++ = *VAR_7++;
   *VAR_6++ = *VAR_7++;
   *VAR_6++ = *VAR_7++;
   *VAR_6++ = *VAR_7++;
   *VAR_6++ = *VAR_7++;
   VAR_6 += 8;
  }




  VAR_8 = VAR_5 & 15;
  VAR_9 = (unsigned char *) VAR_6;
  VAR_10 = (unsigned char *) VAR_7;
  while (VAR_8--) {
   *VAR_9++ = *VAR_10++;
  }
 }

 FUNC_0();
}
