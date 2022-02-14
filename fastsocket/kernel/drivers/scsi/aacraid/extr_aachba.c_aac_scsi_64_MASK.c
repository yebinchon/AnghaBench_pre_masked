
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sgmap64 {int dummy; } ;
struct sgentry64 {int dummy; } ;
struct sgentry {int dummy; } ;
struct scsi_cmnd {int cmd_len; int cmnd; } ;
struct fib {TYPE_2__* dev; } ;
struct TYPE_3__ {int count; } ;
struct aac_srb {TYPE_1__ sg; int cdb; int count; } ;
struct aac_fibhdr {int dummy; } ;
typedef int fib_callback ;
struct TYPE_4__ {int max_fib_size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct scsi_cmnd*,struct sgmap64*) ;
 int FUNC_2 (int ,struct fib*,int,int ,int ,int,int ,void*) ;
 struct aac_srb* FUNC_3 (struct fib*,struct scsi_cmnd*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_9(struct fib * VAR_3, struct scsi_cmnd * VAR_4)
{
 u16 VAR_5;
 struct aac_srb * VAR_6 = FUNC_3(VAR_3, VAR_4);

 FUNC_1(VAR_4, (struct sgmap64*) &VAR_6->sg);
 VAR_6->count = FUNC_4(FUNC_8(VAR_4));

 FUNC_7(VAR_6->cdb, 0, sizeof(VAR_6->cdb));
 FUNC_6(VAR_6->cdb, VAR_4->cmnd, VAR_4->cmd_len);



 VAR_5 = sizeof (struct aac_srb) - sizeof (struct sgentry) +
  ((FUNC_5(VAR_6->sg.count) & 0xff) *
   sizeof (struct sgentry64));
 FUNC_0 (VAR_5 > (VAR_3->dev->max_fib_size -
    sizeof(struct aac_fibhdr)));




 return FUNC_2(VAR_1, VAR_3,
    VAR_5, VAR_0, 0, 1,
      (fib_callback) VAR_2,
      (void *) VAR_4);
}
