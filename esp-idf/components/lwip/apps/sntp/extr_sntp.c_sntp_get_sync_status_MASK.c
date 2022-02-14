
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
typedef scalar_t__ sntp_sync_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct timeval*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;

sntp_sync_status_t FUNC_2(void)
{
    sntp_sync_status_t VAR_4 = VAR_2;
    sntp_sync_status_t VAR_5 = VAR_3;
    if (VAR_5 == VAR_0) {
        FUNC_1(VAR_2);
        VAR_4 = VAR_0;
    } else if (VAR_5 == VAR_1) {
        struct timeval VAR_6;
        FUNC_0(((void*)0), &VAR_6);
        if (VAR_6.tv_sec == 0 && VAR_6.tv_usec == 0) {
            FUNC_1(VAR_2);
            VAR_4 = VAR_0;
        } else {
            VAR_4 = VAR_1;
        }
    }
    return VAR_4;
}
