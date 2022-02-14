
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int filter_context; int strength; int quality; int radius; } ;
struct TYPE_10__ {int * chrV; int chrH; TYPE_1__* lumV; TYPE_1__* lumH; } ;
struct TYPE_9__ {int length; int * coeff; } ;
typedef TYPE_1__ SwsVector ;
typedef TYPE_2__ SwsFilter ;
typedef TYPE_3__ FilterParam ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int,int,int ,int,int,int ,unsigned int,TYPE_2__*,int *,int *) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(FilterParam *VAR_2, int VAR_3, int VAR_4, unsigned int VAR_5)
{
    SwsVector *VAR_6;
    SwsFilter VAR_7;

    VAR_6 = FUNC_3(VAR_2->radius, VAR_2->quality);

    if (!VAR_6)
        return FUNC_0(VAR_1);

    FUNC_4(VAR_6, VAR_2->strength);
    VAR_6->coeff[VAR_6->length / 2] += 1.0 - VAR_2->strength;
    VAR_7.lumH = VAR_7.lumV = VAR_6;
    VAR_7.chrH = *(VAR_7.chrV = ((void*)0));
    VAR_2->filter_context = FUNC_2(((void*)0),
                                             VAR_3, VAR_4, VAR_0,
                                             VAR_3, VAR_4, VAR_0,
                                             VAR_5, &VAR_7, ((void*)0), ((void*)0));

    FUNC_1(VAR_6);

    if (!VAR_2->filter_context)
        return FUNC_0(VAR_1);

    return 0;
}
