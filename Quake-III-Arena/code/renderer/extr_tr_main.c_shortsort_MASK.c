
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sort; } ;
typedef TYPE_1__ drawSurf_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( drawSurf_t *VAR_0, drawSurf_t *VAR_1 ) {
    drawSurf_t *VAR_2, *VAR_3;
 int VAR_4;

    while (VAR_1 > VAR_0) {
        VAR_3 = VAR_0;
        for (VAR_2 = VAR_0 + 1; VAR_2 <= VAR_1; VAR_2++ ) {
            if ( VAR_2->sort > VAR_3->sort ) {
                VAR_3 = VAR_2;
            }
        }
        FUNC_0(VAR_3, VAR_1);
        VAR_1--;
    }
}
