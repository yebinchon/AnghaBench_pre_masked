
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef char gchar ;
typedef scalar_t__ gboolean ;
struct TYPE_4__ {int cursor; int buffer; int image; } ;
typedef TYPE_1__ YuiVdp2 ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__*) ;
 int FUNC_1 (char*,scalar_t__*) ;
 int FUNC_2 (char*,scalar_t__*) ;
 int FUNC_3 (char*,scalar_t__*) ;
 int FUNC_4 (char*,scalar_t__*) ;
 int FUNC_5 (char*,scalar_t__*) ;
 int * FUNC_6 (int,int*,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (TYPE_1__*,int *,int,int) ;
 int FUNC_10 (int ) ;

void FUNC_11(YuiVdp2 * VAR_1) {
 gchar VAR_2[VAR_0];
 gboolean VAR_3;

 FUNC_10(FUNC_7(VAR_1->image));

 switch(VAR_1->cursor) {
  case 0:
   FUNC_0(VAR_2, &VAR_3);
   break;
  case 1:
   FUNC_1(VAR_2, &VAR_3);
   break;
  case 2:
   FUNC_2(VAR_2, &VAR_3);
   break;
  case 3:
   FUNC_3(VAR_2, &VAR_3);
   break;
  case 4:
   FUNC_4(VAR_2, &VAR_3);
   break;
  case 5:
   FUNC_5(VAR_2, &VAR_3);
   break;
 }

 if (VAR_1->cursor > 0) {
  u32 * VAR_4;
  int VAR_5, VAR_6;
  VAR_4 = FUNC_6(VAR_1->cursor - 1, &VAR_5, &VAR_6);
  FUNC_9(VAR_1, VAR_4, VAR_5, VAR_6);
 }

 if (VAR_3) {
  FUNC_8(VAR_1->buffer, VAR_2, -1);
 } else {
  FUNC_8(VAR_1->buffer, "", -1);
 }
}
