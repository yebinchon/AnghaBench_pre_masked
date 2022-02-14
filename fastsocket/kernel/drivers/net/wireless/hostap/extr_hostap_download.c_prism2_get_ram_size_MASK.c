
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* func; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_6__ {int (* genesis_reset ) (TYPE_2__*,int) ;} ;


 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_2(local_info_t *VAR_0)
{
 int VAR_1;


 if (FUNC_0(VAR_0, 0x1f) == 0)
  VAR_1 = 8;
 else if (FUNC_0(VAR_0, 0x0f) == 0)
  VAR_1 = 16;
 else
  VAR_1 = -1;


 VAR_0->func->genesis_reset(VAR_0, VAR_1 == 16 ? 0x07 : 0x17);

 return VAR_1;
}
