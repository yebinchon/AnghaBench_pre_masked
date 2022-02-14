
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int irqlock; } ;
struct videobuf_buffer {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct videobuf_queue *VAR_2, struct videobuf_buffer *VAR_3)
{
 unsigned long VAR_4;
 bool VAR_5;

 FUNC_0(VAR_2->irqlock, VAR_4);
 VAR_5 = VAR_3->state != VAR_0 && VAR_3->state != VAR_1;
 FUNC_1(VAR_2->irqlock, VAR_4);
 return VAR_5;
}
