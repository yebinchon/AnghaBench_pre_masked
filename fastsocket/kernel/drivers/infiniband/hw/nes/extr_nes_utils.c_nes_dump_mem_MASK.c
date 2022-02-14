
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (unsigned int,char*,...) ;
 unsigned int VAR_0 ;

void FUNC_2(unsigned int VAR_1, void *VAR_2, int VAR_3)
{
 char VAR_4[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
  'a', 'b', 'c', 'd', 'e', 'f'};
 char *VAR_5;
 char VAR_6[80];
 char VAR_7[20];
 int VAR_8;
 int VAR_9;
 int VAR_10;

 if (!(VAR_0 & VAR_1)) {
  return;
 }

 VAR_5 = VAR_2;
 if (VAR_3 > 0x100) {
  FUNC_1(VAR_1, "Length truncated from %x to %x\n", VAR_3, 0x100);
  VAR_3 = 0x100;
 }
 FUNC_1(VAR_1, "Address=0x%p, length=0x%x (%d)\n", VAR_5, VAR_3, VAR_3);

 FUNC_0(VAR_7, 0, 20);
 FUNC_0(VAR_6, 0, 80);

 VAR_9 = 0;
 VAR_10 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (VAR_9 == 8) {
   VAR_7[VAR_9++] = ' ';
   VAR_6[VAR_10++] = '-';
   VAR_6[VAR_10++] = ' ';
  }

  if (*VAR_5 < 0x20 || *VAR_5 > 0x7e)
   VAR_7[VAR_9++] = '.';
  else
   VAR_7[VAR_9++] = *VAR_5;
  VAR_6[VAR_10++] = VAR_4[((*VAR_5 & 0xf0) >> 4)];
  VAR_6[VAR_10++] = VAR_4[*VAR_5 & 0x0f];
  VAR_6[VAR_10++] = ' ';
  VAR_5++;

  if (VAR_9 >= 17) {

   FUNC_1(VAR_1, "   %s |  %s\n", VAR_6, VAR_7);
   FUNC_0(VAR_7, 0, 20);
   FUNC_0(VAR_6, 0, 80);
   VAR_9 = 0;
   VAR_10 = 0;
  }
 }


 if (VAR_9) {
  while (VAR_9 < 17) {
   if (VAR_9 == 8) {
    VAR_6[VAR_10++] = ' ';
    VAR_6[VAR_10++] = ' ';
   }
   VAR_6[VAR_10++] = ' ';
   VAR_6[VAR_10++] = ' ';
   VAR_6[VAR_10++] = ' ';
   VAR_9++;
  }

  FUNC_1(VAR_1, "   %s |  %s\n", VAR_6, VAR_7);
 }
}
