
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int buffer; TYPE_1__* rq_disk; } ;
struct floppy_state {scalar_t__ total_secs; scalar_t__ write_protected; int disk_in; } ;
struct TYPE_2__ {struct floppy_state* private_data; } ;


 int VAR_0 ;


 int FUNC_0 (struct request*,int) ;
 struct request* FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 int FUNC_4 (struct floppy_state*,scalar_t__,int ,int ) ;
 int FUNC_5 (struct request*) ;

__attribute__((used)) static void FUNC_6(struct request_queue *VAR_1)
{
 struct request *VAR_2;
 struct floppy_state *VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 while (VAR_2) {
  int VAR_4 = -VAR_0;

  VAR_3 = VAR_2->rq_disk->private_data;
  if (FUNC_3(VAR_2) >= VAR_3->total_secs)
   goto done;
  if (!VAR_3->disk_in)
   goto done;
  if (FUNC_5(VAR_2) == 128 && VAR_3->write_protected)
   goto done;

  switch (FUNC_5(VAR_2)) {
  case 128:

   break;
  case 129:
   VAR_4 = FUNC_4(VAR_3, FUNC_3(VAR_2),
        FUNC_2(VAR_2),
        VAR_2->buffer);
   break;
  }
 done:
  if (!FUNC_0(VAR_2, VAR_4))
   VAR_2 = FUNC_1(VAR_1);
 }
}
