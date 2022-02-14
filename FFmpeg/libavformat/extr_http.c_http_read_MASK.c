
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {scalar_t__ icy_metaint; int icy_data_read; } ;
typedef TYPE_2__ HTTPContext ;


 int FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    HTTPContext *VAR_3 = VAR_0->priv_data;

    if (VAR_3->icy_metaint > 0) {
        VAR_2 = FUNC_1(VAR_0, VAR_2);
        if (VAR_2 < 0)
            return VAR_2;
    }

    VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2);
    if (VAR_2 > 0)
        VAR_3->icy_data_read += VAR_2;
    return VAR_2;
}
