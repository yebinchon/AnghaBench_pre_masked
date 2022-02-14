
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18_stream {int out_work_order; struct cx18* cx; } ;
struct cx18 {int out_work_queue; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline void FUNC_1(struct cx18_stream *VAR_0)
{
 struct cx18 *VAR_1 = VAR_0->cx;
 FUNC_0(VAR_1->out_work_queue, &VAR_0->out_work_order);
}
