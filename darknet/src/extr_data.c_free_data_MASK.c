
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vals; } ;
struct TYPE_4__ {TYPE_2__ y; TYPE_2__ X; int shallow; } ;
typedef TYPE_1__ data ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__) ;

void FUNC_2(data VAR_0)
{
    if(!VAR_0.shallow){
        FUNC_1(VAR_0.X);
        FUNC_1(VAR_0.y);
    }else{
        FUNC_0(VAR_0.X.vals);
        FUNC_0(VAR_0.y.vals);
    }
}
