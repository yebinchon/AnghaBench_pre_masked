
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {char* sense; } ;
struct TYPE_10__ {char* sense; } ;
struct TYPE_12__ {TYPE_3__ ddpc; TYPE_2__ iostat; } ;
struct tsb {int length; int flags; TYPE_4__ tsa; } ;
struct tcw {int dummy; } ;
struct TYPE_13__ {scalar_t__ cons; } ;
struct TYPE_14__ {TYPE_5__ erw; } ;
struct TYPE_15__ {TYPE_6__ esw0; } ;
struct TYPE_9__ {int fcxs; scalar_t__ tcw; } ;
struct TYPE_16__ {TYPE_1__ tm; } ;
struct irb {char* ecw; TYPE_7__ esw; TYPE_8__ scsw; } ;


 scalar_t__ FUNC_0 (TYPE_8__*) ;
 struct tsb* FUNC_1 (struct tcw*) ;

char *FUNC_2(struct irb *VAR_0)
{
 struct tsb *VAR_1 = ((void*)0);
 char *VAR_2 = ((void*)0);

 if (FUNC_0(&VAR_0->scsw) && (VAR_0->scsw.tm.fcxs == 0x01)) {
  if (VAR_0->scsw.tm.tcw)
   VAR_1 = FUNC_1((struct tcw *)(unsigned long)
       VAR_0->scsw.tm.tcw);
  if (VAR_1 && VAR_1->length == 64 && VAR_1->flags)
   switch (VAR_1->flags & 0x07) {
   case 1:
    VAR_2 = VAR_1->tsa.iostat.sense;
    break;
   case 2:
    VAR_2 = VAR_1->tsa.ddpc.sense;
    break;
   default:

    break;
   }
 } else if (VAR_0->esw.esw0.erw.cons) {
  VAR_2 = VAR_0->ecw;
 }
 return VAR_2;
}
