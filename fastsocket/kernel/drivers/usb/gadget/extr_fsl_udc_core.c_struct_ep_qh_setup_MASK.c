
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_udc {struct ep_queue_head* ep_qh; } ;
struct ep_queue_head {int next_dtd_ptr; scalar_t__ size_ioc_int_sts; int max_pkt_length; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned int VAR_3 ;




 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(struct fsl_udc *VAR_4, unsigned char VAR_5,
  unsigned char VAR_6, unsigned char VAR_7,
  unsigned int VAR_8,
  unsigned int VAR_9, unsigned char VAR_10)
{
 struct ep_queue_head *VAR_11 = &VAR_4->ep_qh[2 * VAR_5 + VAR_6];
 unsigned int VAR_12 = 0;


 switch (VAR_7) {
 case 130:

  VAR_12 = (VAR_8 << VAR_1)
   | VAR_0;
  break;
 case 128:
  VAR_12 = (VAR_8 << VAR_1)
   | (VAR_10 << VAR_2);
  break;
 case 131:
 case 129:
  VAR_12 = VAR_8 << VAR_1;
  break;
 default:
  FUNC_0("error ep type is %d", VAR_7);
  return;
 }
 if (VAR_9)
  VAR_12 |= VAR_3;

 VAR_11->max_pkt_length = FUNC_1(VAR_12);
 VAR_11->next_dtd_ptr = 1;
 VAR_11->size_ioc_int_sts = 0;

 return;
}
