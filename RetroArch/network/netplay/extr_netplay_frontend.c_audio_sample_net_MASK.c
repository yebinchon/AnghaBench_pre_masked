
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* sample_cb ) (int ,int ) ;} ;
struct TYPE_6__ {TYPE_1__ cbs; int stall; } ;
typedef TYPE_2__ netplay_t ;
typedef int int16_t ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(int16_t VAR_1, int16_t VAR_2)
{
   netplay_t *VAR_3 = VAR_0;
   if (!FUNC_0(VAR_3) && !VAR_3->stall)
      VAR_3->cbs.sample_cb(VAR_1, VAR_2);
}
