
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


struct TYPE_17__ {int error; } ;
struct TYPE_18__ {TYPE_8__ h; TYPE_7__* args; } ;
struct TYPE_13__ {scalar_t__ size; int offset; } ;
struct TYPE_14__ {TYPE_4__ in; } ;
struct TYPE_11__ {scalar_t__ size; } ;
struct TYPE_10__ {scalar_t__ size; int offset; } ;
struct TYPE_12__ {TYPE_2__ out; TYPE_1__ in; } ;
struct TYPE_15__ {TYPE_5__ read; TYPE_3__ write; } ;
struct fuse_req {TYPE_9__ out; TYPE_6__ misc; struct fuse_io_priv* io; } ;
struct fuse_io_priv {int offset; scalar_t__ write; } ;
struct fuse_conn {int dummy; } ;
typedef int ssize_t ;
struct TYPE_16__ {scalar_t__ size; } ;


 int FUNC_0 (struct fuse_io_priv*,int ,int) ;
 int FUNC_1 (struct fuse_req*,int) ;

__attribute__((used)) static void FUNC_2(struct fuse_conn *VAR_0, struct fuse_req *VAR_1)
{
 struct fuse_io_priv *VAR_2 = VAR_1->io;
 ssize_t VAR_3 = -1;

 FUNC_1(VAR_1, !VAR_2->write);

 if (VAR_2->write) {
  if (VAR_1->misc.write.in.size != VAR_1->misc.write.out.size)
   VAR_3 = VAR_1->misc.write.in.offset - VAR_2->offset +
    VAR_1->misc.write.out.size;
 } else {
  if (VAR_1->misc.read.in.size != VAR_1->out.args[0].size)
   VAR_3 = VAR_1->misc.read.in.offset - VAR_2->offset +
    VAR_1->out.args[0].size;
 }

 FUNC_0(VAR_2, VAR_1->out.h.error, VAR_3);
}
