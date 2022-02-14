
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * consumer; int * producer; } ;
struct aac_queue {scalar_t__ entries; struct aac_entry* base; TYPE_1__ headers; } ;
struct aac_entry {int dummy; } ;
struct aac_dev {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct aac_dev * VAR_0, struct aac_queue * VAR_1, struct aac_entry **VAR_2)
{
 u32 VAR_3;
 int VAR_4;
 if (FUNC_0(*VAR_1->headers.producer) == FUNC_0(*VAR_1->headers.consumer)) {
  VAR_4 = 0;
 } else {





  if (FUNC_0(*VAR_1->headers.consumer) >= VAR_1->entries)
   VAR_3 = 0;
  else
   VAR_3 = FUNC_0(*VAR_1->headers.consumer);
  *VAR_2 = VAR_1->base + VAR_3;
  VAR_4 = 1;
 }
 return(VAR_4);
}
