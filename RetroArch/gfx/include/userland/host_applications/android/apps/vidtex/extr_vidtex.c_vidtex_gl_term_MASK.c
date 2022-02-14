
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int display; int surface; int context; int texture; } ;
typedef TYPE_1__ VIDTEX_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(VIDTEX_T *VAR_2)
{
   FUNC_5(VAR_2);


   FUNC_4(1, &VAR_2->texture);


   FUNC_2(VAR_2->display, VAR_1, VAR_1, VAR_0);
   FUNC_0(VAR_2->display, VAR_2->context);
   FUNC_1(VAR_2->display, VAR_2->surface);
   FUNC_3(VAR_2->display);
}
