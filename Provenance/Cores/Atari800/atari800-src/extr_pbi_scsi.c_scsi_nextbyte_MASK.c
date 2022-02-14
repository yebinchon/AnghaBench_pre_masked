
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int*,int,int,int ) ;
 int FUNC_2 (char*,...) ;
 int* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
 if (VAR_11 == VAR_2) {
  VAR_8++;
  if (VAR_8 >= VAR_10) {
   FUNC_3(VAR_6);
   VAR_7[0] = 0;
  }
 }
 else if (VAR_11 == VAR_6) {
  FUNC_0(FUNC_2("SCSI status\n"));
  FUNC_3(VAR_4);
  VAR_7[0] = 0;
 }
 else if (VAR_11 == VAR_4) {
  FUNC_0(FUNC_2("SCSI msg\n"));
  FUNC_3(VAR_5);
 }
 else if (VAR_11 == VAR_1) {
  VAR_7[VAR_8++] = VAR_9;
  if (VAR_8 >= 0x06) {
   FUNC_4();
   VAR_8 = 0;
  }
 }
 else if (VAR_11 == VAR_3) {
  FUNC_0(FUNC_2("SCSI data out:%2x\n", VAR_9));
  VAR_7[VAR_8++] = VAR_9;
  if (VAR_8 >= VAR_10) {
   FUNC_1(VAR_7, 1, 256, VAR_0);
   FUNC_3(VAR_6);
   VAR_7[0] = 0;
  }
 }
}
