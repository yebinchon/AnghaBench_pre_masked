
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ivtv {TYPE_1__* streams; } ;
struct TYPE_2__ {int * vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ivtv*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct ivtv*,int ) ;

int FUNC_3(struct ivtv *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {

  if (FUNC_0(VAR_2, VAR_3))
   break;

  if (VAR_2->streams[VAR_3].vdev == ((void*)0))
   continue;


  if (FUNC_1(&VAR_2->streams[VAR_3]))
   break;
 }
 if (VAR_3 == VAR_1)
  return 0;


 FUNC_2(VAR_2, 0);
 return -VAR_0;
}
