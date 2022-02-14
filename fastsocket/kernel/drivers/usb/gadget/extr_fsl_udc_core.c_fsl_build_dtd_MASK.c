
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ length; scalar_t__ actual; scalar_t__ dma; int no_interrupt; scalar_t__ zero; } ;
struct fsl_req {TYPE_3__ req; TYPE_2__* ep; } ;
struct ep_td_struct {int size_ioc_sts; void* buff_ptr4; void* buff_ptr3; void* buff_ptr2; void* buff_ptr1; void* buff_ptr0; scalar_t__ td_dma; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_8__ {int td_pool; } ;
struct TYPE_5__ {unsigned int maxpacket; } ;
struct TYPE_6__ {TYPE_1__ ep; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 void* FUNC_1 (int) ;
 struct ep_td_struct* FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 () ;
 unsigned int FUNC_4 (scalar_t__,unsigned int) ;
 TYPE_4__* VAR_6 ;

__attribute__((used)) static struct ep_td_struct *FUNC_5(struct fsl_req *VAR_7, unsigned *VAR_8,
  dma_addr_t *VAR_9, int *VAR_10)
{
 u32 VAR_11;
 struct ep_td_struct *VAR_12;


 *VAR_8 = FUNC_4(VAR_7->req.length - VAR_7->req.actual,
   (unsigned)VAR_4);

 VAR_12 = FUNC_2(VAR_6->td_pool, VAR_5, VAR_9);
 if (VAR_12 == ((void*)0))
  return VAR_12;

 VAR_12->td_dma = *VAR_9;

 VAR_11 = FUNC_1(VAR_12->size_ioc_sts);
 VAR_11 &= ~VAR_2;
 VAR_12->size_ioc_sts = FUNC_1(VAR_11);


 VAR_11 = (u32) (VAR_7->req.dma + VAR_7->req.actual);
 VAR_12->buff_ptr0 = FUNC_1(VAR_11);
 VAR_12->buff_ptr1 = FUNC_1(VAR_11 + 0x1000);
 VAR_12->buff_ptr2 = FUNC_1(VAR_11 + 0x2000);
 VAR_12->buff_ptr3 = FUNC_1(VAR_11 + 0x3000);
 VAR_12->buff_ptr4 = FUNC_1(VAR_11 + 0x4000);

 VAR_7->req.actual += *VAR_8;


 if (VAR_7->req.zero) {
  if (*VAR_8 == 0 || (*VAR_8 % VAR_7->ep->ep.maxpacket) != 0)
   *VAR_10 = 1;
  else
   *VAR_10 = 0;
 } else if (VAR_7->req.length == VAR_7->req.actual)
  *VAR_10 = 1;
 else
  *VAR_10 = 0;

 if ((*VAR_10) == 0)
  FUNC_0("multi-dtd request!");

 VAR_11 = ((*VAR_8 << VAR_1) | VAR_3);


 if (*VAR_10 && !VAR_7->req.no_interrupt)
  VAR_11 |= VAR_0;

 VAR_12->size_ioc_sts = FUNC_1(VAR_11);

 FUNC_3();

 FUNC_0("length = %d address= 0x%x", *VAR_8, (int)*VAR_9);

 return VAR_12;
}
