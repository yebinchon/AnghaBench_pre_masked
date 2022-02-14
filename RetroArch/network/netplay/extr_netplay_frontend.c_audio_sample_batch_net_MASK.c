
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t (* sample_batch_cb ) (int const*,size_t) ;} ;
struct TYPE_6__ {TYPE_1__ cbs; int stall; } ;
typedef TYPE_2__ netplay_t ;
typedef int int16_t ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 size_t FUNC_1 (int const*,size_t) ;

size_t FUNC_2(const int16_t *VAR_1, size_t VAR_2)
{
   netplay_t *VAR_3 = VAR_0;
   if (!FUNC_0(VAR_3) && !VAR_3->stall)
      return VAR_3->cbs.sample_batch_cb(VAR_1, VAR_2);
   return VAR_2;
}
