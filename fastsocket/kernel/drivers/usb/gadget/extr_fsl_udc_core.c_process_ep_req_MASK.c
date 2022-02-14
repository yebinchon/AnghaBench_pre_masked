
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_udc {struct ep_queue_head* ep_qh; } ;
struct TYPE_2__ {int length; int actual; } ;
struct fsl_req {int dtd_count; TYPE_1__ req; struct ep_td_struct* head; } ;
struct ep_td_struct {scalar_t__ next_td_virt; int size_ioc_sts; } ;
struct ep_queue_head {int size_ioc_int_sts; } ;


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
 int FUNC_0 (char*,int,...) ;
 int VAR_10 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct fsl_udc *VAR_11, int VAR_12,
  struct fsl_req *VAR_13)
{
 struct ep_td_struct *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20 = 0;
 int VAR_21 = 0;
 struct ep_queue_head *VAR_22 = &VAR_11->ep_qh[VAR_12];
 int VAR_23 = VAR_12 % 2;

 VAR_14 = VAR_13->head;
 VAR_15 = 0;
 VAR_16 = VAR_13->req.length;

 for (VAR_18 = 0; VAR_18 < VAR_13->dtd_count; VAR_18++) {
  VAR_17 = (FUNC_3(VAR_14->size_ioc_sts)
     & VAR_2)
    >> VAR_1;
  VAR_16 -= VAR_17;

  if ((VAR_21 = FUNC_3(VAR_14->size_ioc_sts) &
      VAR_0)) {
   if (VAR_21 & VAR_5) {
    FUNC_0("dTD error %08x QH=%d\n", VAR_21, VAR_12);

    VAR_19 = FUNC_3(VAR_22->size_ioc_int_sts);
    VAR_19 &= ~VAR_21;
    VAR_22->size_ioc_int_sts = FUNC_2(VAR_19);
    VAR_20 = -VAR_8;


    break;
   }
   if (VAR_21 & VAR_4) {
    FUNC_1("Transfer overflow");
    VAR_20 = -VAR_9;
    break;
   } else if (VAR_21 & VAR_6) {
    FUNC_1("ISO error");
    VAR_20 = -VAR_7;
    break;
   } else
    FUNC_0("Unknown error has occured (0x%x)!\n",
     VAR_21);

  } else if (FUNC_3(VAR_14->size_ioc_sts)
    & VAR_3) {
   FUNC_1("Request not complete");
   VAR_20 = VAR_10;
   return VAR_20;
  } else if (VAR_17) {
   if (VAR_23) {
    FUNC_1("Transmit dTD remaining length not zero");
    VAR_20 = -VAR_9;
    break;
   } else {
    VAR_15++;
    break;
   }
  } else {
   VAR_15++;
   FUNC_1("dTD transmitted successful");
  }

  if (VAR_18 != VAR_13->dtd_count - 1)
   VAR_14 = (struct ep_td_struct *)VAR_14->next_td_virt;
 }

 if (VAR_20)
  return VAR_20;

 VAR_13->req.actual = VAR_16;

 return 0;
}
