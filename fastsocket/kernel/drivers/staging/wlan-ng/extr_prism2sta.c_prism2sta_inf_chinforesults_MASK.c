
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ priv; } ;
typedef TYPE_6__ wlandevice_t ;
struct TYPE_12__ {int scanchannels; TYPE_9__* result; } ;
struct TYPE_16__ {unsigned int count; int done; TYPE_1__ results; } ;
struct TYPE_18__ {TYPE_5__ channel_info; } ;
typedef TYPE_7__ hfa384x_t ;
struct TYPE_14__ {TYPE_2__* result; int scanchannels; } ;
struct TYPE_15__ {TYPE_3__ chinforesult; } ;
struct TYPE_19__ {TYPE_4__ info; } ;
typedef TYPE_8__ hfa384x_InfFrame_t ;
struct TYPE_20__ {int chid; int anl; int pnl; int active; } ;
typedef TYPE_9__ hfa384x_ChInfoResultSub_t ;
struct TYPE_13__ {int active; int pnl; int anl; int chid; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,int,int,int) ;

__attribute__((used)) static void FUNC_3(wlandevice_t *VAR_3,
     hfa384x_InfFrame_t *VAR_4)
{
 hfa384x_t *VAR_5 = (hfa384x_t *) VAR_3->priv;
 unsigned int VAR_6, VAR_7;

 VAR_5->channel_info.results.scanchannels =
     FUNC_1(VAR_4->info.chinforesult.scanchannels);

 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_5->channel_info.results.scanchannels & (1 << VAR_6)) {
   int VAR_8 =
       FUNC_1(VAR_4->info.chinforesult.result[VAR_7].chid) -
       1;
   hfa384x_ChInfoResultSub_t *VAR_9 =
       &VAR_5->channel_info.results.result[VAR_8];
   VAR_9->chid = VAR_8;
   VAR_9->anl =
       FUNC_1(VAR_4->info.chinforesult.result[VAR_7].anl);
   VAR_9->pnl =
       FUNC_1(VAR_4->info.chinforesult.result[VAR_7].pnl);
   VAR_9->active =
       FUNC_1(VAR_4->info.chinforesult.result[VAR_7].
     active);
   FUNC_2
       ("chinfo: channel %d, %s level (avg/peak)=%d/%d dB, pcf %d\n",
        VAR_8 + 1,
        VAR_9->
        active & VAR_0 ? "signal"
        : "noise", VAR_9->anl, VAR_9->pnl,
        VAR_9->
        active & VAR_2 ? 1 : 0);
   VAR_7++;
  }
 }
 FUNC_0(&VAR_5->channel_info.done, 2);

 VAR_5->channel_info.count = VAR_7;
 return;
}
