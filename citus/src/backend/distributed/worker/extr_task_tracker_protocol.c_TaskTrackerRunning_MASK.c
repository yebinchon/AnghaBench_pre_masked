
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WorkerTask ;
struct TYPE_2__ {int taskHashLock; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static bool
FUNC_4(void)
{
 WorkerTask *VAR_4 = ((void*)0);
 bool VAR_5 = 1;
 bool VAR_6 = 1;


 VAR_5 = FUNC_2();
 if (!VAR_5)
 {
  return 0;
 }






 FUNC_0(&VAR_3->taskHashLock, VAR_0);

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (VAR_4 != ((void*)0))
 {
  VAR_6 = 0;
 }

 FUNC_1(&VAR_3->taskHashLock);

 return VAR_6;
}
