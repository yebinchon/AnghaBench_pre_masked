
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {TYPE_1__** drv; } ;
typedef TYPE_2__ ctlr_info_t ;
struct TYPE_4__ {int LunID; } ;


 int FUNC_0 (unsigned char*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(ctlr_info_t *VAR_0,
 unsigned char VAR_1[], uint32_t VAR_2)
{
 FUNC_0(VAR_1, VAR_0->drv[VAR_2]->LunID,
  sizeof(VAR_0->drv[VAR_2]->LunID));
}
