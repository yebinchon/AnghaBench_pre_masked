
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int** SNR; int** NF; void*** RSSI; } ;
struct cmd_ds_802_11_rssi_rsp {int avgnoisefloor; int avgSNR; int noisefloor; int SNR; } ;
struct TYPE_2__ {struct cmd_ds_802_11_rssi_rsp rssirsp; } ;
struct cmd_ds_command {TYPE_1__ params; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (char*,void*,void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct lbs_private *VAR_5,
    struct cmd_ds_command *VAR_6)
{
 struct cmd_ds_802_11_rssi_rsp *VAR_7 = &VAR_6->params.rssirsp;

 FUNC_3(VAR_1);


 VAR_5->SNR[VAR_3][VAR_4] = FUNC_1(&VAR_7->SNR);
 VAR_5->NF[VAR_3][VAR_4] = FUNC_1(&VAR_7->noisefloor);

 VAR_5->SNR[VAR_3][VAR_2] = FUNC_1(&VAR_7->avgSNR);
 VAR_5->NF[VAR_3][VAR_2] = FUNC_1(&VAR_7->avgnoisefloor);

 VAR_5->RSSI[VAR_3][VAR_4] =
     FUNC_0(VAR_5->SNR[VAR_3][VAR_4],
       VAR_5->NF[VAR_3][VAR_4]);

 VAR_5->RSSI[VAR_3][VAR_2] =
     FUNC_0(VAR_5->SNR[VAR_3][VAR_2] / VAR_0,
       VAR_5->NF[VAR_3][VAR_2] / VAR_0);

 FUNC_2("RSSI: beacon %d, avg %d\n",
        VAR_5->RSSI[VAR_3][VAR_4],
        VAR_5->RSSI[VAR_3][VAR_2]);

 FUNC_4(VAR_1);
 return 0;
}
