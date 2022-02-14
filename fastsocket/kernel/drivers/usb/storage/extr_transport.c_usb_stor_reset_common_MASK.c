
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct us_data {int send_bulk_pipe; int recv_bulk_pipe; int dflags; int delay_wait; int send_ctrl_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct us_data*,int ) ;
 int FUNC_3 (struct us_data*,int ,int ,int ,int ,int ,void*,int ,int) ;
 int FUNC_4 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct us_data *VAR_3,
  u8 VAR_4, u8 VAR_5,
  u16 VAR_6, u16 VAR_7, void *VAR_8, u16 VAR_9)
{
 int VAR_10;
 int VAR_11;

 if (FUNC_1(VAR_2, &VAR_3->dflags)) {
  FUNC_0("No reset during disconnect\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_3, VAR_3->send_ctrl_pipe,
   VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
   5*VAR_1);
 if (VAR_10 < 0) {
  FUNC_0("Soft reset failed: %d\n", VAR_10);
  return VAR_10;
 }



 FUNC_4(VAR_3->delay_wait,
   FUNC_1(VAR_2, &VAR_3->dflags),
   VAR_1*6);
 if (FUNC_1(VAR_2, &VAR_3->dflags)) {
  FUNC_0("Reset interrupted by disconnect\n");
  return -VAR_0;
 }

 FUNC_0("Soft reset: clearing bulk-in endpoint halt\n");
 VAR_10 = FUNC_2(VAR_3, VAR_3->recv_bulk_pipe);

 FUNC_0("Soft reset: clearing bulk-out endpoint halt\n");
 VAR_11 = FUNC_2(VAR_3, VAR_3->send_bulk_pipe);


 if (VAR_10 >= 0)
  VAR_10 = VAR_11;
 if (VAR_10 < 0)
  FUNC_0("Soft reset failed\n");
 else
  FUNC_0("Soft reset done\n");
 return VAR_10;
}
