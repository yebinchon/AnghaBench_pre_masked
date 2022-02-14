
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* kcdata_descriptor_t ;
struct TYPE_3__ {scalar_t__ kcd_addr_begin; } ;



void *FUNC_0(kcdata_descriptor_t VAR_0)
{
 if (VAR_0 == ((void*)0)) {
  return ((void*)0);
 }

 return (void *)VAR_0->kcd_addr_begin;
}
