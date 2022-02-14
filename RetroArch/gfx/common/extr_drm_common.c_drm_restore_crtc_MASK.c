
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int y; int x; int buffer_id; int crtc_id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_2(void)
{
   if (!VAR_2)
      return;

   FUNC_1(VAR_1, VAR_2->crtc_id,
         VAR_2->buffer_id,
         VAR_2->x,
         VAR_2->y,
         &VAR_0, 1, &VAR_2->mode);

   FUNC_0(VAR_2);
   VAR_2 = ((void*)0);
}
