
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_clock {int defunct; int clock; int devid; scalar_t__ pps_source; int tsev_wq; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (struct ptp_clock*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ptp_clock *VAR_1)
{
 VAR_1->defunct = 1;
 FUNC_4(&VAR_1->tsev_wq);


 if (VAR_1->pps_source)
  FUNC_2(VAR_1->pps_source);
 FUNC_3(VAR_1);
 FUNC_0(VAR_0, VAR_1->devid);

 FUNC_1(&VAR_1->clock);
 return 0;
}
