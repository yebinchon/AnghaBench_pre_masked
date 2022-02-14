
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int cook_gains ;
struct TYPE_5__ {int (* saturate_output ) (TYPE_1__*,float*) ;} ;
typedef TYPE_1__ COOKContext ;


 int FUNC_0 (TYPE_1__*,float*,int *,float*) ;
 int FUNC_1 (TYPE_1__*,float*) ;

__attribute__((used)) static inline void FUNC_2(COOKContext *VAR_0, float *VAR_1,
                                         cook_gains *VAR_2, float *VAR_3,
                                         float *VAR_4)
{
    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
    if (VAR_4)
        VAR_0->saturate_output(VAR_0, VAR_4);
}
