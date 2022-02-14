
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_request {int retries; void* callback_data; int callback; } ;
struct tape_device {TYPE_1__* discipline; } ;
struct request {int dummy; } ;
struct TYPE_2__ {int (* free_bread ) (struct tape_request*) ;struct tape_request* (* bread ) (struct tape_device*,struct request*) ;} ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,struct tape_device*,struct request*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct tape_request*) ;
 int FUNC_3 (struct tape_request*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct request*,int ) ;
 struct tape_request* FUNC_5 (struct tape_device*,struct request*) ;
 int FUNC_6 (struct tape_request*) ;
 int FUNC_7 (struct tape_device*,struct tape_request*) ;

__attribute__((used)) static int
FUNC_8(struct tape_device *VAR_3, struct request *VAR_4)
{
 struct tape_request * VAR_5;
 int VAR_6;

 FUNC_1(6, "tapeblock_start_request(%p, %p)\n", VAR_3, VAR_4);

 VAR_5 = VAR_3->discipline->bread(VAR_3, VAR_4);
 if (FUNC_2(VAR_5)) {
  FUNC_0(1, "TBLOCK: bread failed\n");
  FUNC_4(VAR_4, -VAR_0);
  return FUNC_3(VAR_5);
 }
 VAR_5->callback = VAR_2;
 VAR_5->callback_data = (void *) VAR_4;
 VAR_5->retries = VAR_1;

 VAR_6 = FUNC_7(VAR_3, VAR_5);
 if (VAR_6) {




  FUNC_4(VAR_4, -VAR_0);
  VAR_3->discipline->free_bread(VAR_5);
 }

 return VAR_6;
}
