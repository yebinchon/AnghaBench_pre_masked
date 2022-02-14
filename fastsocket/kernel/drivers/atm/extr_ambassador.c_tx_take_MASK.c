
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int limit; int start; TYPE_6__* ptr; } ;
struct TYPE_11__ {int lock; TYPE_1__ out; scalar_t__ pending; } ;
typedef TYPE_2__ amb_txq ;
struct TYPE_12__ {TYPE_2__ txq; } ;
typedef TYPE_3__ amb_dev ;
struct TYPE_13__ {scalar_t__ handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (TYPE_6__*,int ,int ) ;
 int FUNC_1 (int,char*,TYPE_3__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_3__*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_5 (amb_dev * VAR_2) {
  amb_txq * VAR_3 = &VAR_2->txq;
  unsigned long VAR_4;

  FUNC_1 (VAR_0|VAR_1, "tx_take %p", VAR_2);

  FUNC_2 (&VAR_3->lock, VAR_4);

  if (VAR_3->pending && VAR_3->out.ptr->handle) {

    FUNC_4 (VAR_2, VAR_3->out.ptr);

    VAR_3->out.ptr->handle = 0;

    VAR_3->pending--;
    VAR_3->out.ptr = FUNC_0 (VAR_3->out.ptr, VAR_3->out.start, VAR_3->out.limit);

    FUNC_3 (&VAR_3->lock, VAR_4);
    return 0;
  } else {

    FUNC_3 (&VAR_3->lock, VAR_4);
    return -1;
  }
}
