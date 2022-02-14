
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int guchar ;
typedef scalar_t__ gint ;
typedef int gchar ;
struct TYPE_5__ {scalar_t__ cursor; int w; int h; void* texture; int buffer; int store; } ;
typedef TYPE_1__ YuiVdp1 ;
typedef int GtkTreeIter ;
typedef int GdkPixbuf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int *) ;
 int * FUNC_1 (scalar_t__) ;
 void* FUNC_2 (scalar_t__,int*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int const*,int ,int ,int,int,int,int,int ,int *) ;
 int * FUNC_6 (int *,int,int,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *,int,int *,int) ;
 int FUNC_9 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;

void FUNC_12(YuiVdp1 * VAR_5) {
 gint VAR_6;
 gchar * VAR_7;
 gchar VAR_8[1024];
 GtkTreeIter VAR_9;

 FUNC_10(VAR_5);

 VAR_6 = 0;

 VAR_7 = FUNC_1(VAR_6);
 while(VAR_7 && (VAR_6 < VAR_2)) {
  FUNC_7(VAR_5->store, &VAR_9);
  FUNC_8(VAR_5->store, &VAR_9, 0, VAR_7, -1);

  {
   u32 * VAR_10;
   int VAR_11, VAR_12;
   int VAR_13;
   GdkPixbuf * VAR_14, * VAR_15;
   float VAR_16;

   VAR_10 = FUNC_2(VAR_6, &VAR_11, &VAR_12);

   if ((VAR_10 != ((void*)0)) && (VAR_11 > 0) && (VAR_12 > 0)) {
     VAR_13 = VAR_11 * 4;
     VAR_13 += (VAR_13 % 4)? (4 - (VAR_13 % 4)): 0;
    VAR_14 = FUNC_5((const guchar *) VAR_10, VAR_0, VAR_3, 8,
     VAR_11, VAR_12, VAR_13, VAR_4, ((void*)0));

    VAR_16 = (float) 16 / VAR_12;
    if (VAR_12 > 16) {
     VAR_15 = FUNC_6(VAR_14, VAR_11 * VAR_16, 16, VAR_1);
    } else {
     VAR_15 = FUNC_6(VAR_14, VAR_11, VAR_12, VAR_1);
    }

    FUNC_8(VAR_5->store, &VAR_9, 1, VAR_15, -1);

    FUNC_3(VAR_14);
    FUNC_3(VAR_15);
   }
  }

  VAR_6++;
  VAR_7 = FUNC_1(VAR_6);
 }

 FUNC_0(VAR_5->cursor, VAR_8);
 FUNC_9(VAR_5->buffer, FUNC_4(VAR_8), -1);
 VAR_5->texture = FUNC_2(VAR_5->cursor, &VAR_5->w, &VAR_5->h);
 FUNC_11(VAR_5);
}
