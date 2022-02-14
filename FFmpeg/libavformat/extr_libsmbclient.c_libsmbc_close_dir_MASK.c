
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int dh; } ;
typedef TYPE_2__ LIBSMBContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_0)
{
    LIBSMBContext *VAR_1 = VAR_0->priv_data;
    if (VAR_1->dh >= 0) {
        FUNC_1(VAR_1->dh);
        VAR_1->dh = -1;
    }
    FUNC_0(VAR_0);
    return 0;
}
