
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int ssl_context; } ;
typedef TYPE_2__ TLSContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int,size_t*) ;
 int FUNC_1 (int,size_t) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
    TLSContext *VAR_4 = VAR_1->priv_data;
    size_t VAR_5 = 0;
    int VAR_6 = FUNC_0(VAR_4->ssl_context, VAR_2, VAR_3, &VAR_5);
    VAR_6 = FUNC_1(VAR_6, VAR_5);
    if (VAR_6 > 0)
        return VAR_6;
    if (VAR_6 == 0)
        return VAR_0;
    return FUNC_2(VAR_1, VAR_6);
}
