
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_4__ {scalar_t__ max_time; scalar_t__ rx_time; scalar_t__ retry_time; int state; int error; } ;
typedef TYPE_2__ tftp_state_data_t ;
typedef int tftp_event_t ;
struct TYPE_3__ {scalar_t__ tftpc; } ;
struct connectdata {int data; TYPE_1__ proto; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,long,long) ;
 int FUNC_2 (scalar_t__*) ;

__attribute__((used)) static long FUNC_3(struct connectdata *VAR_4, tftp_event_t *VAR_5)
{
  time_t VAR_6;
  tftp_state_data_t *VAR_7 = (tftp_state_data_t *)VAR_4->proto.tftpc;

  if(VAR_5)
    *VAR_5 = VAR_1;

  FUNC_2(&VAR_6);
  if(VAR_6 > VAR_7->max_time) {
    FUNC_0(FUNC_1(VAR_4->data, "timeout: %ld > %ld\n",
                 (long)VAR_6, (long)VAR_7->max_time));
    VAR_7->error = VAR_0;
    VAR_7->state = VAR_3;
    return 0;
  }
  if(VAR_6 > VAR_7->rx_time + VAR_7->retry_time) {
    if(VAR_5)
      *VAR_5 = VAR_2;
    FUNC_2(&VAR_7->rx_time);
  }




  return (long)(VAR_7->max_time - VAR_6);
}
