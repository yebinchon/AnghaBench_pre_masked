
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef void* u32 ;
typedef scalar_t__ u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_6__ {scalar_t__ SGTotal; scalar_t__ SGList; } ;
struct CommandList {TYPE_3__ Header; TYPE_2__* SG; } ;
struct TYPE_4__ {void* upper; void* lower; } ;
struct TYPE_5__ {size_t Len; TYPE_1__ Addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_dev*,unsigned char*,size_t,int) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1,
  struct CommandList *VAR_2,
  unsigned char *VAR_3,
  size_t VAR_4,
  int VAR_5)
{
 u64 VAR_6;

 if (VAR_4 == 0 || VAR_5 == VAR_0) {
  VAR_2->Header.SGList = 0;
  VAR_2->Header.SGTotal = 0;
  return;
 }

 VAR_6 = (u64) FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5);
 VAR_2->SG[0].Addr.lower =
   (u32) (VAR_6 & (u64) 0x00000000FFFFFFFF);
 VAR_2->SG[0].Addr.upper =
   (u32) ((VAR_6 >> 32) & (u64) 0x00000000FFFFFFFF);
 VAR_2->SG[0].Len = VAR_4;
 VAR_2->Header.SGList = (u8) 1;
 VAR_2->Header.SGTotal = (u16) 1;
}
