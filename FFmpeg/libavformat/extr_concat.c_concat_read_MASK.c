
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct concat_nodes {int uc; } ;
struct concat_data {size_t current; size_t length; struct concat_nodes* nodes; } ;
struct TYPE_3__ {struct concat_data* priv_data; } ;
typedef TYPE_1__ URLContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_2, unsigned char *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6 = 0;
    struct concat_data *VAR_7 = VAR_2->priv_data;
    struct concat_nodes *VAR_8 = VAR_7->nodes;
    size_t VAR_9 = VAR_7->current;

    while (VAR_4 > 0) {
        VAR_5 = FUNC_0(VAR_8[VAR_9].uc, VAR_3, VAR_4);
        if (VAR_5 == VAR_0) {
            if (VAR_9 + 1 == VAR_7->length ||
                FUNC_1(VAR_8[++VAR_9].uc, 0, VAR_1) < 0)
                break;
            VAR_5 = 0;
        }
        if (VAR_5 < 0)
            return VAR_6 ? VAR_6 : VAR_5;
        VAR_6 += VAR_5;
        VAR_3 += VAR_5;
        VAR_4 -= VAR_5;
    }
    VAR_7->current = VAR_9;
    return VAR_6 ? VAR_6 : VAR_5;
}
