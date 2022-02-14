
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * complex_to_real; int * real_to_complex; int correlation; int hann; int buffer; TYPE_1__* frag; } ;
struct TYPE_5__ {int xdat; int data; } ;
typedef TYPE_2__ ATempoContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(ATempoContext *VAR_0)
{
    FUNC_2(VAR_0);

    FUNC_0(&VAR_0->frag[0].data);
    FUNC_0(&VAR_0->frag[1].data);
    FUNC_0(&VAR_0->frag[0].xdat);
    FUNC_0(&VAR_0->frag[1].xdat);

    FUNC_0(&VAR_0->buffer);
    FUNC_0(&VAR_0->hann);
    FUNC_0(&VAR_0->correlation);

    FUNC_1(VAR_0->real_to_complex);
    VAR_0->real_to_complex = ((void*)0);

    FUNC_1(VAR_0->complex_to_real);
    VAR_0->complex_to_real = ((void*)0);
}
