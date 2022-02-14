
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct mtd_blktrans_dev {int dummy; } ;
struct TYPE_6__ {int EraseUnitSize; } ;
struct TYPE_7__ {int* VirtualBlockMap; TYPE_1__* EUNInfo; TYPE_2__ header; } ;
typedef TYPE_3__ partition_t ;
struct TYPE_5__ {int Deleted; } ;


 int FUNC_0 (int,char*,unsigned long,unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mtd_blktrans_dev *VAR_1,
      unsigned long VAR_2, unsigned VAR_3)
{
 partition_t *VAR_4 = (void *)VAR_1;
 uint32_t VAR_5 = 1 << VAR_4->header.EraseUnitSize;

 FUNC_0(1, "FTL erase sector %ld for %d sectors\n",
       VAR_2, VAR_3);

 while (VAR_3) {
  uint32_t VAR_6 = VAR_4->VirtualBlockMap[VAR_2];
  if (VAR_6 != 0xffffffff) {
   VAR_4->VirtualBlockMap[VAR_2] = 0xffffffff;
   VAR_4->EUNInfo[VAR_6/VAR_5].Deleted++;
   if (FUNC_1(VAR_4, VAR_6, 0))
    return -VAR_0;
  }
  VAR_3--;
  VAR_2++;
 }

 return 0;
}
