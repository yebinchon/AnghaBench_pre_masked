
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int led1; int led2; int led3; int led4; } ;
struct TYPE_6__ {int byte; TYPE_1__ bits; } ;
struct TYPE_7__ {scalar_t__ cardtype; int XILINXbase; TYPE_2__ pld_scrw; } ;
typedef TYPE_3__ IXJ ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(int VAR_1, IXJ *VAR_2)
{
 if (VAR_2->cardtype == VAR_0) {
  VAR_2->pld_scrw.bits.led1 = VAR_1 & 0x1 ? 1 : 0;
  VAR_2->pld_scrw.bits.led2 = VAR_1 & 0x2 ? 1 : 0;
  VAR_2->pld_scrw.bits.led3 = VAR_1 & 0x4 ? 1 : 0;
  VAR_2->pld_scrw.bits.led4 = VAR_1 & 0x8 ? 1 : 0;

  FUNC_0(VAR_2->pld_scrw.byte, VAR_2->XILINXbase);
 }
}
