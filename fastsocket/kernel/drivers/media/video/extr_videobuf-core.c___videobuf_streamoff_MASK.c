
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int streaming; } ;


 int VAR_0 ;
 int FUNC_0 (struct videobuf_queue*) ;

__attribute__((used)) static int FUNC_1(struct videobuf_queue *VAR_1)
{
 if (!VAR_1->streaming)
  return -VAR_0;

 FUNC_0(VAR_1);

 return 0;
}
