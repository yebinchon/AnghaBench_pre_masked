
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_vectors; } ;
typedef TYPE_1__ COOKContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(COOKContext *VAR_1, int *VAR_2,
                                   int *VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_1->num_vectors; VAR_4++)
    {
        int VAR_5 = VAR_3[VAR_4];
        if (++VAR_2[VAR_5] >= FUNC_0(VAR_0))
            --VAR_2[VAR_5];
    }
}
