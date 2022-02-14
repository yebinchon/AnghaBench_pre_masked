
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {size_t msize; int * int_ops; } ;


 int VAR_0 ;
 void* FUNC_0 (struct videobuf_queue*) ;

void *FUNC_1(size_t VAR_1)
{
 struct videobuf_queue VAR_2;


 VAR_2.int_ops = &VAR_0;

 VAR_2.msize = VAR_1;

 return FUNC_0(&VAR_2);
}
