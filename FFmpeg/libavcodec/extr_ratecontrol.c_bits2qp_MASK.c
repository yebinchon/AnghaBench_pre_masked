
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double qscale; scalar_t__ p_tex_bits; scalar_t__ i_tex_bits; } ;
typedef TYPE_1__ RateControlEntry ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static inline double FUNC_1(RateControlEntry *VAR_1, double VAR_2)
{
    if (VAR_2 < 0.9) {
        FUNC_0(((void*)0), VAR_0, "bits<0.9\n");
    }
    return VAR_1->qscale * (double)(VAR_1->i_tex_bits + VAR_1->p_tex_bits + 1) / VAR_2;
}
