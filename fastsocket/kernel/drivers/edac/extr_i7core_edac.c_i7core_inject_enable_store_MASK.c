
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long long u64 ;
typedef long long u32 ;
struct mem_ctl_info {struct i7core_pvt* pvt_info; } ;
struct TYPE_4__ {size_t channel; int enable; int dimm; int rank; int bank; int page; int col; int type; int section; long long eccmask; } ;
struct i7core_pvt {TYPE_2__ inject; int pci_noncore; int ** pci_ch; TYPE_1__* channel; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {int dimms; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,long long,long long,long long) ;
 int FUNC_1 (struct mem_ctl_info*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int ,scalar_t__,long long) ;

__attribute__((used)) static ssize_t FUNC_5(struct mem_ctl_info *VAR_4,
           const char *VAR_5, size_t VAR_6)
{
 struct i7core_pvt *VAR_7 = VAR_4->pvt_info;
 u32 VAR_8;
 u64 VAR_9 = 0;
 int VAR_10;
 long VAR_11;

 if (!VAR_7->pci_ch[VAR_7->inject.channel][0])
  return 0;

 VAR_10 = FUNC_3(VAR_5, 10, &VAR_11);
 if ((VAR_10 < 0))
  return 0;

 if (VAR_11) {
  VAR_7->inject.enable = 1;
 } else {
  FUNC_1(VAR_4);
  return VAR_6;
 }


 if (VAR_7->inject.dimm < 0)
  VAR_9 |= 1LL << 41;
 else {
  if (VAR_7->channel[VAR_7->inject.channel].dimms > 2)
   VAR_9 |= (VAR_7->inject.dimm & 0x3LL) << 35;
  else
   VAR_9 |= (VAR_7->inject.dimm & 0x1LL) << 36;
 }


 if (VAR_7->inject.rank < 0)
  VAR_9 |= 1LL << 40;
 else {
  if (VAR_7->channel[VAR_7->inject.channel].dimms > 2)
   VAR_9 |= (VAR_7->inject.rank & 0x1LL) << 34;
  else
   VAR_9 |= (VAR_7->inject.rank & 0x3LL) << 34;
 }


 if (VAR_7->inject.bank < 0)
  VAR_9 |= 1LL << 39;
 else
  VAR_9 |= (VAR_7->inject.bank & 0x15LL) << 30;


 if (VAR_7->inject.page < 0)
  VAR_9 |= 1LL << 38;
 else
  VAR_9 |= (VAR_7->inject.page & 0xffff) << 14;


 if (VAR_7->inject.col < 0)
  VAR_9 |= 1LL << 37;
 else
  VAR_9 |= (VAR_7->inject.col & 0x3fff);
 VAR_8 = (VAR_7->inject.type & 1) |
       (VAR_7->inject.section & 0x3) << 1 |
       (VAR_7->inject.type & 0x6) << (3 - 1);


 FUNC_2(VAR_7->pci_noncore,
          VAR_0, 0x2);

 FUNC_4(VAR_7->pci_ch[VAR_7->inject.channel][0],
          VAR_1, VAR_9);
 FUNC_4(VAR_7->pci_ch[VAR_7->inject.channel][0],
          VAR_1 + 4, VAR_9 >> 32L);

 FUNC_4(VAR_7->pci_ch[VAR_7->inject.channel][0],
          VAR_3, VAR_7->inject.eccmask);

 FUNC_4(VAR_7->pci_ch[VAR_7->inject.channel][0],
          VAR_2, VAR_8);






 FUNC_2(VAR_7->pci_noncore,
          VAR_0, 8);

 FUNC_0("Error inject addr match 0x%016llx, ecc 0x%08x,"
  " inject 0x%08x\n",
  VAR_9, VAR_7->inject.eccmask, VAR_8);


 return VAR_6;
}
