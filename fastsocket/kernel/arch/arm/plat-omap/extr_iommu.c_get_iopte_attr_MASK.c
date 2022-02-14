
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iotlb_entry {int dummy; } ;
struct TYPE_2__ {int (* get_pte_attr ) (struct iotlb_entry*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct iotlb_entry*) ;

__attribute__((used)) static u32 FUNC_1(struct iotlb_entry *VAR_1)
{
 return VAR_0->get_pte_attr(VAR_1);
}
