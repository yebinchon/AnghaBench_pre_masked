
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_10__ {scalar_t__ maxSessions; scalar_t__ keepTimer; int * count; int mutex; int total; int connHashMemPool; TYPE_2__** connHashList; } ;
struct TYPE_9__ {scalar_t__ time; short port; void* data; TYPE_1__* prev; struct TYPE_9__* next; int ip; } ;
struct TYPE_8__ {TYPE_2__* next; } ;
typedef TYPE_2__ SConnHash ;
typedef TYPE_3__ SConnCache ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,int ,short,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,int,scalar_t__) ;
 int FUNC_6 (char*,void*,int ,short,int,TYPE_2__*,int ) ;

void *FUNC_7(void *VAR_0, uint32_t VAR_1, short VAR_2, char *VAR_3) {
  int VAR_4;
  SConnHash * VAR_5;
  SConnCache *VAR_6;
  void * VAR_7 = ((void*)0);

  VAR_6 = (SConnCache *)VAR_0;
  if (VAR_6 == ((void*)0) || VAR_6->maxSessions == 0) return ((void*)0);

  uint64_t VAR_8 = FUNC_2();

  VAR_4 = FUNC_3(VAR_6, VAR_1, VAR_2, VAR_3);
  FUNC_0(&VAR_6->mutex);

  VAR_5 = VAR_6->connHashList[VAR_4];
  while (VAR_5) {
    if (VAR_8 >= VAR_6->keepTimer + VAR_5->time) {
      FUNC_5(VAR_6, VAR_5, VAR_4, VAR_8);
      VAR_5 = ((void*)0);
      break;
    }

    if (VAR_5->ip == VAR_1 && VAR_5->port == VAR_2) break;

    VAR_5 = VAR_5->next;
  }

  if (VAR_5) {
    FUNC_5(VAR_6, VAR_5->next, VAR_4, VAR_8);

    if (VAR_5->prev) {
      VAR_5->prev->next = VAR_5->next;
    } else {
      VAR_6->connHashList[VAR_4] = VAR_5->next;
    }

    if (VAR_5->next) {
      VAR_5->next->prev = VAR_5->prev;
    }

    VAR_7 = VAR_5->data;
    FUNC_4(VAR_6->connHashMemPool, (char *)VAR_5);
    VAR_6->total--;
    VAR_6->count[VAR_4]--;
  }

  FUNC_1(&VAR_6->mutex);

  if (VAR_7) {
    FUNC_6("%p ip:0x%x:%d:%d:%p retrieved, connections in cache:%d", VAR_7, VAR_1, VAR_2, VAR_4, VAR_5, VAR_6->count[VAR_4]);
  }

  return VAR_7;
}
