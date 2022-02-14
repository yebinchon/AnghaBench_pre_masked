
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(int VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8 = 0;
 unsigned int VAR_9;
 int VAR_10;

 VAR_7 = 3;
 VAR_6 = (VAR_5 * VAR_7 * 1000000) / VAR_0;
 if (VAR_6 & ~0xff) {
  FUNC_0(VAR_4, "invalid cpuclk MHz: %u\n", VAR_5);
  return -1;
 }
 VAR_9 = ((VAR_6-8)<<8) | ((VAR_7-2)<<2) | VAR_8;
 VAR_3[0x910>>1] = VAR_9;

 for (VAR_10 = 0; VAR_10 < 10000; VAR_10++)
  if (!(VAR_3[0x902>>1] & 1))
   break;

 VAR_2 = 1;
 VAR_1 = VAR_5;
 return 0;
}
