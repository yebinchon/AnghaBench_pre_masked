
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; } ;
typedef scalar_t__ ssize_t ;
typedef int nfds_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct pollfd*,int ,int const) ;
 scalar_t__ FUNC_1 (int const,char const*,size_t) ;

ssize_t FUNC_2(const int VAR_5, const void *const VAR_6, size_t VAR_7, const int VAR_8)
{
    struct pollfd VAR_9;
    const char * VAR_10 = (const char *) VAR_6;
    ssize_t VAR_11;

    while (VAR_7 > (size_t) 0) {
        while ((VAR_11 = FUNC_1(VAR_5, VAR_10, VAR_7)) < (ssize_t) 0) {
            if (VAR_3 == VAR_0) {
                VAR_9.fd = VAR_5;
                VAR_9.events = VAR_2;
                if (FUNC_0(&VAR_9, (nfds_t) 1, VAR_8) <= 0) {
                    return (ssize_t) -1;
                }
            } else if (VAR_3 != VAR_1 || VAR_4) {
                return (ssize_t) -1;
            }
        }
        VAR_10 += VAR_11;
        VAR_7 -= VAR_11;
    }
    return (ssize_t)(VAR_10 - (const char *) VAR_6);
}
