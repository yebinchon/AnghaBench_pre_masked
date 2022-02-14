
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct e1000_hw {TYPE_1__* adapter; } ;
typedef int s32 ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_8)
{
 u32 VAR_9, VAR_10 = VAR_5;
 s32 VAR_11 = 0;

 if (FUNC_5(VAR_7,
        &VAR_8->adapter->state)) {
  FUNC_1("contention for Phy access\n");
  return -VAR_1;
 }

 while (VAR_10) {
  VAR_9 = FUNC_2(VAR_3);
  if (!(VAR_9 & VAR_2))
   break;

  FUNC_4(1);
  VAR_10--;
 }

 if (!VAR_10) {
  FUNC_1("SW has already locked the resource.\n");
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_10 = VAR_6;

 VAR_9 |= VAR_2;
 FUNC_3(VAR_3, VAR_9);

 while (VAR_10) {
  VAR_9 = FUNC_2(VAR_3);
  if (VAR_9 & VAR_2)
   break;

  FUNC_4(1);
  VAR_10--;
 }

 if (!VAR_10) {
  FUNC_1("Failed to acquire the semaphore, FW or HW has it: FWSM=0x%8.8x EXTCNF_CTRL=0x%8.8x)\n",
        FUNC_2(VAR_4), VAR_9);
  VAR_9 &= ~VAR_2;
  FUNC_3(VAR_3, VAR_9);
  VAR_11 = -VAR_0;
  goto out;
 }

out:
 if (VAR_11)
  FUNC_0(VAR_7, &VAR_8->adapter->state);

 return VAR_11;
}
