
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lcs_header {int offset; } ;
struct TYPE_6__ {scalar_t__ buf_idx; scalar_t__ io_idx; int state; TYPE_3__* ccws; TYPE_1__* iob; } ;
struct lcs_card {TYPE_2__ read; } ;
struct ccw1 {int dummy; } ;
typedef void* __u32 ;
struct TYPE_7__ {int flags; void* cda; int cmd_code; void* count; } ;
struct TYPE_5__ {void* count; int state; int callback; TYPE_3__* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,char*) ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_11 ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_3(struct lcs_card *VAR_13)
{
 int VAR_14;

 FUNC_0(2, VAR_12, "ireadccw");

 FUNC_2(VAR_13->read.ccws, 0, sizeof (struct ccw1) * (VAR_10 + 1));
 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
  VAR_13->read.ccws[VAR_14].cmd_code = VAR_5;
  VAR_13->read.ccws[VAR_14].count = VAR_9;
  VAR_13->read.ccws[VAR_14].flags =
   VAR_0 | VAR_2 | VAR_1;




  VAR_13->read.ccws[VAR_14].cda =
   (__u32) FUNC_1(VAR_13->read.iob[VAR_14].data);
  ((struct lcs_header *)
   VAR_13->read.iob[VAR_14].data)->offset = VAR_8;
  VAR_13->read.iob[VAR_14].callback = VAR_11;
  VAR_13->read.iob[VAR_14].state = VAR_4;
  VAR_13->read.iob[VAR_14].count = VAR_9;
 }
 VAR_13->read.ccws[0].flags &= ~VAR_1;
 VAR_13->read.ccws[VAR_10 - 1].flags &= ~VAR_1;
 VAR_13->read.ccws[VAR_10 - 1].flags |= VAR_3;

 VAR_13->read.ccws[VAR_10].cmd_code = VAR_6;
 VAR_13->read.ccws[VAR_10].cda =
  (__u32) FUNC_1(VAR_13->read.ccws);

 VAR_13->read.state = VAR_7;

 VAR_13->read.io_idx = 0;
 VAR_13->read.buf_idx = 0;
}
