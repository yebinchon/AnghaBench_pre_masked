
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_6__ {int nb_units; size_t data_size; TYPE_1__* units; scalar_t__ data; TYPE_4__* data_ref; } ;
struct TYPE_5__ {scalar_t__ data_size; int data; } ;
typedef TYPE_2__ CodedBitstreamFragment ;
typedef int CodedBitstreamContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(CodedBitstreamContext *VAR_2,
                                     CodedBitstreamFragment *VAR_3)
{
    size_t VAR_4, VAR_5;
    int VAR_6;

    VAR_4 = 0;
    for (VAR_6 = 0; VAR_6 < VAR_3->nb_units; VAR_6++)
        VAR_4 += VAR_3->units[VAR_6].data_size;

    VAR_3->data_ref = FUNC_2(VAR_4 + VAR_0);
    if (!VAR_3->data_ref)
        return FUNC_0(VAR_1);
    VAR_3->data = VAR_3->data_ref->data;
    FUNC_4(VAR_3->data + VAR_4, 0, VAR_0);

    VAR_5 = 0;
    for (VAR_6 = 0; VAR_6 < VAR_3->nb_units; VAR_6++) {
        FUNC_3(VAR_3->data + VAR_5, VAR_3->units[VAR_6].data,
               VAR_3->units[VAR_6].data_size);
        VAR_5 += VAR_3->units[VAR_6].data_size;
    }
    FUNC_1(VAR_5 == VAR_4);
    VAR_3->data_size = VAR_4;

    return 0;
}
