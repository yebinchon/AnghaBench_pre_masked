
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int tslot_bitmap; } ;
typedef TYPE_1__ pc300chconf_t ;
struct TYPE_9__ {int falc; int conf; } ;
typedef TYPE_2__ pc300ch_t ;
struct TYPE_10__ {int * chan; } ;
typedef TYPE_3__ pc300_t ;
struct TYPE_11__ {int num_channels; } ;
typedef TYPE_4__ falc_t ;


 int FUNC_0 (TYPE_3__*,int,int) ;
 int FUNC_1 (TYPE_3__*,int,int) ;

__attribute__((used)) static void FUNC_2(pc300_t * VAR_0, int VAR_1)
{
 pc300ch_t *VAR_2 = (pc300ch_t *) & VAR_0->chan[VAR_1];
 pc300chconf_t *VAR_3 = (pc300chconf_t *) & VAR_2->conf;
 falc_t *VAR_4 = (falc_t *) & VAR_2->falc;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_channels; VAR_5++) {
  if (VAR_3->tslot_bitmap & (1 << VAR_5)) {

   FUNC_1(VAR_0, VAR_1, VAR_5 + 1);
  } else {

   FUNC_0(VAR_0, VAR_1, VAR_5 + 1);
  }
 }
}
