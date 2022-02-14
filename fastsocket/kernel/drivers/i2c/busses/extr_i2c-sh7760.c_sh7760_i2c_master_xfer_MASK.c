
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; } ;
struct i2c_adapter {int retries; int nr; int dev; struct cami2c* algo_data; } ;
struct cami2c {int status; int flags; struct i2c_msg* msg; int xfer_done; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct cami2c*,int ,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct cami2c*) ;
 int FUNC_5 (struct cami2c*) ;
 int FUNC_6 (struct cami2c*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_14,
      struct i2c_msg *VAR_15,
      int VAR_16)
{
 struct cami2c *VAR_17 = VAR_14->algo_data;
 int VAR_18, VAR_19;

 if (FUNC_4(VAR_17)) {
  FUNC_1(&VAR_14->dev, "sh7760-i2c%d: bus busy!\n", VAR_14->nr);
  return -VAR_0;
 }

 VAR_18 = 0;
 while (VAR_18 < VAR_16) {
  VAR_19 = VAR_14->retries;
retry:
  VAR_17->flags = ((VAR_18 == (VAR_16-1)) ? VAR_11 : 0);
  VAR_17->status = 0;
  VAR_17->msg = VAR_15;
  FUNC_2(&VAR_17->xfer_done);

  if (VAR_15->flags & VAR_10)
   FUNC_5(VAR_17);
  else
   FUNC_6(VAR_17);

  FUNC_7(&VAR_17->xfer_done);

  if (VAR_17->status == 0) {
   VAR_16 = -VAR_1;
   break;
  }

  if (VAR_17->status & VAR_13) {

   FUNC_3(1);
   VAR_16 = -VAR_2;
   break;
  }

  if (VAR_17->status & VAR_12) {
   if (VAR_19--) {
    FUNC_3(2);
    goto retry;
   }
   VAR_16 = -VAR_2;
   break;
  }

  VAR_15++;
  VAR_18++;
 }

 VAR_17->msg = ((void*)0);
 VAR_17->flags = 0;
 VAR_17->status = 0;

 FUNC_0(VAR_17, VAR_4, 0);
 FUNC_0(VAR_17, VAR_6, 0);
 FUNC_0(VAR_17, VAR_5, 0);
 FUNC_0(VAR_17, VAR_3, 0);





 FUNC_0(VAR_17, VAR_8, 0);
 FUNC_0(VAR_17, VAR_7, 0);
 FUNC_0(VAR_17, VAR_9, 0);

 return VAR_16;
}
