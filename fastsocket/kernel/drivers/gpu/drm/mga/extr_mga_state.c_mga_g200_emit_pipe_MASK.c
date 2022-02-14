
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int warp_pipe; } ;
typedef TYPE_1__ drm_mga_sarea_t ;
struct TYPE_5__ {int* warp_pipe_phys; int wagp_enable; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_mga_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ,int,int ,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static __inline__ void FUNC_3(drm_mga_private_t *VAR_12)
{
 drm_mga_sarea_t *VAR_13 = VAR_12->sarea_priv;
 unsigned int VAR_14 = VAR_13->warp_pipe;
 VAR_0;

 FUNC_1(3);

 FUNC_2(VAR_3, VAR_5,
    VAR_11, 0x00000007,
    VAR_2, 0x00000000, VAR_6, 0x00000000);

 FUNC_2(VAR_7, 0x00000100,
    VAR_8, 0x00000000,
    VAR_9, 0x0000ffff, VAR_10, 0x0000ffff);



 FUNC_2(VAR_1, 0xffffffff,
    VAR_1, 0xffffffff,
    VAR_1, 0xffffffff,
    VAR_3, (VAR_12->warp_pipe_phys[VAR_14] |
          VAR_4 | VAR_12->wagp_enable));

 FUNC_0();
}
