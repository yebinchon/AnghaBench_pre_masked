
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_ring_buffer {int irq_queue; int name; int (* get_seqno ) (struct intel_ring_buffer*,int) ;int request_list; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct intel_ring_buffer*) ;
 int FUNC_4 (struct intel_ring_buffer*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bool FUNC_7(struct intel_ring_buffer *VAR_0, bool *VAR_1)
{
 if (FUNC_2(&VAR_0->request_list) ||
     FUNC_1(VAR_0->get_seqno(VAR_0, 0),
         FUNC_3(VAR_0))) {

  if (FUNC_5(&VAR_0->irq_queue)) {
   FUNC_0("Hangcheck timer elapsed... %s idle\n",
      VAR_0->name);
   FUNC_6(&VAR_0->irq_queue);
   *VAR_1 = 1;
  }
  return 1;
 }
 return 0;
}
