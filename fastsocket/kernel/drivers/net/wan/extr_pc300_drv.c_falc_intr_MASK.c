
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ media; } ;
typedef TYPE_2__ pc300chconf_t ;
struct TYPE_10__ {int conf; } ;
typedef TYPE_3__ pc300ch_t ;
struct TYPE_8__ {int nchan; } ;
struct TYPE_11__ {TYPE_3__* chan; TYPE_1__ hw; } ;
typedef TYPE_4__ pc300_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_2(pc300_t * VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->hw.nchan; VAR_2++) {
  pc300ch_t *VAR_3 = &VAR_1->chan[VAR_2];
  pc300chconf_t *VAR_4 = (pc300chconf_t *) & VAR_3->conf;

  if (VAR_4->media == VAR_0) {
   FUNC_1(VAR_1, VAR_2);
  } else {
   FUNC_0(VAR_1, VAR_2);
  }
 }
}
