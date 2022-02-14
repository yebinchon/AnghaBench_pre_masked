
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CR1; int CR2; int HIRQ; } ;
struct TYPE_4__ {int mpegintmask; TYPE_1__ reg; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int ) ;

void FUNC_1(void) {
   VAR_2->mpegintmask = ((VAR_2->reg.CR1 & 0xFF) << 16) | VAR_2->reg.CR2;

   FUNC_0(VAR_2->status);
   VAR_2->reg.HIRQ |= VAR_0 | VAR_1;
}
