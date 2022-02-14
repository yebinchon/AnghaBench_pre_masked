
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lbs_private {scalar_t__** RSSI; scalar_t__** NF; scalar_t__** SNR; } ;
struct TYPE_3__ {void* N; } ;
struct TYPE_4__ {TYPE_1__ rssi; } ;
struct cmd_ds_command {TYPE_2__ params; void* size; void* command; } ;
struct cmd_ds_802_11_rssi {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct lbs_private *VAR_7,
    struct cmd_ds_command *VAR_8)
{

 FUNC_1(VAR_2);
 VAR_8->command = FUNC_0(VAR_0);
 VAR_8->size = FUNC_0(sizeof(struct cmd_ds_802_11_rssi) + VAR_3);
 VAR_8->params.rssi.N = FUNC_0(VAR_1);


 VAR_7->SNR[VAR_5][VAR_6] = 0;
 VAR_7->SNR[VAR_5][VAR_4] = 0;
 VAR_7->NF[VAR_5][VAR_6] = 0;
 VAR_7->NF[VAR_5][VAR_4] = 0;
 VAR_7->RSSI[VAR_5][VAR_6] = 0;
 VAR_7->RSSI[VAR_5][VAR_4] = 0;

 FUNC_2(VAR_2);
 return 0;
}
