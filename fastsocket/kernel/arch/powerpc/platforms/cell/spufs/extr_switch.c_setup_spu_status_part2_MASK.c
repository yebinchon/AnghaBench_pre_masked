
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int spu_status_R; } ;
struct spu_state {TYPE_3__* lscsa; TYPE_1__ prob; } ;
struct spu {int dummy; } ;
struct TYPE_5__ {int * slot; } ;
struct TYPE_6__ {TYPE_2__ stopped_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline void FUNC_0(struct spu_state *VAR_6,
       struct spu *VAR_7)
{
 u32 VAR_8;
 VAR_8 = VAR_0 |
     VAR_2 |
     VAR_3 |
     VAR_4 | VAR_1;
 if (!(VAR_6->prob.spu_status_R & VAR_8)) {
  VAR_6->lscsa->stopped_status.slot[0] = VAR_5;
 }
}
