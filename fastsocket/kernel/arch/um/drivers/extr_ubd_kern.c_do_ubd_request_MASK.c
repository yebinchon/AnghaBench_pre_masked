
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubd {scalar_t__ end_sg; scalar_t__ start_sg; struct request* request; int restart; struct scatterlist* sg; } ;
struct scatterlist {int length; int offset; } ;
struct request_queue {struct ubd* queuedata; } ;
struct request {int dummy; } ;
struct io_thread_req {int dummy; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct request* FUNC_0 (struct request_queue*) ;
 scalar_t__ FUNC_1 (struct request_queue*,struct request*,struct scatterlist*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (struct io_thread_req*) ;
 struct io_thread_req* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,struct io_thread_req**,int) ;
 int FUNC_8 (struct request*,struct io_thread_req*,unsigned long long,int ,int,int ) ;
 int FUNC_9 (char*,int) ;
 int VAR_2 ;
 int FUNC_10 (struct scatterlist*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_11(struct request_queue *VAR_4)
{
 struct io_thread_req *VAR_5;
 struct request *VAR_6;
 sector_t VAR_7;
 int VAR_8;

 while(1){
  struct ubd *VAR_9 = VAR_4->queuedata;
  if(VAR_9->end_sg == 0){
   struct request *VAR_10 = FUNC_0(VAR_4);
   if(VAR_10 == ((void*)0))
    return;

   VAR_9->request = VAR_10;
   VAR_9->start_sg = 0;
   VAR_9->end_sg = FUNC_1(VAR_4, VAR_10, VAR_9->sg);
  }

  VAR_6 = VAR_9->request;
  VAR_7 = FUNC_2(VAR_6);
  while(VAR_9->start_sg < VAR_9->end_sg){
   struct scatterlist *VAR_11 = &VAR_9->sg[VAR_9->start_sg];

   VAR_5 = FUNC_4(sizeof(struct io_thread_req),
      VAR_1);
   if(VAR_5 == ((void*)0)){
    if(FUNC_6(&VAR_9->restart))
     FUNC_5(&VAR_9->restart, &VAR_2);
    return;
   }
   FUNC_8(VAR_6, VAR_5,
     (unsigned long long)VAR_7 << 9,
     VAR_11->offset, VAR_11->length, FUNC_10(VAR_11));

   VAR_7 += VAR_11->length >> 9;
   VAR_8 = FUNC_7(VAR_3, &VAR_5,
       sizeof(struct io_thread_req *));
   if(VAR_8 != sizeof(struct io_thread_req *)){
    if(VAR_8 != -VAR_0)
     FUNC_9("write to io thread failed, "
            "errno = %d\n", -VAR_8);
    else if(FUNC_6(&VAR_9->restart))
     FUNC_5(&VAR_9->restart, &VAR_2);
    FUNC_3(VAR_5);
    return;
   }

   VAR_9->start_sg++;
  }
  VAR_9->end_sg = 0;
  VAR_9->request = ((void*)0);
 }
}
