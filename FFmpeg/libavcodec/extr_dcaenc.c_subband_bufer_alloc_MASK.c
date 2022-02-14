
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int *** subband; } ;
typedef TYPE_1__ DCAEncContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(DCAEncContext *VAR_5)
{
    int VAR_6, VAR_7;
    int32_t *VAR_8 = FUNC_1(VAR_3 * VAR_0 *
                               (VAR_4 + VAR_1),
                               sizeof(int32_t));
    if (!VAR_8)
        return FUNC_0(VAR_2);



    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
            VAR_5->subband[VAR_6][VAR_7] = VAR_8 +
                                   VAR_6 * VAR_0 * (VAR_4 + VAR_1) +
                                   VAR_7 * (VAR_4 + VAR_1) + VAR_1;
        }
    }
    return 0;
}
