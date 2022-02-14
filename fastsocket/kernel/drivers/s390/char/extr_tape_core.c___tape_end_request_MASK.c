
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int rc; int callback_data; int (* callback ) (struct tape_request*,int ) ;int list; int status; } ;
struct tape_device {int req_queue; } ;


 int FUNC_0 (int,char*,struct tape_device*,struct tape_request*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct tape_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tape_request*,int ) ;

__attribute__((used)) static void
FUNC_5(
 struct tape_device * VAR_1,
 struct tape_request * VAR_2,
 int VAR_3)
{
 FUNC_0(6, "__tape_end_request(%p, %p, %i)\n", VAR_1, VAR_2, VAR_3);
 if (VAR_2) {
  VAR_2->rc = VAR_3;
  VAR_2->status = VAR_0;


  FUNC_2(&VAR_2->list);


  if (VAR_2->callback != ((void*)0))
   VAR_2->callback(VAR_2, VAR_2->callback_data);
 }


 if (!FUNC_3(&VAR_1->req_queue))
  FUNC_1(VAR_1);
}
