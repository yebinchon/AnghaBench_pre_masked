
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct port_event {int portev_events; int * portev_user; } ;
typedef int int64 ;
typedef int Socket ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,struct port_event*,int,int*,struct timespec*) ;
 int VAR_6 ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (char*) ;

int
FUNC_3(Socket **VAR_7, int64 VAR_8)
{
    int VAR_9;
    uint_t VAR_10 = 1;
    struct port_event VAR_11;
    struct timespec VAR_12;

    VAR_12.tv_sec = VAR_8 / 1000000000;
    VAR_12.tv_nsec = VAR_8 % 1000000000;
    VAR_9 = FUNC_0(VAR_6, &VAR_11, 1, &VAR_10, &VAR_12);
    if (VAR_9 == -1 && VAR_5 != VAR_1 && VAR_5 != VAR_0) {
        FUNC_2("port_getn");
        return -1;
    }

    if (VAR_9 == 0) {
        *VAR_7 = VAR_11.portev_user;
        if (VAR_11.portev_events & VAR_2) {
            return 'h';
        } else if (VAR_11.portev_events & VAR_3) {
            if (FUNC_1(*VAR_7, 'r') == -1) {
                return -1;
            }
            return 'r';
        } else if (VAR_11.portev_events & VAR_4) {
            if (FUNC_1(*VAR_7, 'w') == -1) {
                return -1;
            }
            return 'w';
        }
    }

    return 0;
}
