
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int* VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 char VAR_10 ;

int FUNC_2(unsigned char *VAR_11, int VAR_12)
{
 unsigned VAR_13;
 u8 VAR_14, VAR_15;

 *VAR_11 = 0xff;

 if (VAR_10) {
  *VAR_11 = VAR_10;
  VAR_10 = 0;
  return 0;
 }

 try_again:
 FUNC_0();


 VAR_13 = VAR_9;
 if (VAR_13 == VAR_8) {
  if (VAR_12)
   return -VAR_0;

  goto try_again;
 }

 VAR_15 = VAR_7[VAR_13++];
 VAR_14 = VAR_7[VAR_13++];
 VAR_9 = VAR_13 & 0x00000fff;

 if (VAR_15 & VAR_3) {
  FUNC_1("### GDB Rx Break Detected ###\n");
  return -VAR_1;
 }
 else if (VAR_15 & (VAR_4|VAR_5|VAR_6)) {
  FUNC_1("### GDB Rx Error (st=%02x) ###\n",VAR_15);
  return -VAR_2;
 }
 else {
  FUNC_1("### GDB Rx %02x (st=%02x) ###\n",VAR_14,VAR_15);
  *VAR_11 = VAR_14 & 0x7f;
  return 0;
 }

}
