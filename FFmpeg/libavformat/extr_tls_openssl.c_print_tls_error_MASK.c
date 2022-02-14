
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int ssl; } ;
typedef TYPE_2__ TLSContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_6, int VAR_7)
{
    TLSContext *VAR_8 = VAR_6->priv_data;
    if (VAR_6->flags & VAR_0) {
        int VAR_9 = FUNC_3(VAR_8->ssl, VAR_7);
        if (VAR_9 == VAR_4 || VAR_9 == VAR_5)
            return FUNC_0(VAR_2);
    }
    FUNC_4(VAR_6, VAR_1, "%s\n", FUNC_1(FUNC_2(), ((void*)0)));
    return FUNC_0(VAR_3);
}
