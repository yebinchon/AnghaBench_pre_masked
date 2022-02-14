
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int gpointer ;
typedef int gboolean ;
struct TYPE_6__ {int window; } ;
struct TYPE_5__ {int member_1; int member_2; int member_3; int member_0; } ;
typedef int GdkPixmap ;
typedef int GdkCursor ;
typedef TYPE_1__ GdkColor ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (int *,char*,int,int) ;
 int * FUNC_2 (int *,int *,TYPE_1__*,TYPE_1__*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static gboolean FUNC_5(gpointer VAR_3) {
 VAR_2--;

 if (VAR_2 == 0) {
  static char VAR_4[] = { 0 };
  static char VAR_5[] = { 0 };

  GdkCursor *VAR_6;
   GdkPixmap *VAR_7, *VAR_8;
  GdkColor VAR_9 = { 0, 65535, 65535, 65535 };
  GdkColor VAR_10 = { 0, 0, 0, 0 };

  VAR_7 = FUNC_1(((void*)0), VAR_4, 1, 1);
  VAR_8 = FUNC_1(((void*)0), VAR_5, 1, 1);
  VAR_6 = FUNC_2(VAR_7, VAR_8, &VAR_9, &VAR_10, 1, 1);
  FUNC_3(VAR_7);
  FUNC_3(VAR_8);

  FUNC_4(FUNC_0(VAR_3)->window, VAR_6);

  return VAR_0;
 } else {
  return VAR_1;
 }
}
