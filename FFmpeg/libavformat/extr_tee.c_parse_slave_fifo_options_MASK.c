
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int use_fifo; int fifo_options; } ;
typedef TYPE_1__ TeeSlave ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char const*,char*,char*,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1,
                                    const char *VAR_2, TeeSlave *VAR_3)
{
    int VAR_4 = 0;

    if (VAR_1) {


        if (FUNC_2(VAR_1, "true,y,yes,enable,enabled,on,1")) {
            VAR_3->use_fifo = 1;
        } else if (FUNC_2(VAR_1, "false,n,no,disable,disabled,off,0")) {
            VAR_3->use_fifo = 0;
        } else {
            return FUNC_0(VAR_0);
        }
    }

    if (VAR_2)
        VAR_4 = FUNC_1(&VAR_3->fifo_options, VAR_2, "=", ":", 0);

    return VAR_4;
}
