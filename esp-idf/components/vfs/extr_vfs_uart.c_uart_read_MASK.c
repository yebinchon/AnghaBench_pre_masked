
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_2__ {scalar_t__ rx_mode; int read_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 TYPE_1__** VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static ssize_t FUNC_5(int VAR_6, void* VAR_7, size_t VAR_8)
{
    FUNC_2(VAR_6 >=0 && VAR_6 < 3);
    char *VAR_9 = (char *) VAR_7;
    size_t VAR_10 = 0;
    FUNC_0(&VAR_5[VAR_6]->read_lock);
    while (VAR_10 < VAR_8) {
        int VAR_11 = FUNC_3(VAR_6);
        if (VAR_11 == '\r') {
            if (VAR_5[VAR_6]->rx_mode == VAR_0) {
                VAR_11 = '\n';
            } else if (VAR_5[VAR_6]->rx_mode == VAR_1) {

                int VAR_12 = FUNC_3(VAR_6);
                if (VAR_12 == VAR_3) {

                    FUNC_4(VAR_6, VAR_11);
                    break;
                }
                if (VAR_12 == '\n') {

                    VAR_11 = '\n';
                } else {



                    FUNC_4(VAR_6, VAR_12);
                }
            }
        } else if (VAR_11 == VAR_3) {
            break;
        }
        VAR_9[VAR_10] = (char) VAR_11;
        ++VAR_10;
        if (VAR_11 == '\n') {
            break;
        }
    }
    FUNC_1(&VAR_5[VAR_6]->read_lock);
    if (VAR_10 > 0) {
        return VAR_10;
    }
    VAR_4 = VAR_2;
    return -1;
}
