
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {scalar_t__ avg; int * coeffs; int * historybuffer; int * adaptcoeffs; int * delay; } ;
typedef TYPE_1__ APEFilter ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(APEFilter *VAR_0, int16_t *VAR_1, int VAR_2)
{
    VAR_0->coeffs = VAR_1;
    VAR_0->historybuffer = VAR_1 + VAR_2;
    VAR_0->delay = VAR_0->historybuffer + VAR_2 * 2;
    VAR_0->adaptcoeffs = VAR_0->historybuffer + VAR_2;

    FUNC_0(VAR_0->historybuffer, 0, (VAR_2 * 2) * sizeof(*VAR_0->historybuffer));
    FUNC_0(VAR_0->coeffs, 0, VAR_2 * sizeof(*VAR_0->coeffs));
    VAR_0->avg = 0;
}
