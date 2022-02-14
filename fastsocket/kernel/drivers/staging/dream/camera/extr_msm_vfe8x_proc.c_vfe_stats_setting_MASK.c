
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_statsframe {int histBusPriorityEn; int awbBusPriorityEn; int afBusPriorityEn; int histBusPriority; int awbBusPriority; int afBusPriority; int lastLine; int lastPixel; } ;
struct vfe_cmd_stats_setting {int * histBuffer; int * awbBuffer; int * afBuffer; int histBusPrioritySelection; int awbBusPrioritySelection; int afBusPrioritySelection; int histBusPriority; int awbBusPriority; int afBusPriority; int frameVDimension; int frameHDimension; } ;
struct vfe_busstats_wrprio {int histBusPriorityEn; int awbBusPriorityEn; int afBusPriorityEn; int histBusPriority; int awbBusPriority; int afBusPriority; int lastLine; int lastPixel; } ;
typedef int cmd2 ;
typedef int cmd1 ;
struct TYPE_5__ {int nextFrameAddrBuf; int * addressBuffer; } ;
struct TYPE_4__ {int nextFrameAddrBuf; int * addressBuffer; } ;
struct TYPE_6__ {scalar_t__ vfebase; TYPE_2__ awbStatsControl; TYPE_1__ afStatsControl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__* VAR_8 ;
 int FUNC_0 (struct vfe_statsframe*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3(struct vfe_cmd_stats_setting *VAR_9)
{
 struct vfe_statsframe VAR_10;
 struct vfe_busstats_wrprio VAR_11;

 FUNC_0(&VAR_10, 0, sizeof(VAR_10));
 FUNC_0(&VAR_11, 0, sizeof(VAR_11));

 VAR_8->afStatsControl.addressBuffer[0] = VAR_9->afBuffer[0];
 VAR_8->afStatsControl.addressBuffer[1] = VAR_9->afBuffer[1];
 VAR_8->afStatsControl.nextFrameAddrBuf = VAR_9->afBuffer[2];

 VAR_8->awbStatsControl.addressBuffer[0] = VAR_9->awbBuffer[0];
 VAR_8->awbStatsControl.addressBuffer[1] = VAR_9->awbBuffer[1];
 VAR_8->awbStatsControl.nextFrameAddrBuf = VAR_9->awbBuffer[2];

 VAR_10 = VAR_9->frameHDimension;
 VAR_10 = VAR_9->frameVDimension;
 FUNC_1(VAR_8->vfebase + VAR_7,
  (uint32_t *)&VAR_10, sizeof(VAR_10));

 VAR_11 = VAR_9->afBusPriority;
 VAR_11 = VAR_9->awbBusPriority;
 VAR_11 = VAR_9->histBusPriority;
 VAR_11 = VAR_9->afBusPrioritySelection;
 VAR_11 = VAR_9->awbBusPrioritySelection;
 VAR_11 = VAR_9->histBusPrioritySelection;

 FUNC_1(VAR_8->vfebase + VAR_6,
  (uint32_t *)&VAR_11, sizeof(VAR_11));


 FUNC_2(VAR_9->afBuffer[0], VAR_8->vfebase + VAR_0);
 FUNC_2(VAR_9->afBuffer[1], VAR_8->vfebase + VAR_1);
 FUNC_2(VAR_9->awbBuffer[0],
  VAR_8->vfebase + VAR_2);
 FUNC_2(VAR_9->awbBuffer[1],
  VAR_8->vfebase + VAR_3);
 FUNC_2(VAR_9->histBuffer[0],
  VAR_8->vfebase + VAR_4);
 FUNC_2(VAR_9->histBuffer[1],
  VAR_8->vfebase + VAR_5);
}
