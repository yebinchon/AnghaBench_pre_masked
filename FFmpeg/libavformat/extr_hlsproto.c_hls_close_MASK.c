
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {int seg_hd; } ;
typedef TYPE_2__ HLSContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_0)
{
    HLSContext *VAR_1 = VAR_0->priv_data;

    FUNC_1(VAR_1);
    FUNC_2(VAR_1);
    FUNC_0(VAR_1->seg_hd);
    return 0;
}
