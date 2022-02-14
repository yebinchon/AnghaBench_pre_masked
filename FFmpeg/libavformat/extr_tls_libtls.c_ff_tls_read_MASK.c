
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int ctx; } ;
typedef TYPE_2__ TLSContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,int) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_3, uint8_t *VAR_4, int VAR_5)
{
    TLSContext *VAR_6 = VAR_3->priv_data;
    ssize_t VAR_7;
    VAR_7 = FUNC_3(VAR_6->ctx, VAR_4, VAR_5);
    if (VAR_7 > 0)
        return VAR_7;
    else if (VAR_7 == 0)
        return VAR_0;
    FUNC_1(VAR_3, VAR_1, "%s\n", FUNC_2(VAR_6->ctx));
    return FUNC_0(VAR_2);
}
