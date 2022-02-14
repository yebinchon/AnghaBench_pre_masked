
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int xdat; } ;
struct TYPE_11__ {scalar_t__ state; int real_to_complex; int nfrag; } ;
typedef TYPE_1__ ATempoContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_5__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int const**,int const*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int **,int *) ;

__attribute__((used)) static void
FUNC_7(ATempoContext *VAR_4,
          const uint8_t **VAR_5,
          const uint8_t *VAR_6,
          uint8_t **VAR_7,
          uint8_t *VAR_8)
{
    while (1) {
        if (VAR_4->state == VAR_1) {

            if (FUNC_5(VAR_4, VAR_5, VAR_6) != 0) {
                break;
            }


            FUNC_4(VAR_4, FUNC_3(VAR_4));


            FUNC_0(VAR_4->real_to_complex, FUNC_3(VAR_4)->xdat);


            if (!VAR_4->nfrag) {
                FUNC_2(VAR_4);
                continue;
            }

            VAR_4->state = VAR_0;
        }

        if (VAR_4->state == VAR_0) {

            if (FUNC_1(VAR_4)) {


                VAR_4->state = VAR_3;
            } else {
                VAR_4->state = VAR_2;
            }
        }

        if (VAR_4->state == VAR_3) {

            if (FUNC_5(VAR_4, VAR_5, VAR_6) != 0) {
                break;
            }


            FUNC_4(VAR_4, FUNC_3(VAR_4));


            FUNC_0(VAR_4->real_to_complex, FUNC_3(VAR_4)->xdat);

            VAR_4->state = VAR_2;
        }

        if (VAR_4->state == VAR_2) {

            if (FUNC_6(VAR_4, VAR_7, VAR_8) != 0) {
                break;
            }


            FUNC_2(VAR_4);
            VAR_4->state = VAR_1;
        }
    }
}
