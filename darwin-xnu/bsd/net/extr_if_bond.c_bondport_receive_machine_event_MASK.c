
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* bondport_ref ;
struct TYPE_9__ {int po_receive_state; } ;
typedef int LAEvent ;


 int VAR_0 ;







 int FUNC_0 (TYPE_1__*,int ,void*) ;
 int FUNC_1 (TYPE_1__*,int ,void*) ;
 int FUNC_2 (TYPE_1__*,int ,void*) ;
 int FUNC_3 (TYPE_1__*,int ,void*) ;
 int FUNC_4 (TYPE_1__*,int ,void*) ;
 int FUNC_5 (TYPE_1__*,int ,void*) ;

__attribute__((used)) static void
FUNC_6(bondport_ref VAR_1, LAEvent VAR_2,
          void * VAR_3)
{
    switch (VAR_1->po_receive_state) {
    case 128:
 FUNC_3(VAR_1, VAR_0, ((void*)0));
 break;
    case 131:
 FUNC_3(VAR_1, VAR_2, VAR_3);
 break;
    case 129:
 FUNC_5(VAR_1, VAR_2, VAR_3);
 break;
    case 132:
 FUNC_2(VAR_1, VAR_2, VAR_3);
 break;
    case 130:
 FUNC_4(VAR_1, VAR_2, VAR_3);
 break;
    case 133:
 FUNC_1(VAR_1, VAR_2, VAR_3);
 break;
    case 134:
 FUNC_0(VAR_1, VAR_2, VAR_3);
 break;
    default:
 break;
    }
    return;
}
