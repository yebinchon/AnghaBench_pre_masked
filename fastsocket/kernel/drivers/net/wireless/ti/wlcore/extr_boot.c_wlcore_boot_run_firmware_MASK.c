
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ id; } ;
struct wl1271 {scalar_t__ cmd_box_addr; scalar_t__* mbox_ptr; scalar_t__ mbox_size; int * ptable; TYPE_1__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl1271*,int ) ;
 int FUNC_2 (int ,char*,scalar_t__,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct wl1271*) ;
 int FUNC_5 (struct wl1271*) ;
 int FUNC_6 (struct wl1271*,int ,scalar_t__*) ;
 int FUNC_7 (struct wl1271*,int *) ;
 int FUNC_8 (struct wl1271*,int ,scalar_t__) ;

int FUNC_9(struct wl1271 *VAR_14)
{
 int VAR_15, VAR_16;
 u32 VAR_17, VAR_18;


 VAR_16 = FUNC_7(VAR_14, &VAR_14->ptable[VAR_6]);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_1(VAR_14, VAR_2);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_6(VAR_14, VAR_8, &VAR_17);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_2(VAR_0, "chip id after firmware boot: 0x%x", VAR_17);

 if (VAR_17 != VAR_14->chip.id) {
  FUNC_3("chip id doesn't match after firmware boot");
  return -VAR_3;
 }


 VAR_15 = 0;
 while (VAR_15++ < VAR_4) {
  FUNC_0(VAR_5);
  VAR_16 = FUNC_6(VAR_14, VAR_12, &VAR_18);
  if (VAR_16 < 0)
   return VAR_16;

  if (VAR_18 == 0xffffffff) {
   FUNC_3("error reading hardware complete "
         "init indication");
   return -VAR_3;
  }

  else if (VAR_18 & VAR_13) {
   VAR_16 = FUNC_8(VAR_14, VAR_11,
            VAR_13);
   if (VAR_16 < 0)
    return VAR_16;
   break;
  }
 }

 if (VAR_15 > VAR_4) {
  FUNC_3("timeout waiting for the hardware to "
        "complete initialization");
  return -VAR_3;
 }


 VAR_16 = FUNC_6(VAR_14, VAR_9, &VAR_14->cmd_box_addr);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_2(VAR_1, "cmd_box_addr 0x%x", VAR_14->cmd_box_addr);


 VAR_16 = FUNC_6(VAR_14, VAR_10, &VAR_14->mbox_ptr[0]);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_14->mbox_ptr[1] = VAR_14->mbox_ptr[0] + VAR_14->mbox_size;

 FUNC_2(VAR_1, "MBOX ptrs: 0x%x 0x%x",
       VAR_14->mbox_ptr[0], VAR_14->mbox_ptr[1]);

 VAR_16 = FUNC_5(VAR_14);
 if (VAR_16 < 0) {
  FUNC_3("error getting static data");
  return VAR_16;
 }







 VAR_16 = FUNC_4(VAR_14);
 if (VAR_16 < 0) {
  FUNC_3("EVENT mask setting failed");
  return VAR_16;
 }


 VAR_16 = FUNC_7(VAR_14, &VAR_14->ptable[VAR_7]);


 return VAR_16;
}
