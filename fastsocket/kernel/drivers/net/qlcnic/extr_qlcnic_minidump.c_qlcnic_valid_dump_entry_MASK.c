
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ cap_size; int mask; int type; } ;
struct qlcnic_dump_entry {TYPE_1__ hdr; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0,
       struct qlcnic_dump_entry *VAR_1, u32 VAR_2)
{
 int VAR_3 = 1;
 if (VAR_2 != VAR_1->hdr.cap_size) {
  FUNC_0(VAR_0,
   "Invalid entry, Type:%d\tMask:%d\tSize:%dCap_size:%d\n",
   VAR_1->hdr.type, VAR_1->hdr.mask, VAR_2,
   VAR_1->hdr.cap_size);
  VAR_3 = 0;
 }
 return VAR_3;
}
