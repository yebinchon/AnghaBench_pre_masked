
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
struct TYPE_4__ {int connectionId; int taskStatus; } ;
typedef TYPE_1__ WorkerTask ;
struct TYPE_5__ {int taskHashLock; } ;
typedef int HTAB ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static void
FUNC_3(HTAB *VAR_6)
{
 uint64 VAR_7 = VAR_2;
 uint32 VAR_8 = VAR_3;
 WorkerTask *VAR_9 = ((void*)0);

 FUNC_0(&VAR_5->taskHashLock, VAR_1);

 VAR_9 = FUNC_2(VAR_7, VAR_8);
 VAR_9->taskStatus = VAR_4;
 VAR_9->connectionId = VAR_0;

 FUNC_1(&VAR_5->taskHashLock);
}
