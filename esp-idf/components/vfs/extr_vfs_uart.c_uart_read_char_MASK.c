
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int peek_char; int (* rx_func ) (int) ;} ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_2)
{

    if (VAR_1[VAR_2]->peek_char != VAR_0) {
        int VAR_3 = VAR_1[VAR_2]->peek_char;
        VAR_1[VAR_2]->peek_char = VAR_0;
        return VAR_3;
    }
    return VAR_1[VAR_2]->rx_func(VAR_2);
}
