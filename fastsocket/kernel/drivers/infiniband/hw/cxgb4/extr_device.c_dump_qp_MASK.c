
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ state; } ;
struct TYPE_16__ {int qid; } ;
struct TYPE_17__ {TYPE_7__ sq; } ;
struct c4iw_qp {TYPE_9__ attr; TYPE_8__ wq; TYPE_6__* ep; } ;
struct c4iw_debugfs_data {int bufsize; int pos; int buf; } ;
struct TYPE_11__ {int s_addr; } ;
struct TYPE_13__ {int sin_port; TYPE_2__ sin_addr; } ;
struct TYPE_10__ {int s_addr; } ;
struct TYPE_12__ {int sin_port; TYPE_1__ sin_addr; } ;
struct TYPE_14__ {TYPE_4__ remote_addr; TYPE_3__ local_addr; scalar_t__ state; } ;
struct TYPE_15__ {int hwtid; TYPE_5__ com; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,char*,int,int,...) ;

__attribute__((used)) static int FUNC_2(int VAR_0, void *VAR_1, void *VAR_2)
{
 struct c4iw_qp *VAR_3 = VAR_1;
 struct c4iw_debugfs_data *VAR_4 = VAR_2;
 int VAR_5;
 int VAR_6;

 if (VAR_0 != VAR_3->wq.sq.qid)
  return 0;

 VAR_5 = VAR_4->bufsize - VAR_4->pos - 1;
 if (VAR_5 == 0)
  return 1;

 if (VAR_3->ep)
  VAR_6 = FUNC_1(VAR_4->buf + VAR_4->pos, VAR_5, "qp id %u state %u "
        "ep tid %u state %u %pI4:%u->%pI4:%u\n",
        VAR_3->wq.sq.qid, (int)VAR_3->attr.state,
        VAR_3->ep->hwtid, (int)VAR_3->ep->com.state,
        &VAR_3->ep->com.local_addr.sin_addr.s_addr,
        FUNC_0(VAR_3->ep->com.local_addr.sin_port),
        &VAR_3->ep->com.remote_addr.sin_addr.s_addr,
        FUNC_0(VAR_3->ep->com.remote_addr.sin_port));
 else
  VAR_6 = FUNC_1(VAR_4->buf + VAR_4->pos, VAR_5, "qp id %u state %u\n",
         VAR_3->wq.sq.qid, (int)VAR_3->attr.state);
 if (VAR_6 < VAR_5)
  VAR_4->pos += VAR_6;
 return 0;
}
