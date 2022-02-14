
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {int fc; } ;
struct TYPE_7__ {unsigned int elst_count; int time_scale; TYPE_1__* elst_data; } ;
struct TYPE_6__ {scalar_t__ time; scalar_t__ duration; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef TYPE_3__ MOVContext ;


 scalar_t__ FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(MOVContext *VAR_0,
                               const MOVStreamContext *VAR_1,
                               unsigned int VAR_2,
                               int64_t *VAR_3,
                               int64_t *VAR_4,
                               int64_t VAR_5)
{
    if (VAR_2 == VAR_1->elst_count) {
        return 0;
    }
    *VAR_3 = VAR_1->elst_data[VAR_2].time;
    *VAR_4 = VAR_1->elst_data[VAR_2].duration;


    if (VAR_5 == 0) {
      FUNC_1(VAR_0->fc, "Support for mvhd.timescale = 0 with editlists");
      return 0;
    }
    *VAR_4 = FUNC_0(*VAR_4, VAR_1->time_scale,
                                     VAR_5);
    return 1;
}
