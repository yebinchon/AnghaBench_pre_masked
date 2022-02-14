
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (unsigned char*,int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 () ;

int FUNC_5(unsigned char *VAR_4, int VAR_5)
{
    unsigned char *VAR_6 = VAR_4 + 1;
    if (VAR_4[0] == 'g')
    {
        FUNC_1(VAR_6, VAR_5 - 1);
    } else if (VAR_4[0] == 'G') {

        FUNC_0(VAR_6, VAR_5 - 1);
    } else if (VAR_4[0] == 'm') {

        FUNC_2(VAR_6, VAR_5 - 1);
    } else if (VAR_4[0] == '?') {

        FUNC_4();




    } else {

        return VAR_0;
    }
    return VAR_1;
}
