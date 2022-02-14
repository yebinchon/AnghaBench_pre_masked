
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {scalar_t__ hd; } ;
typedef TYPE_2__ IcecastContext ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(URLContext *VAR_0)
{
    IcecastContext *VAR_1 = VAR_0->priv_data;
    if (VAR_1->hd)
        FUNC_0(VAR_1->hd);
    return 0;
}
