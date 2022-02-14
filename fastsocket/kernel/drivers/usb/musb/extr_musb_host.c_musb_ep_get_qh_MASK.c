
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb_qh {int dummy; } ;
struct musb_hw_ep {struct musb_qh* out_qh; struct musb_qh* in_qh; } ;



__attribute__((used)) static struct musb_qh *FUNC_0(struct musb_hw_ep *VAR_0, int VAR_1)
{
 return VAR_1 ? VAR_0->in_qh : VAR_0->out_qh;
}
