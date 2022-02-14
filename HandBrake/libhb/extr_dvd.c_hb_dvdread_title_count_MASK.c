
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* vmg; } ;
typedef TYPE_3__ hb_dvdread_t ;
struct TYPE_9__ {TYPE_3__ dvdread; } ;
typedef TYPE_4__ hb_dvd_t ;
struct TYPE_7__ {TYPE_1__* tt_srpt; } ;
struct TYPE_6__ {int nr_of_srpts; } ;



__attribute__((used)) static int FUNC_0( hb_dvd_t * VAR_0 )
{
    hb_dvdread_t *VAR_1 = &(VAR_0->dvdread);
    return VAR_1->vmg->tt_srpt->nr_of_srpts;
}
