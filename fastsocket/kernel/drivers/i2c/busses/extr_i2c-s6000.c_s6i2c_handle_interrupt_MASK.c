
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct s6i2c_if {size_t msgs_done; size_t msgs_num; size_t msgs_push; size_t push; size_t done; int complete; struct i2c_msg* msgs; TYPE_1__ adap; } ;
struct i2c_msg {int flags; int* buf; size_t len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct s6i2c_if*,int ) ;
 int FUNC_3 (struct s6i2c_if*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct s6i2c_if *VAR_12)
{
 if (FUNC_2(VAR_12, VAR_5) & (1 << VAR_7)) {
  FUNC_2(VAR_12, VAR_1);
  FUNC_3(VAR_12, VAR_4, 0);
  FUNC_0(&VAR_12->complete);
  return;
 }
 if (VAR_12->msgs_done >= VAR_12->msgs_num) {
  FUNC_1(&VAR_12->adap.dev, "s6i2c: spurious I2C irq: %04x\n",
   FUNC_2(VAR_12, VAR_5));
  FUNC_3(VAR_12, VAR_4, 0);
  return;
 }
 while ((VAR_12->msgs_push < VAR_12->msgs_num)
     && (FUNC_2(VAR_12, VAR_9) & (1 << VAR_11))) {
  struct i2c_msg *VAR_13 = &VAR_12->msgs[VAR_12->msgs_push];
  if (!(VAR_13->flags & VAR_0))
   FUNC_3(VAR_12, VAR_2, VAR_13->buf[VAR_12->push]);
  else
   FUNC_3(VAR_12, VAR_2,
     1 << VAR_3);
  if (++VAR_12->push >= VAR_13->len) {
   VAR_12->push = 0;
   VAR_12->msgs_push += 1;
  }
 }
 do {
  struct i2c_msg *VAR_14 = &VAR_12->msgs[VAR_12->msgs_done];
  if (!(VAR_14->flags & VAR_0)) {
   if (VAR_12->msgs_done < VAR_12->msgs_push)
    VAR_12->msgs_done += 1;
   else
    break;
  } else if (FUNC_2(VAR_12, VAR_9)
    & (1 << VAR_10)) {
   VAR_14->buf[VAR_12->done] = FUNC_2(VAR_12, VAR_2);
   if (++VAR_12->done >= VAR_14->len) {
    VAR_12->done = 0;
    VAR_12->msgs_done += 1;
   }
  } else{
   break;
  }
 } while (VAR_12->msgs_done < VAR_12->msgs_num);
 if (VAR_12->msgs_done >= VAR_12->msgs_num) {
  FUNC_3(VAR_12, VAR_4, 1 << VAR_7);
  FUNC_0(&VAR_12->complete);
 } else if (VAR_12->msgs_push >= VAR_12->msgs_num) {
  FUNC_3(VAR_12, VAR_4, (1 << VAR_7) |
       (1 << VAR_6));
 } else {
  FUNC_3(VAR_12, VAR_4, (1 << VAR_7) |
       (1 << VAR_8) |
       (1 << VAR_6));
 }
}
