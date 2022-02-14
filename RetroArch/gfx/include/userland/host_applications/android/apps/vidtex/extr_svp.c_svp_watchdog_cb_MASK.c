
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sema; TYPE_1__* video_output; } ;
struct TYPE_4__ {int name; } ;
typedef TYPE_2__ SVP_T ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
   SVP_T *VAR_3 = VAR_2;
   FUNC_0("%s: no frames received for %d ms, aborting", VAR_3->video_output->name,
             VAR_1);
   FUNC_1(VAR_3, VAR_0);
   FUNC_2(&VAR_3->sema);
}
