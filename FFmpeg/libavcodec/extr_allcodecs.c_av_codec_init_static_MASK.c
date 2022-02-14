
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* init_static_data ) (int *) ;} ;
typedef int AVCodec ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void)
{
    for (int VAR_1 = 0; VAR_0[VAR_1]; VAR_1++) {
        if (VAR_0[VAR_1]->init_static_data)
            VAR_0[VAR_1]->init_static_data((AVCodec*)VAR_0[VAR_1]);
    }
}
