
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
typedef int client ;
struct TYPE_6__ {int * bulkhdr; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,size_t,char) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (scalar_t__) ;
 TYPE_2__ VAR_1 ;

void FUNC_4(client *VAR_2, robj *VAR_3) {
    size_t VAR_4;

    if (FUNC_2(VAR_3)) {
        VAR_4 = FUNC_3(VAR_3->ptr);
    } else {
        long VAR_5 = (long)VAR_3->ptr;


        VAR_4 = 1;
        if (VAR_5 < 0) {
            VAR_4++;
            VAR_5 = -VAR_5;
        }
        while((VAR_5 = VAR_5/10) != 0) {
            VAR_4++;
        }
    }

    if (VAR_4 < VAR_0)
        FUNC_0(VAR_2,VAR_1.bulkhdr[VAR_4]);
    else
        FUNC_1(VAR_2,VAR_4,'$');
}
