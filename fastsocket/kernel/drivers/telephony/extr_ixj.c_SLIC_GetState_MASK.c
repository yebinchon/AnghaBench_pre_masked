
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int state; } ;
struct TYPE_17__ {TYPE_6__ bits; int byte; } ;
struct TYPE_14__ {int ring1; int ring0; scalar_t__ powerdown; } ;
struct TYPE_15__ {int byte; TYPE_4__ bits; } ;
struct TYPE_12__ {int dev; int rw; } ;
struct TYPE_13__ {int byte; TYPE_2__ bits; } ;
struct TYPE_11__ {scalar_t__ byte; } ;
struct TYPE_18__ {scalar_t__ cardtype; TYPE_7__ pld_slicr; scalar_t__ XILINXbase; TYPE_5__ pslic; TYPE_3__ psccr; TYPE_1__ pccr1; } ;
typedef TYPE_8__ IXJ ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static inline BYTE FUNC_4(IXJ *VAR_4)
{
 if (VAR_4->cardtype == VAR_3) {
  VAR_4->pccr1.byte = 0;
  VAR_4->psccr.bits.dev = 3;
  VAR_4->psccr.bits.rw = 1;
  FUNC_3(VAR_4->psccr.byte << 8, VAR_4->XILINXbase + 0x00);
  FUNC_2(VAR_4);
  VAR_4->pslic.byte = FUNC_1(VAR_4->XILINXbase + 0x00) & 0xFF;
  FUNC_2(VAR_4);
  if (VAR_4->pslic.bits.powerdown)
   return VAR_1;
  else if (!VAR_4->pslic.bits.ring0 && !VAR_4->pslic.bits.ring1)
   return VAR_0;
  else
   return VAR_2;
 } else {
  VAR_4->pld_slicr.byte = FUNC_0(VAR_4->XILINXbase + 0x01);
 }
 return VAR_4->pld_slicr.bits.state;
}
