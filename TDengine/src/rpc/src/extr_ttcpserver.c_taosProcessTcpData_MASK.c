
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_4__* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_10__ {int * thandle; scalar_t__ port; int ip; int fd; } ;
struct TYPE_9__ {scalar_t__ msgLen; } ;
struct TYPE_8__ {int numOfFds; int shandle; int * (* processData ) (void*,int,int ,int ,int ,int *,TYPE_4__*) ;int label; int threadId; int pollFd; int threadMutex; int fdReady; } ;
typedef TYPE_2__ SThreadObj ;
typedef TYPE_3__ STaosHeader ;
typedef TYPE_4__ SFdObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct epoll_event*,int,int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (void*,size_t) ;
 int * FUNC_7 (void*,int,int ,int ,int ,int *,TYPE_4__*) ;
 int FUNC_8 (char*,int ,int,...) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int ,void*,int) ;
 int FUNC_12 (void*) ;

__attribute__((used)) static void FUNC_13(void *VAR_3) {
  SThreadObj * VAR_4;
  int VAR_5, VAR_6;
  SFdObj * VAR_7;
  struct epoll_event VAR_8[VAR_2];

  VAR_4 = (SThreadObj *)VAR_3;

  while (1) {
    FUNC_4(&VAR_4->threadMutex);
    if (VAR_4->numOfFds < 1) {
      FUNC_3(&VAR_4->fdReady, &VAR_4->threadMutex);
    }
    FUNC_5(&VAR_4->threadMutex);

    VAR_6 = FUNC_0(VAR_4->pollFd, VAR_8, VAR_2, -1);
    if (VAR_6 < 0) continue;

    for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5) {
      VAR_7 = VAR_8[VAR_5].data.ptr;

      if (VAR_8[VAR_5].events & VAR_0) {
        FUNC_9("%s TCP thread:%d, error happened on FD", VAR_4->label, VAR_4->threadId);
        FUNC_10(VAR_7);
        continue;
      }

      if (VAR_8[VAR_5].events & VAR_1) {
        FUNC_9("%s TCP thread:%d, FD hang up", VAR_4->label, VAR_4->threadId);
        FUNC_10(VAR_7);
        continue;
      }

      void *VAR_9 = FUNC_2(1024);
      int VAR_10 = FUNC_11(VAR_7->fd, VAR_9, sizeof(STaosHeader));
      if (VAR_10 != sizeof(STaosHeader)) {
        FUNC_8("%s read error, headLen:%d", VAR_4->label, VAR_10);
        FUNC_10(VAR_7);
        FUNC_12(VAR_9);
        continue;
      }

      int VAR_11 = (int32_t)FUNC_1((uint32_t)((STaosHeader *)VAR_9)->msgLen);
      if (VAR_11 > 1024) VAR_9 = FUNC_6(VAR_9, (size_t)VAR_11);

      int VAR_12 = VAR_11 - VAR_10;
      int VAR_13 = FUNC_11(VAR_7->fd, VAR_9 + VAR_10, VAR_12);




      if (VAR_12 != VAR_13) {
        FUNC_8("%s read error, leftLen:%d retLen:%d", VAR_4->label, VAR_12, VAR_13);
        FUNC_10(VAR_7);
        FUNC_12(VAR_9);
        continue;
      }

      VAR_7->thandle = (*(VAR_4->processData))(VAR_9, VAR_11, VAR_7->ip, (int16_t)VAR_7->port,
                                                     VAR_4->shandle, VAR_7->thandle, VAR_7);

      if (VAR_7->thandle == ((void*)0)) FUNC_10(VAR_7);
    }
  }
}
