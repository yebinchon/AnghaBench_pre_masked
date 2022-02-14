
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {struct bsg_command* end_io_data; TYPE_1__* next_rq; int bio; } ;
struct bsg_device {int name; int lock; int busy_list; } ;
struct TYPE_4__ {int flags; int duration; } ;
struct bsg_command {int list; TYPE_2__ hdr; int bidi_bio; int bio; struct request* rq; } ;
struct TYPE_3__ {int bio; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*,int *,struct request*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,struct request*,struct bsg_command*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct bsg_device *VAR_3, struct request_queue *VAR_4,
       struct bsg_command *VAR_5, struct request *VAR_6)
{
 int VAR_7 = (0 == (VAR_5->hdr.flags & VAR_0));




 VAR_5->rq = VAR_6;
 VAR_5->bio = VAR_6->bio;
 if (VAR_6->next_rq)
  VAR_5->bidi_bio = VAR_6->next_rq->bio;
 VAR_5->hdr.duration = VAR_2;
 FUNC_3(&VAR_3->lock);
 FUNC_2(&VAR_5->list, &VAR_3->busy_list);
 FUNC_4(&VAR_3->lock);

 FUNC_1("%s: queueing rq %p, bc %p\n", VAR_3->name, VAR_6, VAR_5);

 VAR_6->end_io_data = VAR_5;
 FUNC_0(VAR_4, ((void*)0), VAR_6, VAR_7, VAR_1);
}
