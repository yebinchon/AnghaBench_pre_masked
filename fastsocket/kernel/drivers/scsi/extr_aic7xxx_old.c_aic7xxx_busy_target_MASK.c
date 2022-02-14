
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aic7xxx_scb {TYPE_1__* hscb; } ;
struct aic7xxx_host {int * untagged_scbs; } ;
struct TYPE_2__ {size_t target_channel_lun; int tag; } ;



__attribute__((used)) static inline void
FUNC_0(struct aic7xxx_host *VAR_0, struct aic7xxx_scb *VAR_1)
{
  VAR_0->untagged_scbs[VAR_1->hscb->target_channel_lun] = VAR_1->hscb->tag;
}
