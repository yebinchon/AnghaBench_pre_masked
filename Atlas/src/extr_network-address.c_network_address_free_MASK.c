
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ can_unlink_socket; TYPE_3__* name; } ;
typedef TYPE_1__ network_address ;
typedef char gchar ;
struct TYPE_6__ {char* str; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int ,char*,int ,scalar_t__) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(network_address *VAR_5) {

 if (!VAR_5) return;






 if (VAR_5->can_unlink_socket == VAR_3 && VAR_5->name != ((void*)0) &&
   VAR_5->name->str != ((void*)0)) {
  gchar *VAR_6;
  int VAR_7;

  VAR_6 = VAR_5->name->str;
  if (VAR_6[0] == '/') {
   VAR_7 = FUNC_3(VAR_6);
   if (VAR_7 == 0) {
    FUNC_1("%s: removing socket %s successful",
     VAR_2, VAR_6);
   } else {
    if (VAR_4 != VAR_1 && VAR_4 != VAR_0) {
     FUNC_0("%s: removing socket %s failed: %s (%d)",
      VAR_2, VAR_6, FUNC_5(VAR_4), VAR_4);
    }
   }
  }
 }


 FUNC_4(VAR_5->name, VAR_3);
 FUNC_2(VAR_5);
}
