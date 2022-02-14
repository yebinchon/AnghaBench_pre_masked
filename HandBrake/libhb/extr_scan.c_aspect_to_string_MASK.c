
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double den; scalar_t__ num; } ;
typedef TYPE_1__ hb_rational_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static const char *FUNC_1(hb_rational_t *VAR_0)
{
    double VAR_1 = (double)VAR_0->num / VAR_0->den;
    switch ( (int)(VAR_1 * 9.) )
    {
        case 9 * 4 / 3: return "4:3";
        case 9 * 16 / 9: return "16:9";
    }
    static char VAR_2[32];
    if (VAR_1 >= 1)
        FUNC_0(VAR_2, "%.2f:1", VAR_1);
    else
        FUNC_0(VAR_2, "1:%.2f", 1. / VAR_1 );
    return VAR_2;
}
