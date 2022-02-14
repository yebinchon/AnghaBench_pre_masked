
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ timediff_t ;
typedef int time_t ;
struct TYPE_5__ {scalar_t__ state; int retry_max; int retry_time; scalar_t__ rx_time; scalar_t__ start_time; scalar_t__ max_time; TYPE_1__* conn; } ;
typedef TYPE_2__ tftp_state_data_t ;
struct TYPE_4__ {int data; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int,long,int,int) ;
 int FUNC_3 (scalar_t__*) ;

__attribute__((used)) static CURLcode FUNC_4(tftp_state_data_t *VAR_5)
{
  time_t VAR_6, VAR_7;
  timediff_t VAR_8;
  bool VAR_9 = (VAR_5->state == VAR_3) ? VAR_4 : VAR_2;

  FUNC_3(&VAR_5->start_time);


  VAR_8 = FUNC_0(VAR_5->conn->data, ((void*)0), VAR_9);

  if(VAR_8 < 0) {

    FUNC_1(VAR_5->conn->data, "Connection time-out");
    return VAR_1;
  }

  if(VAR_9) {

    VAR_6 = (time_t)(VAR_8 + 500) / 1000;
    VAR_5->max_time = VAR_5->start_time + VAR_6;


    VAR_7 = VAR_6;


    VAR_5->retry_max = (int)VAR_7/5;

    if(VAR_5->retry_max < 1)

      VAR_5->retry_max = 1;


    VAR_5->retry_time = (int)VAR_7/VAR_5->retry_max;
    if(VAR_5->retry_time<1)
      VAR_5->retry_time = 1;

  }
  else {
    if(VAR_8 > 0)
      VAR_6 = (time_t)(VAR_8 + 500) / 1000;
    else
      VAR_6 = 3600;

    VAR_5->max_time = VAR_5->start_time + VAR_6;


    VAR_7 = VAR_6;


    VAR_5->retry_max = (int)VAR_7/5;
  }

  if(VAR_5->retry_max<3)
    VAR_5->retry_max = 3;

  if(VAR_5->retry_max>50)
    VAR_5->retry_max = 50;


  VAR_5->retry_time = (int)(VAR_7/VAR_5->retry_max);
  if(VAR_5->retry_time<1)
    VAR_5->retry_time = 1;

  FUNC_2(VAR_5->conn->data,
        "set timeouts for state %d; Total %ld, retry %d maxtry %d\n",
        (int)VAR_5->state, (long)(VAR_5->max_time-VAR_5->start_time),
        VAR_5->retry_time, VAR_5->retry_max);


  FUNC_3(&VAR_5->rx_time);

  return VAR_0;
}
