
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* gpointer ;
typedef scalar_t__ gchar ;
struct TYPE_5__ {int debugsh; } ;
typedef TYPE_1__ YuiSh ;
typedef int GtkEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,unsigned int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (scalar_t__ const*,char*,unsigned int*) ;

__attribute__((used)) static void FUNC_5(GtkEntry * VAR_6, gpointer VAR_7) {
 YuiSh * VAR_8 = VAR_7;
 const gchar * VAR_9;
 unsigned int VAR_10;

 VAR_9 = FUNC_2(VAR_6);

 if (*VAR_9 == 0) return;

 FUNC_4(VAR_9, "%8X", &VAR_10);

 FUNC_0(VAR_8->debugsh, VAR_10, VAR_0|VAR_4|VAR_2|VAR_1|VAR_5|VAR_3);

 FUNC_3(VAR_6, "");

 FUNC_1(VAR_8);
}
