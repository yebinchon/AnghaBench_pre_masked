
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* bondport_ref ;
struct TYPE_6__ {int po_receive_state; int po_media_info; } ;
typedef int LAEvent ;




 int const VAR_0 ;


 int FUNC_0 (TYPE_1__*,int,void*) ;
 int FUNC_1 (TYPE_1__*,int,void*) ;
 int FUNC_2 (TYPE_1__*,int const,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(bondport_ref VAR_1, LAEvent VAR_2,
    void * VAR_3)
{
    switch (VAR_2) {
    case 130:
 if (VAR_1->po_receive_state != 129) {
     FUNC_0(VAR_1, VAR_2, VAR_3);
 }
 break;
    case 131:
 if (FUNC_3(&VAR_1->po_media_info)) {
     switch (VAR_1->po_receive_state) {
     case 128:
     case 129:
  FUNC_2(VAR_1, 131, ((void*)0));
  break;
     default:
  break;
     }
 }
 else {
     FUNC_2(VAR_1, VAR_0, ((void*)0));
 }
 break;
    default:
 FUNC_1(VAR_1, VAR_2, VAR_3);
 break;
    }
    return;
}
