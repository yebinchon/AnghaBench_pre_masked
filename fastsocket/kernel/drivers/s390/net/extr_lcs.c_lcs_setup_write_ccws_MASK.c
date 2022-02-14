
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ buf_idx; scalar_t__ io_idx; TYPE_4__* ccws; TYPE_1__* iob; } ;
struct TYPE_7__ {int state; } ;
struct lcs_card {TYPE_3__ write; TYPE_2__ read; } ;
struct ccw1 {int dummy; } ;
typedef void* __u32 ;
struct TYPE_9__ {int flags; void* cda; int cmd_code; scalar_t__ count; } ;
struct TYPE_6__ {TYPE_4__* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_3(struct lcs_card *VAR_8)
{
 int VAR_9;

 FUNC_0(3, VAR_7, "iwritccw");

 FUNC_2(VAR_8->write.ccws, 0, sizeof(struct ccw1) * VAR_6 + 1);
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8->write.ccws[VAR_9].cmd_code = VAR_4;
  VAR_8->write.ccws[VAR_9].count = 0;
  VAR_8->write.ccws[VAR_9].flags =
   VAR_2 | VAR_0 | VAR_1;




  VAR_8->write.ccws[VAR_9].cda =
   (__u32) FUNC_1(VAR_8->write.iob[VAR_9].data);
 }

 VAR_8->write.ccws[VAR_6].cmd_code = VAR_3;
 VAR_8->write.ccws[VAR_6].cda =
  (__u32) FUNC_1(VAR_8->write.ccws);

 VAR_8->read.state = VAR_5;

 VAR_8->write.io_idx = 0;
 VAR_8->write.buf_idx = 0;
}
