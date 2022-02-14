
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {unsigned int tv_sec; unsigned int tv_nsec; } ;
struct pps_event_time {struct timespec ts_real; } ;
struct TYPE_2__ {int* addr; } ;
struct efx_ptp_data {TYPE_1__ start; } ;
struct efx_nic {struct efx_ptp_data* ptp_data; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct efx_nic*,int ,scalar_t__) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct pps_event_time*) ;
 int FUNC_4 (struct timespec*,int ) ;
 scalar_t__ FUNC_5 (struct timespec*,struct timespec*) ;

__attribute__((used)) static void FUNC_6(struct efx_nic *VAR_5,
          struct pps_event_time *VAR_6)
{
 struct pps_event_time VAR_7;
 struct timespec VAR_8;
 struct efx_ptp_data *VAR_9 = VAR_5->ptp_data;
 struct timespec VAR_10;
 int *VAR_11 = VAR_9->start.addr;

 FUNC_3(&VAR_7);
 VAR_10 = VAR_7.ts_real;
 VAR_8 = VAR_7.ts_real;
 FUNC_4(&VAR_8, VAR_4);


 while ((FUNC_5(&VAR_7.ts_real, &VAR_8) < 0) &&
        FUNC_0(*VAR_11)) {
  struct timespec VAR_12;
  unsigned int VAR_13;


  VAR_12 = VAR_7.ts_real;
  FUNC_4(&VAR_12, VAR_3);
  do {
   FUNC_3(&VAR_7);
  } while ((FUNC_5(&VAR_7.ts_real, &VAR_12) < 0) &&
    FUNC_0(*VAR_11));


  VAR_13 = (VAR_7.ts_real.tv_sec << VAR_1 |
        VAR_7.ts_real.tv_nsec);

  FUNC_1(VAR_5, FUNC_2(VAR_13),
       VAR_0 + VAR_2);
 }
 *VAR_6 = VAR_7;
}
