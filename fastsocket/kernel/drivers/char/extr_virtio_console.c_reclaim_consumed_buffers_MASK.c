
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_buffer {int dummy; } ;
struct port {int outvq_full; int out_vq; int portdev; } ;


 int FUNC_0 (struct port_buffer*) ;
 struct port_buffer* FUNC_1 (int ,unsigned int*) ;

__attribute__((used)) static void FUNC_2(struct port *VAR_0)
{
 struct port_buffer *VAR_1;
 unsigned int VAR_2;

 if (!VAR_0->portdev) {

  return;
 }
 while ((VAR_1 = FUNC_1(VAR_0->out_vq, &VAR_2))) {
  FUNC_0(VAR_1);
  VAR_0->outvq_full = 0;
 }
}
