
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int buffer; TYPE_1__* rq_disk; } ;
struct hd_i_struct {unsigned int sect; unsigned int head; scalar_t__ special_op; } ;
struct TYPE_2__ {int disk_name; struct hd_i_struct* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 () ;
 struct request* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct request*) ;
 unsigned int FUNC_3 (struct request*) ;
 unsigned int FUNC_4 (struct request*) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_6 (struct hd_i_struct*,struct request*) ;
 unsigned int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct hd_i_struct*,unsigned int,unsigned int,unsigned int,unsigned int,int ,int *) ;
 int VAR_6 ;
 struct request* VAR_7 ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (char*,...) ;
 int VAR_8 ;
 scalar_t__ FUNC_12 (struct request*) ;
 scalar_t__ VAR_9 ;
 int FUNC_13 () ;
 int FUNC_14 (struct request*) ;
 int FUNC_15 () ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_16(void)
{
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 struct hd_i_struct *VAR_17;
 struct request *VAR_18;

 if (VAR_5)
  return;
repeat:
 FUNC_5(&VAR_4);

 if (!VAR_7) {
  VAR_7 = FUNC_1(VAR_6);
  if (!VAR_7) {
   VAR_5 = ((void*)0);
   return;
  }
 }
 VAR_18 = VAR_7;

 if (VAR_9) {
  FUNC_13();
  return;
 }
 VAR_17 = VAR_18->rq_disk->private_data;
 VAR_11 = FUNC_3(VAR_18);
 VAR_12 = FUNC_4(VAR_18);
 if (VAR_11 >= FUNC_7(VAR_18->rq_disk) ||
     ((VAR_11+VAR_12) > FUNC_7(VAR_18->rq_disk))) {
  FUNC_11("%s: bad access: block=%d, count=%d\n",
   VAR_18->rq_disk->disk_name, VAR_11, VAR_12);
  FUNC_8(-VAR_2);
  goto repeat;
 }

 if (VAR_17->special_op) {
  if (FUNC_6(VAR_17, VAR_18))
   goto repeat;
  return;
 }
 VAR_13 = VAR_11 % VAR_17->sect + 1;
 VAR_14 = VAR_11 / VAR_17->sect;
 VAR_15 = VAR_14 % VAR_17->head;
 VAR_16 = VAR_14 / VAR_17->head;






 if (FUNC_2(VAR_18)) {
  switch (FUNC_14(VAR_18)) {
  case 129:
   FUNC_9(VAR_17, VAR_12, VAR_13, VAR_15, VAR_16, VAR_0,
    &VAR_8);
   if (VAR_9)
    goto repeat;
   break;
  case 128:
   FUNC_9(VAR_17, VAR_12, VAR_13, VAR_15, VAR_16, VAR_1,
    &VAR_10);
   if (VAR_9)
    goto repeat;
   if (FUNC_15()) {
    FUNC_0();
    goto repeat;
   }
   FUNC_10(VAR_3, VAR_18->buffer, 256);
   break;
  default:
   FUNC_11("unknown hd-command\n");
   FUNC_8(-VAR_2);
   break;
  }
 }
}
