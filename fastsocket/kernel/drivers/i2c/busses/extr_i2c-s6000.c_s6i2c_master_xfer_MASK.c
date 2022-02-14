
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct s6i2c_if {int msgs_num; int msgs_done; int timeout_count; TYPE_1__ timeout_timer; int complete; scalar_t__ done; scalar_t__ push; scalar_t__ msgs_push; struct i2c_msg* msgs; } ;
struct i2c_msg {int flags; scalar_t__ len; scalar_t__ addr; } ;
struct i2c_adapter {int dev; struct s6i2c_if* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct s6i2c_if*,int ) ;
 scalar_t__ FUNC_4 (struct s6i2c_if*,int ) ;
 int FUNC_5 (struct s6i2c_if*,int ,int) ;
 scalar_t__ VAR_12 ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct i2c_adapter *VAR_13,
    struct i2c_msg *VAR_14, int VAR_15)
{
 struct s6i2c_if *VAR_16 = VAR_13->algo_data;
 int VAR_17;
 if (VAR_15 == 0)
  return 0;
 if (FUNC_3(VAR_16, VAR_8) & (1 << VAR_9))
  FUNC_8();
 FUNC_5(VAR_16, VAR_5, 0);
 FUNC_3(VAR_16, VAR_3);
 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
  if (VAR_14[VAR_17].flags & VAR_1) {
   FUNC_2(&VAR_13->dev,
    "s6i2c: 10 bits addr not supported\n");
   return -VAR_0;
  }
  if (VAR_14[VAR_17].len == 0) {
   FUNC_2(&VAR_13->dev,
    "s6i2c: zero length message not supported\n");
   return -VAR_0;
  }
  if (VAR_14[VAR_17].addr != VAR_14[0].addr) {
   FUNC_2(&VAR_13->dev,
    "s6i2c: multiple xfer cannot change target\n");
   return -VAR_0;
  }
 }

 VAR_16->msgs = VAR_14;
 VAR_16->msgs_num = VAR_15;
 VAR_16->msgs_push = 0;
 VAR_16->msgs_done = 0;
 VAR_16->push = 0;
 VAR_16->done = 0;
 VAR_16->timeout_count = 10;
 FUNC_5(VAR_16, VAR_10, VAR_14[0].addr);
 FUNC_5(VAR_16, VAR_4, 1);
 FUNC_5(VAR_16, VAR_5, (1 << VAR_7) |
      (1 << VAR_6));

 VAR_16->timeout_timer.expires = VAR_12 + VAR_2;
 FUNC_0(&VAR_16->timeout_timer);
 FUNC_7(&VAR_16->complete);
 FUNC_1(&VAR_16->timeout_timer);
 while (FUNC_4(VAR_16, VAR_11) > 0)
  FUNC_6();
 while (FUNC_3(VAR_16, VAR_8) & (1 << VAR_9))
  FUNC_6();

 FUNC_5(VAR_16, VAR_5, 0);
 FUNC_5(VAR_16, VAR_4, 0);
 return VAR_16->msgs_done;
}
