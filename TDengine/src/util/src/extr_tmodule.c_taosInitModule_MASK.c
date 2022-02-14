
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pthread_attr_t ;
typedef int msg_t ;
struct TYPE_4__ {char* name; int (* init ) () ;int thread; scalar_t__ emptySlot; scalar_t__ fullSlot; scalar_t__ queueSize; int * queue; int fullSem; int emptySem; int stmMutex; int queueMutex; } ;
typedef TYPE_1__ module_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (int *,int ,unsigned int) ;

int FUNC_11(module_t *VAR_3) {
  pthread_attr_t VAR_4;

  if (FUNC_6(&VAR_3->queueMutex, ((void*)0)) < 0) {
    FUNC_2("ERROR: init %s queueMutex failed, reason:%s\n", VAR_3->name, FUNC_7(VAR_1));
    FUNC_9(VAR_3);
    return -1;
  }

  if (FUNC_6(&VAR_3->stmMutex, ((void*)0)) < 0) {
    FUNC_2("ERROR: init %s stmMutex failed, reason:%s\n", VAR_3->name, FUNC_7(VAR_1));
    FUNC_9(VAR_3);
    return -1;
  }

  if (FUNC_10(&VAR_3->emptySem, 0, (unsigned int)VAR_3->queueSize) != 0) {
    FUNC_2("ERROR: init %s empty semaphore failed, reason:%s\n", VAR_3->name, FUNC_7(VAR_1));
    FUNC_9(VAR_3);
    return -1;
  }

  if (FUNC_10(&VAR_3->fullSem, 0, 0) != 0) {
    FUNC_2("ERROR: init %s full semaphore failed, reason:%s\n", VAR_3->name, FUNC_7(VAR_1));
    FUNC_9(VAR_3);
    return -1;
  }

  if ((VAR_3->queue = (msg_t *)FUNC_0((size_t)VAR_3->queueSize * sizeof(msg_t))) == ((void*)0)) {
    FUNC_2("ERROR: %s no enough memory, reason:%s\n", VAR_3->name, FUNC_7(VAR_1));
    FUNC_9(VAR_3);
    return -1;
  }

  FUNC_1(VAR_3->queue, 0, (size_t)VAR_3->queueSize * sizeof(msg_t));
  VAR_3->fullSlot = 0;
  VAR_3->emptySlot = 0;

  FUNC_3(&VAR_4);
  FUNC_4(&VAR_4, VAR_0);

  if (FUNC_5(&VAR_3->thread, &VAR_4, VAR_2, (void *)VAR_3) != 0) {
    FUNC_2("ERROR: %s failed to create thread, reason:%s\n", VAR_3->name, FUNC_7(VAR_1));
    FUNC_9(VAR_3);
    return -1;
  }

  if (VAR_3->init) return (*(VAR_3->init))();

  return 0;
}
