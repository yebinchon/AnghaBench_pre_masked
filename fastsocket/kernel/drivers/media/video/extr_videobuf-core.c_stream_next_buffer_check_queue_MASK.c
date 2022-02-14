
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int streaming; int stream; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct videobuf_queue*) ;
 int FUNC_3 (struct videobuf_queue*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct videobuf_queue *VAR_2, int VAR_3)
{
 int VAR_4;

checks:
 if (!VAR_2->streaming) {
  FUNC_0(1, "next_buffer: Not streaming\n");
  VAR_4 = -VAR_1;
  goto done;
 }

 if (FUNC_1(&VAR_2->stream)) {
  if (VAR_3) {
   VAR_4 = -VAR_0;
   FUNC_0(2, "next_buffer: no buffers to dequeue\n");
   goto done;
  } else {
   FUNC_0(2, "next_buffer: waiting on buffer\n");


   FUNC_3(VAR_2);




   VAR_4 = FUNC_4(VAR_2->wait,
    !FUNC_1(&VAR_2->stream) || !VAR_2->streaming);
   FUNC_2(VAR_2);

   if (VAR_4)
    goto done;

   goto checks;
  }
 }

 VAR_4 = 0;

done:
 return VAR_4;
}
