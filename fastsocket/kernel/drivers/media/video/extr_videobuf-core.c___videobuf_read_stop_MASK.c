
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int * read_buf; int ** bufs; int stream; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct videobuf_queue*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct videobuf_queue*) ;

__attribute__((used)) static void FUNC_4(struct videobuf_queue *VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 FUNC_0(&VAR_1->stream);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (((void*)0) == VAR_1->bufs[VAR_2])
   continue;
  FUNC_2(VAR_1->bufs[VAR_2]);
  VAR_1->bufs[VAR_2] = ((void*)0);
 }
 VAR_1->read_buf = ((void*)0);
}
