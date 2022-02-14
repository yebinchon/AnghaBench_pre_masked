
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* state_cb ) (unsigned int,unsigned int,unsigned int,unsigned int) ;} ;
struct TYPE_7__ {TYPE_1__ cbs; } ;
typedef TYPE_2__ netplay_t ;
typedef int int16_t ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (TYPE_2__*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (unsigned int,unsigned int,unsigned int,unsigned int) ;

int16_t FUNC_3(unsigned VAR_1, unsigned VAR_2,
      unsigned VAR_3, unsigned VAR_4)
{
   netplay_t *VAR_5 = VAR_0;
   if (FUNC_1(VAR_5))
      return FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
   return VAR_5->cbs.state_cb(VAR_1, VAR_2, VAR_3, VAR_4);
}
