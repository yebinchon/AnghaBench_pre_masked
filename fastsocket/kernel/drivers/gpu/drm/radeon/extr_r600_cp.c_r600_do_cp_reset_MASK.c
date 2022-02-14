
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int tail; } ;
struct TYPE_6__ {TYPE_1__ ring; } ;
typedef TYPE_2__ drm_radeon_private_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

void FUNC_4(drm_radeon_private_t *VAR_2)
{
 u32 VAR_3;
 FUNC_0("\n");

 VAR_3 = FUNC_1(VAR_0);
 FUNC_2(VAR_1, VAR_3);
 FUNC_3(VAR_2, VAR_3);
 VAR_2->ring.tail = VAR_3;
}
