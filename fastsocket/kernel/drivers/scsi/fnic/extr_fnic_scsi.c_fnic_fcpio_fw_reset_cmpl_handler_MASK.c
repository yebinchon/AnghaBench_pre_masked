
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct fnic {scalar_t__ state; int fnic_lock; int tx_queue; scalar_t__ remove_wait; TYPE_1__* lport; } ;
struct fcpio_tag {int dummy; } ;
struct fcpio_fw_req {int hdr; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *,int *,struct fcpio_tag*) ;
 int FUNC_3 (struct fnic*,int ) ;
 int FUNC_4 (struct fnic*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct fnic*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct fnic *VAR_6,
         struct fcpio_fw_req *VAR_7)
{
 u8 VAR_8;
 u8 VAR_9;
 struct fcpio_tag VAR_10;
 int VAR_11 = 0;
 unsigned long VAR_12;

 FUNC_2(&VAR_7->hdr, &VAR_8, &VAR_9, &VAR_10);


 FUNC_3(VAR_6, VAR_5);

 FUNC_9(&VAR_6->fnic_lock, VAR_12);


 if (VAR_6->state == VAR_3) {

  if (!VAR_9) {
   FUNC_0(VAR_4, VAR_6->lport->host,
          "reset cmpl success\n");

   VAR_6->state = VAR_1;
  } else {
   FUNC_0(VAR_4,
          VAR_6->lport->host,
          "fnic fw_reset : failed %s\n",
          FUNC_5(VAR_9));







   VAR_6->state = VAR_2;
   VAR_11 = -1;
  }
 } else {
  FUNC_0(VAR_4,
         VAR_6->lport->host,
         "Unexpected state %s while processing"
         " reset cmpl\n", FUNC_7(VAR_6->state));
  VAR_11 = -1;
 }


 if (VAR_6->remove_wait)
  FUNC_1(VAR_6->remove_wait);





 if (VAR_6->remove_wait || VAR_11) {
  FUNC_10(&VAR_6->fnic_lock, VAR_12);
  FUNC_8(&VAR_6->tx_queue);
  goto reset_cmpl_handler_end;
 }

 FUNC_10(&VAR_6->fnic_lock, VAR_12);

 FUNC_6(VAR_6);

 reset_cmpl_handler_end:
 FUNC_4(VAR_6, VAR_0);

 return VAR_11;
}
