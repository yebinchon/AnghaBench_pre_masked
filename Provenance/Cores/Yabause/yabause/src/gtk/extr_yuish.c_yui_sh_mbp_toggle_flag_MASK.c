
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef TYPE_1__* gpointer ;
typedef char gchar ;
struct TYPE_5__ {int debugsh; int ** mbp_menu_item; int mbpList; } ;
typedef TYPE_1__ YuiSh ;
typedef int GtkWidget ;
typedef int GtkTreeView ;
typedef int GtkTreeSelection ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int,int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *,int,char**,int) ;
 int FUNC_5 (int *,int **,int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (char*,char*,unsigned int*) ;

void FUNC_8(GtkWidget * VAR_6, gpointer VAR_7) {
 GtkTreeSelection * VAR_8;
 YuiSh * VAR_9 = VAR_7;
 GtkTreeIter VAR_10;
 GtkTreeModel * VAR_11;
 gchar * VAR_12, * VAR_13;
 unsigned int VAR_14;
 u32 VAR_15;
 GtkTreeView * VAR_16;
 char *VAR_17;

 VAR_16 = FUNC_0(VAR_9->mbpList);

   VAR_8 = FUNC_6(VAR_16);

   FUNC_5(VAR_8, &VAR_11, &VAR_10);

   FUNC_4(VAR_11, &VAR_10, 0, &VAR_12, -1);
   FUNC_4(VAR_11, &VAR_10, 1, &VAR_13, -1);
          FUNC_7(VAR_12, "%8X", &VAR_14);

          FUNC_2(VAR_9->debugsh, VAR_14);

          VAR_15 = 0;
          VAR_17 = VAR_13;
          while ( *VAR_17 ) {
              switch (*VAR_17) {
                  case 'b': VAR_15 |= VAR_0; break;
                  case 'w': VAR_15 |= VAR_4; break;
                  case 'l': VAR_15 |= VAR_2; break;
                  case 'B': VAR_15 |= VAR_1; break;
                  case 'W': VAR_15 |= VAR_5; break;
                  case 'L': VAR_15 |= VAR_3; break;
              }
              VAR_17++;
          }

   if (VAR_6 == VAR_9->mbp_menu_item[0]) VAR_15 = (VAR_15 & ~VAR_0) | (~VAR_15 & VAR_0);
   if (VAR_6 == VAR_9->mbp_menu_item[1]) VAR_15 = (VAR_15 & ~VAR_4) | (~VAR_15 & VAR_4);
   if (VAR_6 == VAR_9->mbp_menu_item[2]) VAR_15 = (VAR_15 & ~VAR_2) | (~VAR_15 & VAR_2);
   if (VAR_6 == VAR_9->mbp_menu_item[3]) VAR_15 = (VAR_15 & ~VAR_1) | (~VAR_15 & VAR_1);
   if (VAR_6 == VAR_9->mbp_menu_item[4]) VAR_15 = (VAR_15 & ~VAR_5) | (~VAR_15 & VAR_5);
   if (VAR_6 == VAR_9->mbp_menu_item[5]) VAR_15 = (VAR_15 & ~VAR_3) | (~VAR_15 & VAR_3);

          FUNC_1(VAR_9->debugsh, VAR_14, VAR_15);

 FUNC_3(VAR_9);
}
