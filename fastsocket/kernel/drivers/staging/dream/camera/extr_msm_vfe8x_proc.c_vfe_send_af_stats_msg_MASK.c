
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int frameCounter; int afBuffer; } ;
struct TYPE_7__ {TYPE_2__ msgStatsAf; } ;
struct vfe_message {TYPE_3__ _u; int _d; } ;
struct TYPE_5__ {int ackPending; } ;
struct TYPE_8__ {scalar_t__ vstate; TYPE_1__ afStatsControl; int vfeFrameId; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_0 (struct vfe_message*) ;
 struct vfe_message* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,struct vfe_message*,int) ;

__attribute__((used)) static void
FUNC_3(uint32_t VAR_5)
{

 struct vfe_message *VAR_6;
 VAR_6 =
  FUNC_1(sizeof(struct vfe_message), VAR_0);
 if (!VAR_6)
  return;




 if (VAR_4->vstate != VAR_3) {
  FUNC_0(VAR_6);
  goto af_stats_done;
 }

 VAR_6->_d = VAR_2;
 VAR_6->_u.msgStatsAf.afBuffer = VAR_5;
 VAR_6->_u.msgStatsAf.frameCounter = VAR_4->vfeFrameId;

 FUNC_2(VAR_2,
  VAR_6, sizeof(struct vfe_message));

 VAR_4->afStatsControl.ackPending = VAR_1;

af_stats_done:

 return;
}
