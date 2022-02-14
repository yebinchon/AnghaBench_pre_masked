
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_2__* cb4x4; TYPE_1__* cb2x2; int * out_buf; } ;
struct TYPE_9__ {int numCB2; int numCB4; size_t* f2i2; int* i2f2; size_t* f2i4; } ;
struct TYPE_8__ {size_t* idx; } ;
struct TYPE_7__ {int u; int v; int y; } ;
typedef TYPE_3__ RoqTempdata ;
typedef TYPE_4__ RoqContext ;


 int VAR_0 ;
 int FUNC_0 (int **,int ,int) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int **,int) ;

__attribute__((used)) static void FUNC_4(RoqContext *VAR_1, RoqTempdata *VAR_2)
{
    int VAR_3, VAR_4;
    uint8_t **VAR_5= &VAR_1->out_buf;

    if (VAR_2->numCB2) {
        FUNC_2(VAR_5, VAR_0);
        FUNC_3(VAR_5, VAR_2->numCB2*6 + VAR_2->numCB4*4);
        FUNC_1(VAR_5, VAR_2->numCB4);
        FUNC_1(VAR_5, VAR_2->numCB2);

        for (VAR_3=0; VAR_3<VAR_2->numCB2; VAR_3++) {
            FUNC_0(VAR_5, VAR_1->cb2x2[VAR_2->f2i2[VAR_3]].y, 4);
            FUNC_1(VAR_5, VAR_1->cb2x2[VAR_2->f2i2[VAR_3]].u);
            FUNC_1(VAR_5, VAR_1->cb2x2[VAR_2->f2i2[VAR_3]].v);
        }

        for (VAR_3=0; VAR_3<VAR_2->numCB4; VAR_3++)
            for (VAR_4=0; VAR_4<4; VAR_4++)
                FUNC_1(VAR_5, VAR_2->i2f2[VAR_1->cb4x4[VAR_2->f2i4[VAR_3]].idx[VAR_4]]);

    }
}
