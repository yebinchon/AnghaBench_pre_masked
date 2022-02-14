
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_buffer {int dummy; } ;
struct port {int outvq_lock; int out_vq; int inbuf_lock; int in_vq; } ;


 int FUNC_0 (struct port*) ;
 int FUNC_1 (struct port_buffer*) ;
 int FUNC_2 (struct port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct port_buffer* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct port *VAR_0)
{
 struct port_buffer *VAR_1;

 FUNC_3(&VAR_0->inbuf_lock);

 FUNC_0(VAR_0);


 while ((VAR_1 = FUNC_5(VAR_0->in_vq)))
  FUNC_1(VAR_1);
 FUNC_4(&VAR_0->inbuf_lock);

 FUNC_3(&VAR_0->outvq_lock);
 FUNC_2(VAR_0);


 while ((VAR_1 = FUNC_5(VAR_0->out_vq)))
  FUNC_1(VAR_1);
 FUNC_4(&VAR_0->outvq_lock);
}
