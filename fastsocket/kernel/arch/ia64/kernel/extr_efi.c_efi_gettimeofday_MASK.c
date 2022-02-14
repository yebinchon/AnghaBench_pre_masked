
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_4__ {int nanosecond; int second; int minute; int hour; int day; int month; int year; } ;
typedef TYPE_1__ efi_time_t ;
struct TYPE_5__ {scalar_t__ (* get_time ) (TYPE_1__*,int *) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (struct timespec*,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;

void
FUNC_3 (struct timespec *VAR_2)
{
 efi_time_t VAR_3;

 if ((*VAR_1.get_time)(&VAR_3, ((void*)0)) != VAR_0) {
  FUNC_0(VAR_2, 0, sizeof(*VAR_2));
  return;
 }

 VAR_2->tv_sec = FUNC_1(VAR_3.year, VAR_3.month, VAR_3.day,
       VAR_3.hour, VAR_3.minute, VAR_3.second);
 VAR_2->tv_nsec = VAR_3.nanosecond;
}
