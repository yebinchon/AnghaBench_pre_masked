
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct concat_nodes {scalar_t__ size; int uc; } ;
struct concat_data {scalar_t__ total_size; size_t current; int length; struct concat_nodes* nodes; } ;
typedef scalar_t__ int64_t ;
struct TYPE_3__ {struct concat_data* priv_data; } ;
typedef TYPE_1__ URLContext ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ FUNC_1 (int ,scalar_t__,int const) ;

__attribute__((used)) static int64_t FUNC_2(URLContext *VAR_2, int64_t VAR_3, int VAR_4)
{
    int64_t VAR_5;
    struct concat_data *VAR_6 = VAR_2->priv_data;
    struct concat_nodes *VAR_7 = VAR_6->nodes;
    size_t VAR_8;

    if ((VAR_4 & VAR_0))
        return VAR_6->total_size;
    switch (VAR_4) {
    case 129:
        for (VAR_8 = VAR_6->length - 1; VAR_8 && VAR_3 < -VAR_7[VAR_8].size; VAR_8--)
            VAR_3 += VAR_7[VAR_8].size;
        break;
    case 130:

        for (VAR_8 = 0; VAR_8 != VAR_6->current; VAR_8++)
            VAR_3 += VAR_7[VAR_8].size;
        VAR_3 += FUNC_1(VAR_7[VAR_8].uc, 0, 130);
        VAR_4 = 128;

    case 128:
        for (VAR_8 = 0; VAR_8 != VAR_6->length - 1 && VAR_3 >= VAR_7[VAR_8].size; VAR_8++)
            VAR_3 -= VAR_7[VAR_8].size;
        break;
    default:
        return FUNC_0(VAR_1);
    }

    VAR_5 = FUNC_1(VAR_7[VAR_8].uc, VAR_3, VAR_4);
    if (VAR_5 >= 0) {
        VAR_6->current = VAR_8;
        while (VAR_8)
            VAR_5 += VAR_7[--VAR_8].size;
    }
    return VAR_5;
}
