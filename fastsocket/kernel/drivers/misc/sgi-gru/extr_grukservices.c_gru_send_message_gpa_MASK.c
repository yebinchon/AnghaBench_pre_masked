
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message_header {int lines; int present2; int present; } ;
struct gru_message_queue_desc {int mq_gpa; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct message_header*) ;
 int FUNC_4 (void*,void*) ;
 scalar_t__ FUNC_5 (unsigned int,void**,void**) ;
 int FUNC_6 (struct message_header*) ;
 int FUNC_7 (void*,int ,int ,int,int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*,void*,unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct message_header*,int ) ;
 int FUNC_11 (void*,struct gru_message_queue_desc*,void*,int) ;

int FUNC_12(struct gru_message_queue_desc *VAR_9, void *VAR_10,
    unsigned int VAR_11)
{
 struct message_header *VAR_12;
 void *VAR_13;
 void *VAR_14;
 int VAR_15, VAR_16, VAR_17;

 FUNC_2(VAR_7);
 FUNC_0(VAR_11 < sizeof(int) || VAR_11 > 2 * VAR_1);

 VAR_16 = FUNC_1(VAR_11, VAR_1);
 if (FUNC_5(VAR_11, &VAR_13, &VAR_14))
  return VAR_3;
 FUNC_9(VAR_14, VAR_10, VAR_11);
 VAR_12 = VAR_14;
 VAR_12->present = VAR_6;
 VAR_12->lines = VAR_16;
 if (VAR_16 == 2) {
  VAR_12->present2 = FUNC_3(VAR_12);
  FUNC_10(VAR_12, VAR_6);
 }

 do {
  VAR_17 = VAR_4;
  FUNC_7(VAR_13, VAR_9->mq_gpa, FUNC_6(VAR_12), VAR_16, VAR_2);
  VAR_15 = FUNC_8(VAR_13);
  if (VAR_15 != VAR_0)
   VAR_17 = FUNC_11(VAR_13, VAR_9, VAR_14, VAR_16);
 } while (VAR_17 == VAR_5);
 FUNC_4(VAR_13, VAR_14);

 if (VAR_17)
  FUNC_2(VAR_8);
 return VAR_17;
}
