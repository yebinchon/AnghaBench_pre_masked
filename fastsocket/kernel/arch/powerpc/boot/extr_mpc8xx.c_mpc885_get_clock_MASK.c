
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 size_t VAR_0 ;
 int* FUNC_0 () ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*,...) ;

u32 FUNC_3(u32 VAR_1)
{
 u32 *VAR_2;
 u32 VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 u32 VAR_9;

 VAR_2 = FUNC_0();
 if (!VAR_2) {
  FUNC_2("mpc885_get_clock: Couldn't get IMMR base.\r\n");
  return 0;
 }

 VAR_3 = FUNC_1(&VAR_2[VAR_0]);

 VAR_4 = (VAR_3 >> 16) & 15;
 if (VAR_4 < 5) {
  FUNC_2("Warning: PLPRCR[MFI] value of %d out-of-bounds\r\n",
         VAR_4);
  VAR_4 = 5;
 }

 VAR_7 = (VAR_3 >> 1) & 0xf;
 VAR_8 = (VAR_3 >> 20) & 3;
 VAR_6 = (VAR_3 >> 22) & 0x1f;
 VAR_5 = (VAR_3 >> 27) & 0x1f;

 VAR_9 = VAR_1 * VAR_4;

 if (VAR_5 != 0)
  VAR_9 += VAR_1 * VAR_5 / (VAR_6 + 1);

 return VAR_9 / (VAR_7 + 1);
}
