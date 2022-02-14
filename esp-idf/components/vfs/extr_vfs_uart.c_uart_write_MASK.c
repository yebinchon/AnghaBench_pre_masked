
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_2__ {scalar_t__ tx_mode; int write_lock; int (* tx_func ) (int,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 TYPE_1__** VAR_2 ;
 int FUNC_3 (int,char) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static ssize_t FUNC_5(int VAR_3, const void * VAR_4, size_t VAR_5)
{
    FUNC_2(VAR_3 >=0 && VAR_3 < 3);
    const char *VAR_6 = (const char *)VAR_4;




    FUNC_0(&VAR_2[VAR_3]->write_lock);
    for (size_t VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        int VAR_8 = VAR_6[VAR_7];
        if (VAR_8 == '\n' && VAR_2[VAR_3]->tx_mode != VAR_1) {
            VAR_2[VAR_3]->tx_func(VAR_3, '\r');
            if (VAR_2[VAR_3]->tx_mode == VAR_0) {
                continue;
            }
        }
        VAR_2[VAR_3]->tx_func(VAR_3, VAR_8);
    }
    FUNC_1(&VAR_2[VAR_3]->write_lock);
    return VAR_5;
}
