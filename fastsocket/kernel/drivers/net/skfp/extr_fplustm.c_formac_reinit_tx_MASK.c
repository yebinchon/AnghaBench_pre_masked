
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* a; } ;
struct TYPE_6__ {int tx_s_size; } ;
struct TYPE_7__ {TYPE_1__ fifo; } ;
struct TYPE_8__ {TYPE_2__ fp; } ;
struct s_smc {TYPE_5__ mib; TYPE_3__ hw; } ;
struct TYPE_9__ {scalar_t__ fddiPATHSbaPayload; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct s_smc*,int ) ;

void FUNC_1(struct s_smc *VAR_1)
{





 if (!VAR_1->hw.fp.fifo.tx_s_size && VAR_1->mib.a[VAR_0].fddiPATHSbaPayload){
  (void)FUNC_0(VAR_1,0) ;
 }
}
