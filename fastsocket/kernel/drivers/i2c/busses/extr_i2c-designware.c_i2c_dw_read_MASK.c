
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct i2c_msg {scalar_t__ addr; int flags; scalar_t__ len; int * buf; } ;
struct i2c_adapter {int dummy; } ;
struct dw_i2c_dev {int msgs_num; size_t msg_read_idx; int status; scalar_t__ rx_buf_len; int * rx_buf; scalar_t__ base; struct i2c_msg* msgs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dw_i2c_dev* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct i2c_adapter *VAR_4)
{
 struct dw_i2c_dev *VAR_5 = FUNC_0(VAR_4);
 struct i2c_msg *VAR_6 = VAR_5->msgs;
 int VAR_7 = VAR_5->msgs_num;
 u16 VAR_8 = VAR_6[VAR_5->msg_read_idx].addr;
 int VAR_9 = FUNC_2(VAR_5->base + VAR_1);

 for (; VAR_5->msg_read_idx < VAR_7; VAR_5->msg_read_idx++) {
  u16 VAR_10;
  u8 *VAR_11;

  if (!(VAR_6[VAR_5->msg_read_idx].flags & VAR_2))
   continue;


  if (VAR_6[VAR_5->msg_read_idx].addr != VAR_8)
   return;

  if (!(VAR_5->status & VAR_3)) {
   VAR_10 = VAR_6[VAR_5->msg_read_idx].len;
   VAR_11 = VAR_6[VAR_5->msg_read_idx].buf;
  } else {
   VAR_10 = VAR_5->rx_buf_len;
   VAR_11 = VAR_5->rx_buf;
  }

  for (; VAR_10 > 0 && VAR_9 > 0; VAR_10--, VAR_9--)
   *VAR_11++ = FUNC_1(VAR_5->base + VAR_0);

  if (VAR_10 > 0) {
   VAR_5->status |= VAR_3;
   VAR_5->rx_buf_len = VAR_10;
   VAR_5->rx_buf = VAR_11;
   return;
  } else
   VAR_5->status &= ~VAR_3;
 }
}
