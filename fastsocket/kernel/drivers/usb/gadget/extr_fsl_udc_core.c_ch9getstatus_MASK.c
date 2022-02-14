
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct fsl_udc {int remote_wakeup; int ep0_state; struct fsl_req* status_req; int ep0_dir; struct fsl_ep* eps; } ;
struct TYPE_2__ {int length; int * complete; scalar_t__ actual; int status; scalar_t__ buf; } ;
struct fsl_req {int queue; scalar_t__ dtd_count; TYPE_1__ req; struct fsl_ep* ep; } ;
struct fsl_ep {int queue; int desc; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct fsl_udc*) ;
 int FUNC_3 (struct fsl_ep*) ;
 int FUNC_4 (struct fsl_ep*) ;
 int FUNC_5 (struct fsl_ep*,struct fsl_req*) ;
 scalar_t__ FUNC_6 (struct fsl_req*) ;
 struct fsl_ep* FUNC_7 (struct fsl_udc*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static void FUNC_10(struct fsl_udc *VAR_10, u8 VAR_11, u16 VAR_12,
  u16 VAR_13, u16 VAR_14)
{
 u16 VAR_15 = 0;
 struct fsl_req *VAR_16;
 struct fsl_ep *VAR_17;

 VAR_17 = &VAR_10->eps[0];

 if ((VAR_11 & VAR_9) == VAR_6) {

  VAR_15 = 1 << VAR_3;
  VAR_15 |= VAR_10->remote_wakeup << VAR_2;
 } else if ((VAR_11 & VAR_9) == VAR_8) {


  VAR_15 = 0;
 } else if ((VAR_11 & VAR_9) == VAR_7) {

  struct fsl_ep *VAR_18;

  VAR_18 = FUNC_7(VAR_10, FUNC_8(VAR_13));


  if (!VAR_18->desc)
   goto stall;
  VAR_15 = FUNC_1(FUNC_3(VAR_18), FUNC_4(VAR_18))
    << VAR_5;
 }

 VAR_10->ep0_dir = VAR_4;

 VAR_16 = VAR_10->status_req;

 *((u16 *) VAR_16->req.buf) = FUNC_0(VAR_15);
 VAR_16->ep = VAR_17;
 VAR_16->req.length = 2;
 VAR_16->req.status = -VAR_1;
 VAR_16->req.actual = 0;
 VAR_16->req.complete = ((void*)0);
 VAR_16->dtd_count = 0;


 if ((FUNC_6(VAR_16) == 0))
  FUNC_5(VAR_17, VAR_16);
 else
  goto stall;

 FUNC_9(&VAR_16->queue, &VAR_17->queue);
 VAR_10->ep0_state = VAR_0;
 return;
stall:
 FUNC_2(VAR_10);
}
