
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct kcdata_item {int dummy; } ;
typedef TYPE_1__* kcdata_descriptor_t ;
struct TYPE_3__ {scalar_t__ kcd_addr_begin; scalar_t__ kcd_addr_end; } ;


 int FUNC_0 (int ) ;

uint64_t FUNC_1(kcdata_descriptor_t VAR_0)
{
 FUNC_0(VAR_0 != ((void*)0));
 return ((uint64_t)VAR_0->kcd_addr_end - (uint64_t)VAR_0->kcd_addr_begin) + sizeof(struct kcdata_item);
}
