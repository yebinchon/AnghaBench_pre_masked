
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {void* bufaddrl; void* bufaddrh; int datalen; int flags; } ;
struct txdesc {TYPE_1__ desc2; scalar_t__* dw; } ;
struct pci_dev {int dummy; } ;
struct page {int dummy; } ;
struct jme_buffer_info {int len; scalar_t__ mapping; } ;
typedef scalar_t__ dma_addr_t ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (struct pci_dev*,struct page*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct pci_dev *VAR_3,
  struct txdesc *VAR_4,
  struct jme_buffer_info *VAR_5,
  struct page *VAR_6,
  u32 VAR_7,
  u32 VAR_8,
  u8 VAR_9)
{
 dma_addr_t VAR_10;

 VAR_10 = FUNC_3(VAR_3,
    VAR_6,
    VAR_7,
    VAR_8,
    VAR_0);

 FUNC_2(VAR_3,
           VAR_10,
           VAR_8,
           VAR_0);

 VAR_4->dw[0] = 0;
 VAR_4->dw[1] = 0;
 VAR_4->desc2.flags = VAR_2;
 VAR_4->desc2.flags |= (VAR_9) ? VAR_1 : 0;
 VAR_4->desc2.datalen = FUNC_0(VAR_8);
 VAR_4->desc2.bufaddrh = FUNC_1((__u64)VAR_10 >> 32);
 VAR_4->desc2.bufaddrl = FUNC_1(
     (__u64)VAR_10 & 0xFFFFFFFFUL);

 VAR_5->mapping = VAR_10;
 VAR_5->len = VAR_8;
}
