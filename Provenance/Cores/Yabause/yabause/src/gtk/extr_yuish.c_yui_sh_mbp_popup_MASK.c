
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int guint ;
typedef TYPE_1__* gpointer ;
typedef int gint ;
typedef char gchar ;
struct TYPE_8__ {int * mbp_menu_item; int mbp_menu; int * mbpList; } ;
typedef TYPE_1__ YuiSh ;
struct TYPE_9__ {scalar_t__ type; int button; int time; int y; int x; } ;
typedef int GtkWidget ;
typedef int GtkTreeView ;
typedef int GtkTreeSelection ;
typedef int GtkTreePath ;
typedef int GtkTreeModel ;
typedef int GtkTreeIter ;
typedef int GtkMenu ;
typedef TYPE_3__ GdkEventButton ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int *,int *,TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ,int ,int *,int *,TYPE_1__*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int *,int *,int *,int *,int,int ) ;
 int FUNC_9 (int *,int *,int,char**,int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int **,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int ,int ,int **,int *,int *,int *) ;
 int * FUNC_16 (int *) ;

gint FUNC_17(GtkWidget * VAR_5, GdkEventButton * VAR_6, gpointer VAR_7)
{
  GtkMenu *VAR_8;
  GdkEventButton *VAR_9;
  YuiSh * VAR_10 = VAR_7;
  GtkTreeView * VAR_11;
  GtkTreeSelection * VAR_12;
  GtkTreeIter VAR_13;
  GtkTreeModel * VAR_14;
  gchar * VAR_15;
  char *VAR_16;
  int VAR_17;
  guint VAR_18;

  FUNC_3 (VAR_7 != ((void*)0), VAR_0);
  FUNC_3 (VAR_6 != ((void*)0), VAR_0);

  VAR_11 = FUNC_2(VAR_10->mbpList);
  VAR_8 = FUNC_1(VAR_10->mbp_menu);

  if (VAR_6->type == VAR_1) {
      VAR_9 = (GdkEventButton *) VAR_6;
      if (VAR_9->button == 3) {

           GtkTreePath *VAR_19;

   VAR_12 = FUNC_16(VAR_11);

           if (FUNC_15(FUNC_2(VAR_11), VAR_6->x, VAR_6->y, &VAR_19, ((void*)0), ((void*)0), ((void*)0))) {
               FUNC_14(VAR_12);
               FUNC_13(VAR_12, VAR_19);
               FUNC_10(VAR_19);
           }

   FUNC_12(VAR_12, &VAR_14, &VAR_13);

          if (FUNC_11(VAR_12) == 0) return VAR_0;

   FUNC_9(VAR_14, &VAR_13, 1, &VAR_15, -1);

          VAR_18 = FUNC_6("activate", VAR_2);

          for(VAR_17 = 0;VAR_17 < 6;VAR_17++) FUNC_4(VAR_10->mbp_menu_item[VAR_17], VAR_3, VAR_18, 0, ((void*)0), ((void*)0), VAR_10);

          for(VAR_17 = 0;VAR_17 < 6;VAR_17++) FUNC_7(FUNC_0(VAR_10->mbp_menu_item[VAR_17]), VAR_0);

          VAR_16 = VAR_15;
          while ( *VAR_16 ) {
              switch (*VAR_16) {

                  case 'b': FUNC_7(FUNC_0(VAR_10->mbp_menu_item[0]), VAR_4); break;
                  case 'w': FUNC_7(FUNC_0(VAR_10->mbp_menu_item[1]), VAR_4); break;
                  case 'l': FUNC_7(FUNC_0(VAR_10->mbp_menu_item[2]), VAR_4); break;
                  case 'B': FUNC_7(FUNC_0(VAR_10->mbp_menu_item[3]), VAR_4); break;
                  case 'W': FUNC_7(FUNC_0(VAR_10->mbp_menu_item[4]), VAR_4); break;
                  case 'L': FUNC_7(FUNC_0(VAR_10->mbp_menu_item[5]), VAR_4); break;
              }
              VAR_16++;
          }

          for(VAR_17 = 0;VAR_17 < 6;VAR_17++) FUNC_5(VAR_10->mbp_menu_item[VAR_17], VAR_3, VAR_18, 0, ((void*)0), ((void*)0), VAR_10);

   FUNC_8 (VAR_8, ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_9->button, VAR_9->time);
      }
  }

  return VAR_0;
}
