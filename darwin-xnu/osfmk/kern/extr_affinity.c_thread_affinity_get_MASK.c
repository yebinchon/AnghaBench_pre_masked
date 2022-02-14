
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_2__* thread_t ;
struct TYPE_5__ {TYPE_1__* affinity_set; } ;
struct TYPE_4__ {int aset_tag; } ;


 int VAR_0 ;

uint32_t
FUNC_0(thread_t VAR_1)
{
 uint32_t VAR_2;

 if (VAR_1->affinity_set != ((void*)0))
  VAR_2 = VAR_1->affinity_set->aset_tag;
 else
  VAR_2 = VAR_0;

 return VAR_2;
}
