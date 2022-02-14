
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_message_queue_desc {int mq_gpa; int interrupt_vector; int interrupt_apicid; int interrupt_pnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,unsigned long,int ,int ,int,int,int ) ;
 int FUNC_3 (void*,unsigned long,int ,int ,int,int,int ) ;
 int FUNC_4 (void*,unsigned long,int ,int ,int ) ;
 int FUNC_5 (void*) ;
 unsigned long FUNC_6 (int ,int ) ;
 unsigned long FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(void *VAR_8, struct gru_message_queue_desc *VAR_9,
   void *VAR_10, int VAR_11)
{
 unsigned long VAR_12, *VAR_13 = VAR_10, VAR_14, VAR_15;
 int VAR_16;

 VAR_12 = VAR_9->mq_gpa + (FUNC_0(VAR_8) << 6);
 if (VAR_11 == 2) {
  FUNC_2(VAR_8, VAR_12, 0, VAR_6, VAR_11, 1, VAR_2);
  if (FUNC_5(VAR_8) != VAR_0)
   return VAR_4;
 }
 FUNC_3(VAR_8, VAR_12, FUNC_1(VAR_10), VAR_6, VAR_11, 1, VAR_2);
 if (FUNC_5(VAR_8) != VAR_0)
  return VAR_4;

 if (!VAR_9->interrupt_vector)
  return VAR_3;
 VAR_14 = FUNC_6(VAR_9->interrupt_pnode, VAR_5);
 VAR_15 = *VAR_13;
 *VAR_13 = FUNC_7(VAR_9->interrupt_apicid, VAR_9->interrupt_vector,
    VAR_7);
 FUNC_4(VAR_8, VAR_14, FUNC_1(VAR_10), VAR_1, VAR_2);
 VAR_16 = FUNC_5(VAR_8);
 *VAR_13 = VAR_15;
 if (VAR_16 != VAR_0)
  return VAR_4;
 return VAR_3;
}
