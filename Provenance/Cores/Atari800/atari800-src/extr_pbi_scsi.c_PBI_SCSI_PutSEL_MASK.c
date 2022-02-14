
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int,int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;

void FUNC_3(int VAR_5)
{
 if (VAR_5 != VAR_0) {

  VAR_0 = VAR_5;
  if (VAR_0 && VAR_4 == VAR_2 && VAR_3 == 0x01) {
   FUNC_2(VAR_1);
  }
  FUNC_0(FUNC_1("changed SEL:%d  scsi_byte:%2x\n",VAR_0, VAR_3));
 }
}
