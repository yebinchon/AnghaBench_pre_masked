
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* packet; } ;
struct TYPE_4__ {int size; int data; } ;
typedef TYPE_2__ QDM2SubPNode ;
typedef int QDM2Context ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(QDM2Context *VAR_0, QDM2SubPNode *VAR_1)
{
    GetBitContext VAR_2;

    if (VAR_1) {
        FUNC_1(&VAR_2, VAR_1->packet->data, VAR_1->packet->size * 8);
        FUNC_2(VAR_0, &VAR_2);
        FUNC_0(VAR_0, 1);
    } else {
        FUNC_0(VAR_0, 0);
    }
}
