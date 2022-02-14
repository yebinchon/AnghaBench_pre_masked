
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* frame_cb ) (void const*,unsigned int,unsigned int,size_t) ;} ;
struct TYPE_6__ {TYPE_1__ cbs; } ;
typedef TYPE_2__ netplay_t ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (void const*,unsigned int,unsigned int,size_t) ;

void FUNC_2(const void *VAR_1, unsigned VAR_2,
      unsigned VAR_3, size_t VAR_4)
{
   netplay_t *VAR_5 = VAR_0;
   if (!FUNC_0(VAR_5))
      VAR_5->cbs.frame_cb(VAR_1, VAR_2, VAR_3, VAR_4);
}
