
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_3__ {int mode; int transfer_button; int to_entry; int from_entry; int file_entry; } ;
typedef TYPE_1__ YuiTransfer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;



 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(YuiTransfer * VAR_2) {
 gboolean VAR_3 = VAR_0;

 if (*FUNC_1(FUNC_0(VAR_2->file_entry)) != '\0') {
  switch(VAR_2->mode) {
   case 130:
   case 129:
    if (*FUNC_1(FUNC_0(VAR_2->from_entry)) != '\0') {
     VAR_3 = VAR_1;
    }
    break;
   case 128:
    if ((*FUNC_1(FUNC_0(VAR_2->from_entry)) != '\0') && (*FUNC_1(FUNC_0(VAR_2->to_entry)) != '\0')) {
     VAR_3 = VAR_1;
    }
    break;
  }
 }

 FUNC_2(VAR_2->transfer_button, VAR_3);
}
