
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t VP56mb ;
typedef int VP56RangeCoder ;
struct TYPE_5__ {int c; TYPE_1__* modelp; } ;
typedef TYPE_2__ VP56Context ;
struct TYPE_4__ {int *** mb_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 size_t FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static VP56mb FUNC_2(VP56Context *VAR_1,
                                 VP56mb VAR_2, int VAR_3)
{
    uint8_t *VAR_4 = VAR_1->modelp->mb_type[VAR_3][VAR_2];
    VP56RangeCoder *VAR_5 = &VAR_1->c;

    if (FUNC_0(VAR_5, VAR_4[0]))
        return VAR_2;
    else
        return FUNC_1(VAR_5, VAR_0, VAR_4);
}
