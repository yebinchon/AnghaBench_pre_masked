
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int dummy; } ;
typedef int nfds_t ;
typedef int AVIOInterruptCB ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct pollfd*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct pollfd *VAR_4, nfds_t VAR_5, int VAR_6,
                             AVIOInterruptCB *VAR_7)
{
    int VAR_8 = VAR_6 / VAR_3;
    int VAR_9 = 0;

    do {
        if (FUNC_1(VAR_7))
            return VAR_0;
        VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_3);
        if (VAR_9 != 0) {
            if (VAR_9 < 0)
                VAR_9 = FUNC_2();
            if (VAR_9 == FUNC_0(VAR_1))
                continue;
            break;
        }
    } while (VAR_6 <= 0 || VAR_8-- > 0);

    if (!VAR_9)
        return FUNC_0(VAR_2);
    return VAR_9;
}
