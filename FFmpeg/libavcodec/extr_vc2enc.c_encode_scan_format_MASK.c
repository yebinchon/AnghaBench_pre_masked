
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int interlaced; int pb; int strict_compliance; } ;
typedef TYPE_1__ VC2EncContext ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(VC2EncContext *VAR_0)
{
    FUNC_0(&VAR_0->pb, 1, !VAR_0->strict_compliance);
    if (!VAR_0->strict_compliance)
        FUNC_1(&VAR_0->pb, VAR_0->interlaced);
}
