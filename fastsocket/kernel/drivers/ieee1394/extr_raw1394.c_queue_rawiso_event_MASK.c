
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int generation; int type; } ;
struct pending_request {TYPE_2__ req; struct file_info* file_info; } ;
struct file_info {int reqlists_lock; TYPE_1__* iso_handle; int host; } ;
struct TYPE_3__ {int overflows; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pending_request* FUNC_0 (int ) ;
 int FUNC_1 (struct pending_request*) ;
 int FUNC_2 (struct file_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct file_info *VAR_2)
{
 unsigned long VAR_3;

 FUNC_5(&VAR_2->reqlists_lock, VAR_3);


 if (!FUNC_2(VAR_2)) {
  struct pending_request *VAR_4 =
      FUNC_0(VAR_0);

  if (VAR_4) {
   VAR_4->file_info = VAR_2;
   VAR_4->req.type = VAR_1;
   VAR_4->req.generation = FUNC_4(VAR_2->host);
   FUNC_1(VAR_4);
  } else {

   if (VAR_2->iso_handle) {
    FUNC_3(&VAR_2->iso_handle->overflows);
   }
  }
 }
 FUNC_6(&VAR_2->reqlists_lock, VAR_3);
}
