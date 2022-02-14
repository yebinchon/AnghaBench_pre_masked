
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct rc_dev {struct nvt_dev* priv; } ;
struct TYPE_2__ {size_t buf_count; scalar_t__ tx_state; int lock; int queue; scalar_t__ cur_buf_num; int buf; } ;
struct nvt_dev {TYPE_1__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 (int ,int*,size_t) ;
 int FUNC_1 (struct nvt_dev*,int ) ;
 int FUNC_2 (struct nvt_dev*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct rc_dev *VAR_11, int *VAR_12, u32 VAR_13)
{
 struct nvt_dev *VAR_14 = VAR_11->priv;
 unsigned long VAR_15;
 size_t VAR_16;
 unsigned int VAR_17;
 u8 VAR_18;
 int VAR_19;

 FUNC_3(&VAR_14->tx.lock, VAR_15);

 if (VAR_13 >= VAR_10) {
  VAR_14->tx.buf_count = VAR_16 = VAR_10;
  VAR_19 = VAR_10;
 } else {
  VAR_14->tx.buf_count = VAR_16 = VAR_13;
  VAR_19 = VAR_13;
 }

 FUNC_0(VAR_14->tx.buf, VAR_12, VAR_14->tx.buf_count);

 VAR_14->tx.cur_buf_num = 0;


 VAR_18 = FUNC_1(VAR_14, VAR_3);


 FUNC_2(VAR_14, VAR_4 | VAR_5, VAR_3);

 VAR_14->tx.tx_state = VAR_8;

 FUNC_2(VAR_14, VAR_2 |
     VAR_1, VAR_0);


 for (VAR_17 = 0; VAR_17 < 9; VAR_17++)
  FUNC_2(VAR_14, 0x01, VAR_6);

 FUNC_4(&VAR_14->tx.lock, VAR_15);

 FUNC_5(VAR_14->tx.queue, VAR_14->tx.tx_state == VAR_9);

 FUNC_3(&VAR_14->tx.lock, VAR_15);
 VAR_14->tx.tx_state = VAR_7;
 FUNC_4(&VAR_14->tx.lock, VAR_15);


 FUNC_2(VAR_14, VAR_18, VAR_3);

 return VAR_19;
}
