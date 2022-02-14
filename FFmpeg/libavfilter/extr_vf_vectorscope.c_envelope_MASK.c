
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int envelope; } ;
typedef TYPE_1__ VectorscopeContext ;
typedef int AVFrame ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_2(VectorscopeContext *VAR_0, AVFrame *VAR_1)
{
    if (!VAR_0->envelope) {
        return;
    } else if (VAR_0->envelope == 1) {
        FUNC_0(VAR_0, VAR_1);
    } else {
        FUNC_1(VAR_0, VAR_1);
    }
}
