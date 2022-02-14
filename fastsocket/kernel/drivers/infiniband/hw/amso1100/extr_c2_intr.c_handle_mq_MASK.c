
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct c2_dev {int req_vq_wo; int ** qptr_array; } ;


 int FUNC_0 (struct c2_dev*,size_t) ;
 int FUNC_1 (struct c2_dev*,size_t) ;
 int FUNC_2 (struct c2_dev*,int) ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct c2_dev *VAR_0, u32 VAR_1)
{
 if (VAR_0->qptr_array[VAR_1] == ((void*)0)) {
  FUNC_3("handle_mq: stray activity for mq_index=%d\n",
    VAR_1);
  return;
 }

 switch (VAR_1) {
 case (0):
  FUNC_4(&VAR_0->req_vq_wo);
  break;
 case (1):
  FUNC_2(VAR_0, VAR_1);
  break;
 case (2):






  FUNC_2(VAR_0, 1);

  FUNC_0(VAR_0, VAR_1);
  break;
 default:
  FUNC_1(VAR_0, VAR_1);
  break;
 }

 return;
}
