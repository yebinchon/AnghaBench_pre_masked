
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size_l2qw; } ;
struct TYPE_6__ {int cce_mode; int cce_running; TYPE_1__ ring; } ;
typedef TYPE_2__ drm_r128_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(drm_r128_private_t *VAR_5)
{
 FUNC_2(VAR_5);

 FUNC_1(VAR_1,
     VAR_5->cce_mode | VAR_5->ring.size_l2qw
     | VAR_2);
 FUNC_0(VAR_0);
 FUNC_1(VAR_3, VAR_4);

 VAR_5->cce_running = 1;
}
