
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int datalen; void* bufaddrl; void* bufaddrh; } ;
struct rxdesc {TYPE_2__ desc1; scalar_t__* dw; } ;
struct jme_ring {struct jme_buffer_info* bufinf; struct rxdesc* desc; } ;
struct jme_buffer_info {int len; scalar_t__ mapping; } ;
struct jme_adapter {TYPE_1__* dev; struct jme_ring* rxring; } ;
typedef int __u64 ;
struct TYPE_3__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct jme_adapter *VAR_4, int VAR_5)
{
 struct jme_ring *VAR_6 = &(VAR_4->rxring[0]);
 register struct rxdesc *VAR_7 = VAR_6->desc;
 struct jme_buffer_info *VAR_8 = VAR_6->bufinf;
 VAR_7 += VAR_5;
 VAR_8 += VAR_5;

 VAR_7->dw[0] = 0;
 VAR_7->dw[1] = 0;
 VAR_7->desc1.bufaddrh = FUNC_1((__u64)VAR_8->mapping >> 32);
 VAR_7->desc1.bufaddrl = FUNC_1(
     (__u64)VAR_8->mapping & 0xFFFFFFFFUL);
 VAR_7->desc1.datalen = FUNC_0(VAR_8->len);
 if (VAR_4->dev->features & VAR_0)
  VAR_7->desc1.flags = VAR_1;
 FUNC_2();
 VAR_7->desc1.flags |= VAR_3 | VAR_2;
}
