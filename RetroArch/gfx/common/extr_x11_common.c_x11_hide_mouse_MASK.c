
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pixel; } ;
typedef TYPE_1__ XColor ;
typedef int Window ;
typedef scalar_t__ Pixmap ;
typedef int Display ;
typedef int Cursor ;
typedef int Colormap ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int ,char*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int ,char*,int,int) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,TYPE_1__*,TYPE_1__*,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int *,int,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_9(Display *VAR_1, Window VAR_2)
{
   static char VAR_3[] = {0, 0, 0, 0, 0, 0, 0, 0};
   Cursor VAR_4;
   Pixmap VAR_5;
   XColor VAR_6, VAR_7;
   Colormap VAR_8 = FUNC_0(VAR_1, FUNC_1(VAR_1));

   if (!FUNC_2(VAR_1, VAR_8, "black", &VAR_6, &VAR_7))
      return;

   VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3, 8, 8);
   VAR_4 = FUNC_4(VAR_1, VAR_5, VAR_5, &VAR_6, &VAR_6, 0, 0);

   FUNC_5(VAR_1, VAR_2, VAR_4);
   FUNC_7(VAR_1, VAR_4);

   if (VAR_5 != VAR_0)
      FUNC_8(VAR_1, VAR_5);

   FUNC_6(VAR_1, VAR_8, &VAR_6.pixel, 1, 0);
}
