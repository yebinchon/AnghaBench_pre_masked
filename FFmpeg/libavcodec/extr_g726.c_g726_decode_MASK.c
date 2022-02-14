
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* int16_t ;
struct TYPE_10__ {int sign; } ;
struct TYPE_8__ {int* F; int* W; } ;
struct TYPE_9__ {int code_size; int yl; int td; int se; int sez; int* a; int* b; int* pk; int dms; int dml; int ap; int y; int yu; TYPE_3__* sr; TYPE_3__* dq; TYPE_1__ tbls; } ;
typedef TYPE_2__ G726Context ;
typedef TYPE_3__ Float11 ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int16_t FUNC_7(G726Context* VAR_0, int VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    Float11 VAR_13;
    int VAR_14= VAR_1 >> (VAR_0->code_size - 1);

    VAR_2 = FUNC_4(VAR_0, VAR_1);


    VAR_8 = (VAR_0->yl >> 15);
    VAR_9 = (VAR_0->yl >> 10) & 0x1f;
    VAR_10 = (VAR_8 > 9) ? 0x1f << 10 : (0x20 + VAR_9) << VAR_8;
    VAR_7= (VAR_0->td == 1 && VAR_2 > ((3*VAR_10)>>2));

    if (VAR_14)
        VAR_2 = -VAR_2;
    VAR_3 = (int16_t)(VAR_0->se + VAR_2);


    VAR_4 = (VAR_0->sez + VAR_2) ? FUNC_6(VAR_0->sez + VAR_2) : 0;
    VAR_12 = VAR_2 ? FUNC_6(VAR_2) : 0;
    if (VAR_7) {
        VAR_0->a[0] = 0;
        VAR_0->a[1] = 0;
        for (VAR_6=0; VAR_6<6; VAR_6++)
            VAR_0->b[VAR_6] = 0;
    } else {

        VAR_5 = FUNC_2((-VAR_0->a[0]*VAR_0->pk[0]*VAR_4)>>5, 8);

        VAR_0->a[1] += 128*VAR_4*VAR_0->pk[1] + VAR_5 - (VAR_0->a[1]>>7);
        VAR_0->a[1] = FUNC_1(VAR_0->a[1], -12288, 12288);
        VAR_0->a[0] += 64*3*VAR_4*VAR_0->pk[0] - (VAR_0->a[0] >> 8);
        VAR_0->a[0] = FUNC_1(VAR_0->a[0], -(15360 - VAR_0->a[1]), 15360 - VAR_0->a[1]);

        for (VAR_6=0; VAR_6<6; VAR_6++)
            VAR_0->b[VAR_6] += 128*VAR_12*FUNC_6(-VAR_0->dq[VAR_6].sign) - (VAR_0->b[VAR_6]>>8);
    }


    VAR_0->pk[1] = VAR_0->pk[0];
    VAR_0->pk[0] = VAR_4 ? VAR_4 : 1;
    VAR_0->sr[1] = VAR_0->sr[0];
    FUNC_3(VAR_3, &VAR_0->sr[0]);
    for (VAR_6=5; VAR_6>0; VAR_6--)
        VAR_0->dq[VAR_6] = VAR_0->dq[VAR_6-1];
    FUNC_3(VAR_2, &VAR_0->dq[0]);
    VAR_0->dq[0].sign = VAR_14;

    VAR_0->td = VAR_0->a[1] < -11776;


    VAR_0->dms += (VAR_0->tbls.F[VAR_1]<<4) + ((- VAR_0->dms) >> 5);
    VAR_0->dml += (VAR_0->tbls.F[VAR_1]<<4) + ((- VAR_0->dml) >> 7);
    if (VAR_7)
        VAR_0->ap = 256;
    else {
        VAR_0->ap += (-VAR_0->ap) >> 4;
        if (VAR_0->y <= 1535 || VAR_0->td || FUNC_0((VAR_0->dms << 2) - VAR_0->dml) >= (VAR_0->dml >> 3))
            VAR_0->ap += 0x20;
    }


    VAR_0->yu = FUNC_1(VAR_0->y + VAR_0->tbls.W[VAR_1] + ((-VAR_0->y)>>5), 544, 5120);
    VAR_0->yl += VAR_0->yu + ((-VAR_0->yl)>>6);


    VAR_11 = (VAR_0->ap >= 256) ? 1<<6 : VAR_0->ap >> 2;
    VAR_0->y = (VAR_0->yl + (VAR_0->yu - (VAR_0->yl>>6))*VAR_11) >> 6;


    VAR_0->se = 0;
    for (VAR_6=0; VAR_6<6; VAR_6++)
        VAR_0->se += FUNC_5(FUNC_3(VAR_0->b[VAR_6] >> 2, &VAR_13), &VAR_0->dq[VAR_6]);
    VAR_0->sez = VAR_0->se >> 1;
    for (VAR_6=0; VAR_6<2; VAR_6++)
        VAR_0->se += FUNC_5(FUNC_3(VAR_0->a[VAR_6] >> 2, &VAR_13), &VAR_0->sr[VAR_6]);
    VAR_0->se >>= 1;

    return FUNC_1(VAR_3 * 4, -0xffff, 0xffff);
}
