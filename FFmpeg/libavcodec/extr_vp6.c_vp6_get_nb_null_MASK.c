
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gb; } ;
typedef TYPE_1__ VP56Context ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static unsigned FUNC_2(VP56Context *VAR_0)
{
    unsigned VAR_1 = FUNC_0(&VAR_0->gb, 2);
    if (VAR_1 == 2)
        VAR_1 += FUNC_0(&VAR_0->gb, 2);
    else if (VAR_1 == 3) {
        VAR_1 = FUNC_1(&VAR_0->gb) << 2;
        VAR_1 = 6+VAR_1 + FUNC_0(&VAR_0->gb, 2+VAR_1);
    }
    return VAR_1;
}
