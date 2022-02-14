
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state; } ;
typedef TYPE_1__ FTPContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(FTPContext *VAR_1)
{
    int VAR_2;
    VAR_1->state = VAR_0;

    if ((VAR_2 = FUNC_0(VAR_1)) < 0)
        VAR_2 = FUNC_1(VAR_1);

    return VAR_2;
}
