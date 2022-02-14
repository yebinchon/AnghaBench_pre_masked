
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int rxg; scalar_t__ lom; scalar_t__ hom; } ;
struct TYPE_13__ {TYPE_4__ bits; int byte; } ;
struct TYPE_10__ {int addr; scalar_t__ dev; scalar_t__ rw; } ;
struct TYPE_11__ {int byte; TYPE_2__ bits; } ;
struct TYPE_9__ {scalar_t__ pcmciascp; } ;
struct TYPE_14__ {scalar_t__ cardtype; TYPE_5__ siadc; scalar_t__ XILINXbase; TYPE_3__ psccr; TYPE_1__ flags; } ;
typedef TYPE_6__ IXJ ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(IXJ *VAR_1, int VAR_2)
{
 if(VAR_1->cardtype == VAR_0){
  if(VAR_1->flags.pcmciascp){
   if(VAR_2 == -1)
    return VAR_1->siadc.bits.rxg;

   if(VAR_2 < 0 || VAR_2 > 0x1F)
    return -1;

   VAR_1->siadc.bits.hom = 0;
   VAR_1->siadc.bits.lom = 0;
   VAR_1->siadc.bits.rxg = VAR_2;
   VAR_1->psccr.bits.addr = 6;
   VAR_1->psccr.bits.rw = 0;
   VAR_1->psccr.bits.dev = 0;
   FUNC_1(VAR_1->siadc.byte, VAR_1->XILINXbase + 0x00);
   FUNC_1(VAR_1->psccr.byte, VAR_1->XILINXbase + 0x01);
   FUNC_0(VAR_1);
   return VAR_1->siadc.bits.rxg;
  }
 }
 return -1;
}
