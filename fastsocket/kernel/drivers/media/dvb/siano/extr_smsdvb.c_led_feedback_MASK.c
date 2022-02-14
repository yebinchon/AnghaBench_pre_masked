
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ BER; } ;
struct TYPE_4__ {TYPE_1__ ReceptionData; } ;
struct smsdvb_client_t {int fe_status; int coredev; TYPE_2__ sms_stat_dvb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct smsdvb_client_t *VAR_4)
{
 if (VAR_4->fe_status & VAR_0)
  return FUNC_0(VAR_4->coredev,
   (VAR_4->sms_stat_dvb.ReceptionData.BER
   == 0) ? VAR_1 : VAR_2);
 else
  return FUNC_0(VAR_4->coredev, VAR_3);
}
