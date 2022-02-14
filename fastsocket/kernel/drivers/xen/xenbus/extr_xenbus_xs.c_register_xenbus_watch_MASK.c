
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int watch ;
struct xenbus_watch {int list; int node; } ;
struct TYPE_2__ {int watch_mutex; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*,long) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_9 (int ,char*) ;

int FUNC_10(struct xenbus_watch *VAR_4)
{

 char VAR_5[sizeof(VAR_4) * 2 + 1];
 int VAR_6;

 FUNC_7(VAR_5, "%lX", (long)VAR_4);

 FUNC_1(&VAR_3.watch_mutex);

 FUNC_5(&VAR_2);
 FUNC_0(FUNC_2(VAR_5));
 FUNC_3(&VAR_4->list, &VAR_1);
 FUNC_6(&VAR_2);

 VAR_6 = FUNC_9(VAR_4->node, VAR_5);


 if ((VAR_6 != 0) && (VAR_6 != -VAR_0)) {
  FUNC_5(&VAR_2);
  FUNC_4(&VAR_4->list);
  FUNC_6(&VAR_2);
 }

 FUNC_8(&VAR_3.watch_mutex);

 return VAR_6;
}
