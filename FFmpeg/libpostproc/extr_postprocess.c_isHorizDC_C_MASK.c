
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {int baseDcDiff; int flatnessThreshold; } ;
struct TYPE_5__ {int nonBQP; TYPE_1__ ppMode; } ;
typedef TYPE_2__ PPContext ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const uint8_t VAR_1[], int VAR_2, const PPContext *VAR_3)
{
    int VAR_4= 0;
    int VAR_5;
    const int VAR_6= ((VAR_3->nonBQP*VAR_3->ppMode.baseDcDiff)>>8) + 1;
    const int VAR_7= VAR_6*2 + 1;

    for(VAR_5=0; VAR_5<VAR_0; VAR_5++){
        VAR_4 += ((unsigned)(VAR_1[0] - VAR_1[1] + VAR_6)) < VAR_7;
        VAR_4 += ((unsigned)(VAR_1[1] - VAR_1[2] + VAR_6)) < VAR_7;
        VAR_4 += ((unsigned)(VAR_1[2] - VAR_1[3] + VAR_6)) < VAR_7;
        VAR_4 += ((unsigned)(VAR_1[3] - VAR_1[4] + VAR_6)) < VAR_7;
        VAR_4 += ((unsigned)(VAR_1[4] - VAR_1[5] + VAR_6)) < VAR_7;
        VAR_4 += ((unsigned)(VAR_1[5] - VAR_1[6] + VAR_6)) < VAR_7;
        VAR_4 += ((unsigned)(VAR_1[6] - VAR_1[7] + VAR_6)) < VAR_7;
        VAR_1+= VAR_2;
    }
    return VAR_4 > VAR_3->ppMode.flatnessThreshold;
}
