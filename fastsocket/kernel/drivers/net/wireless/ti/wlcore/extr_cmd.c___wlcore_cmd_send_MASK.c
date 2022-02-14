
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct wl1271_cmd_header {scalar_t__ status; int id; } ;
struct wl1271 {scalar_t__ state; int cmd_box_addr; TYPE_1__* ops; int flags; } ;
struct TYPE_2__ {int (* trigger_cmd ) (struct wl1271*,int ,void*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 unsigned long VAR_9 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct wl1271*,int ,void*,size_t) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct wl1271*,int ,struct wl1271_cmd_header*,size_t,int) ;
 int FUNC_12 (struct wl1271*,int ,int*) ;
 int FUNC_13 (struct wl1271*,int ,void*,size_t,int) ;
 int FUNC_14 (struct wl1271*,int ,int) ;

__attribute__((used)) static int FUNC_15(struct wl1271 *VAR_10, u16 VAR_11, void *VAR_12,
        size_t VAR_13, size_t VAR_14)
{
 struct wl1271_cmd_header *VAR_15;
 unsigned long VAR_16;
 u32 VAR_17;
 int VAR_18;
 u16 VAR_19;
 u16 VAR_20 = 0;

 if (FUNC_0(FUNC_9(VAR_10->state == VAR_8)))
  return -VAR_0;

 VAR_15 = VAR_12;
 VAR_15->id = FUNC_1(VAR_11);
 VAR_15->status = 0;

 FUNC_0(VAR_13 % 4 != 0);
 FUNC_0(FUNC_6(VAR_7, &VAR_10->flags));

 VAR_18 = FUNC_13(VAR_10, VAR_10->cmd_box_addr, VAR_12, VAR_13, 0);
 if (VAR_18 < 0)
  return VAR_18;





 VAR_18 = VAR_10->ops->trigger_cmd(VAR_10, VAR_10->cmd_box_addr, VAR_12, VAR_13);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_16 = VAR_9 + FUNC_3(VAR_6);

 VAR_18 = FUNC_12(VAR_10, VAR_3, &VAR_17);
 if (VAR_18 < 0)
  return VAR_18;

 while (!(VAR_17 & VAR_4)) {
  if (FUNC_7(VAR_9, VAR_16)) {
   FUNC_10("command complete timeout");
   return -VAR_1;
  }

  VAR_20++;
  if (VAR_20 < VAR_5)
   FUNC_8(10);
  else
   FUNC_4(1);

  VAR_18 = FUNC_12(VAR_10, VAR_3, &VAR_17);
  if (VAR_18 < 0)
   return VAR_18;
 }


 if (VAR_14 == 0)
  VAR_14 = sizeof(struct wl1271_cmd_header);

 VAR_18 = FUNC_11(VAR_10, VAR_10->cmd_box_addr, VAR_15, VAR_14, 0);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_19 = FUNC_2(VAR_15->status);

 VAR_18 = FUNC_14(VAR_10, VAR_2,
          VAR_4);
 if (VAR_18 < 0)
  return VAR_18;

 return VAR_19;
}
