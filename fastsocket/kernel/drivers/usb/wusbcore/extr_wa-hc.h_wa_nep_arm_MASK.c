
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wahc {int nep_buffer_size; int nep_buffer; struct urb* nep_urb; } ;
struct urb {int transfer_buffer_length; int transfer_buffer; } ;
typedef int gfp_t ;


 int FUNC_0 (struct urb*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct wahc *VAR_0, gfp_t VAR_1)
{
 struct urb *VAR_2 = VAR_0->nep_urb;
 VAR_2->transfer_buffer = VAR_0->nep_buffer;
 VAR_2->transfer_buffer_length = VAR_0->nep_buffer_size;
 return FUNC_0(VAR_2, VAR_1);
}
