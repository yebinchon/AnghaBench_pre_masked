
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int sub_sampling; } ;
struct TYPE_8__ {TYPE_1__* packet; } ;
struct TYPE_7__ {int size; int data; } ;
typedef TYPE_2__ QDM2SubPNode ;
typedef TYPE_3__ QDM2Context ;
typedef int GetBitContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_3__*,int *,int,int,int ) ;

__attribute__((used)) static void FUNC_3(QDM2Context *VAR_0, QDM2SubPNode *VAR_1)
{
    GetBitContext VAR_2;
    int VAR_3 = 0;

    if (VAR_1) {
        VAR_3 = VAR_1->packet->size * 8;
        FUNC_1(&VAR_2, VAR_1->packet->data, VAR_3);
    }

    FUNC_2(VAR_0, &VAR_2, VAR_3, 8, FUNC_0(VAR_0->sub_sampling));
}
