
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int finished; } ;
typedef TYPE_1__ OutputStream ;
typedef int OSTFinished ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;

__attribute__((used)) static void FUNC_0(OutputStream *VAR_2, OSTFinished VAR_3, OSTFinished VAR_4)
{
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        OutputStream *VAR_6 = VAR_1[VAR_5];
        VAR_6->finished |= VAR_2 == VAR_6 ? VAR_3 : VAR_4;
    }
}
