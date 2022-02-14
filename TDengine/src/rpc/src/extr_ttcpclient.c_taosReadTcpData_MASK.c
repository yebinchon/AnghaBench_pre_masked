
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_2__* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
typedef int int32_t ;
struct TYPE_10__ {scalar_t__ msgLen; } ;
struct TYPE_9__ {int numOfFds; int shandle; int * (* processData ) (void*,int,int ,int ,int ,int *,TYPE_2__*) ;int label; int pollFd; int mutex; int fdReady; } ;
struct TYPE_8__ {int * thandle; int port; int ip; int fd; } ;
typedef TYPE_2__ STcpFd ;
typedef TYPE_3__ STcpClient ;
typedef TYPE_4__ STaosHeader ;


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
 int * FUNC_7 (void*,int,int ,int ,int ,int *,TYPE_2__*) ;
 int FUNC_8 (char*,int ,int,...) ;
 int FUNC_9 (char*,int ,...) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,void*,int) ;
 int FUNC_12 (void*) ;

__attribute__((used)) static void *FUNC_13(void *VAR_3) {
  STcpClient * VAR_4 = (STcpClient *)VAR_3;
  int VAR_5, VAR_6;
  STcpFd * VAR_7;
  struct epoll_event VAR_8[VAR_2];

  while (1) {
    FUNC_4(&VAR_4->mutex);
    if (VAR_4->numOfFds < 1) FUNC_3(&VAR_4->fdReady, &VAR_4->mutex);
    FUNC_5(&VAR_4->mutex);

    VAR_6 = FUNC_0(VAR_4->pollFd, VAR_8, VAR_2, -1);
    if (VAR_6 < 0) continue;

    for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5) {
      VAR_7 = VAR_8[VAR_5].data.ptr;

      if (VAR_8[VAR_5].events & VAR_0) {
        FUNC_9("%s TCP error happened on FD\n", VAR_4->label);
        FUNC_10(VAR_7);
        continue;
      }

      if (VAR_8[VAR_5].events & VAR_1) {
        FUNC_9("%s TCP FD hang up\n", VAR_4->label);
        FUNC_10(VAR_7);
        continue;
      }

      void *VAR_9 = FUNC_2(1024);
      if (((void*)0) == VAR_9) {
        FUNC_9("%s TCP malloc(size:1024) fail\n", VAR_4->label);
        FUNC_10(VAR_7);
        continue;
      }

      int VAR_10 = FUNC_11(VAR_7->fd, VAR_9, sizeof(STaosHeader));
      if (VAR_10 != sizeof(STaosHeader)) {
        FUNC_8("%s read error, headLen:%d", VAR_4->label, VAR_10);
        FUNC_12(VAR_9);
        FUNC_10(VAR_7);
        continue;
      }

      int VAR_11 = (int32_t)FUNC_1((uint32_t)((STaosHeader *)VAR_9)->msgLen);
      if (VAR_11 > 1024) {
        void *VAR_12 = FUNC_6(VAR_9, (size_t)VAR_11);
        if (((void*)0) == VAR_12) {
          FUNC_9("%s TCP malloc(size:%d) fail\n", VAR_4->label, VAR_11);
          FUNC_12(VAR_9);
          FUNC_10(VAR_7);
          continue;
        }
        VAR_9 = VAR_12;
      }

      int VAR_13 = VAR_11 - VAR_10;
      int VAR_14 = FUNC_11(VAR_7->fd, VAR_9 + VAR_10, VAR_13);



      if (VAR_13 != VAR_14) {
        FUNC_8("%s read error, leftLen:%d retLen:%d", VAR_4->label, VAR_13, VAR_14);
        FUNC_12(VAR_9);
        FUNC_10(VAR_7);
        continue;
      }

      VAR_7->thandle =
          (*(VAR_4->processData))(VAR_9, VAR_11, VAR_7->ip, VAR_7->port, VAR_4->shandle, VAR_7->thandle, VAR_7);

      if (VAR_7->thandle == ((void*)0)) FUNC_10(VAR_7);
    }
  }

  return ((void*)0);
}
