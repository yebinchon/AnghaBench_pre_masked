
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct pm8001_hba_info*) ;
 int FUNC_4 (struct pm8001_hba_info*,int) ;
 int FUNC_5 (struct pm8001_hba_info*,int ,int ) ;
 int FUNC_6 (struct pm8001_hba_info*,int,int ,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_10(struct pm8001_hba_info *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;
 if (FUNC_3(VAR_8) != 0) {
  FUNC_0(VAR_8,
   FUNC_7("MPI state is not ready\n"));
  return -1;
 }

 VAR_9 = FUNC_5(VAR_8, 0, VAR_2)
  & VAR_6;
 if (VAR_9 == VAR_6) {
  FUNC_1(VAR_8,
   FUNC_7("Firmware is ready for reset .\n"));
 } else {
  unsigned long VAR_12;

  FUNC_8(&VAR_8->lock, VAR_12);
  if (-1 == FUNC_4(VAR_8, VAR_4)) {
   FUNC_9(&VAR_8->lock, VAR_12);
   FUNC_0(VAR_8,
    FUNC_7("Shift Bar4 to 0x%x failed\n",
     VAR_4));
   return -1;
  }
  FUNC_6(VAR_8, 2, VAR_7,
   VAR_5);
  FUNC_6(VAR_8, 2, VAR_7, VAR_5);

  FUNC_2(100);
  VAR_9 = FUNC_5(VAR_8, 0, VAR_2) &
   VAR_6;
  if (VAR_9 != VAR_6) {
   VAR_10 = FUNC_5(VAR_8, 0, VAR_1);
   VAR_11 = FUNC_5(VAR_8, 0, VAR_2);
   FUNC_0(VAR_8,
    FUNC_7("TIMEOUT:MSGU_SCRATCH_PAD1"
    "=0x%x, MSGU_SCRATCH_PAD2=0x%x\n",
    VAR_10, VAR_11));
   FUNC_0(VAR_8,
    FUNC_7("SCRATCH_PAD0 value = 0x%x\n",
    FUNC_5(VAR_8, 0, VAR_0)));
   FUNC_0(VAR_8,
    FUNC_7("SCRATCH_PAD3 value = 0x%x\n",
    FUNC_5(VAR_8, 0, VAR_3)));
   FUNC_9(&VAR_8->lock, VAR_12);
   return -1;
  }
  FUNC_9(&VAR_8->lock, VAR_12);
 }
 return 0;
}
