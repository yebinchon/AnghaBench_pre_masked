
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct iw_quality {int qual; int level; int noise; int updated; } ;
typedef int __u8 ;
struct TYPE_7__ {int updated; } ;
struct TYPE_8__ {TYPE_2__ qual; } ;
struct TYPE_6__ {scalar_t__ FalseCcaUpperThreshold; } ;
struct TYPE_9__ {scalar_t__* BbpWriteLatch; TYPE_3__ iw_stats; TYPE_1__ BbpTuning; } ;
typedef TYPE_4__* PRTMP_ADAPTER ;



__attribute__((used)) static void FUNC_0(PRTMP_ADAPTER VAR_0,
                        struct iw_quality *VAR_1,
                        signed char VAR_2)
{
 __u8 VAR_3;


 if (VAR_2 >= -50)
        VAR_3 = 100;
 else if (VAR_2 >= -80)
  VAR_3 = (__u8)(24 + ((VAR_2 + 80) * 26)/10);
 else if (VAR_2 >= -90)
        VAR_3 = (__u8)((VAR_2 + 90) * 26)/10;
 else
  VAR_3 = 0;

    VAR_1->qual = (__u8)VAR_3;

    VAR_1->level = (__u8)(VAR_2);
    VAR_1->noise = (VAR_0->BbpWriteLatch[66] > VAR_0->BbpTuning.FalseCcaUpperThreshold) ? ((__u8)VAR_0->BbpTuning.FalseCcaUpperThreshold) : ((__u8) VAR_0->BbpWriteLatch[66]);
    VAR_1->noise += 256 - 143;
    VAR_1->updated = VAR_0->iw_stats.qual.updated;
}
