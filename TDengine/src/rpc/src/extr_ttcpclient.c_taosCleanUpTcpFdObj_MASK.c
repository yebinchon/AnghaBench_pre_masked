
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ numOfFds; int label; int shandle; int (* processData ) (int *,int ,int ,int ,int ,scalar_t__,int *) ;int mutex; TYPE_1__* pHead; int pollFd; } ;
struct TYPE_10__ {scalar_t__ thandle; TYPE_2__* prev; TYPE_1__* next; int fd; TYPE_4__* pTcp; struct TYPE_10__* signature; } ;
struct TYPE_9__ {TYPE_1__* next; } ;
struct TYPE_8__ {TYPE_2__* prev; } ;
typedef TYPE_3__ STcpFd ;
typedef TYPE_4__ STcpClient ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int ,int ,scalar_t__,int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int ,scalar_t__) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_9(STcpFd *VAR_1) {
  STcpClient *VAR_2;

  if (VAR_1 == ((void*)0)) return;
  if (VAR_1->signature != VAR_1) return;

  VAR_2 = VAR_1->pTcp;
  if (VAR_2 == ((void*)0)) {
    FUNC_6("double free TcpFdObj!!!!");
    return;
  }

  FUNC_1(VAR_2->pollFd, VAR_0, VAR_1->fd, ((void*)0));
  FUNC_0(VAR_1->fd);

  FUNC_3(&VAR_2->mutex);

  VAR_2->numOfFds--;

  if (VAR_2->numOfFds < 0) FUNC_6("%s number of TCP FDs shall never be negative", VAR_2->label);



  if (VAR_1->prev) {
    (VAR_1->prev)->next = VAR_1->next;
  } else {
    VAR_2->pHead = VAR_1->next;
  }

  if (VAR_1->next) {
    (VAR_1->next)->prev = VAR_1->prev;
  }

  FUNC_4(&VAR_2->mutex);


  if (VAR_1->thandle) (*(VAR_2->processData))(((void*)0), 0, 0, 0, VAR_2->shandle, VAR_1->thandle, ((void*)0));

  FUNC_7("%s TCP FD is cleaned up, numOfFds:%d", VAR_2->label, VAR_2->numOfFds);

  FUNC_2(VAR_1, 0, sizeof(STcpFd));

  FUNC_8(VAR_1);
}
