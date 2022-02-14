
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ttm_buffer_object {int seq_valid; scalar_t__ val_seq; int event_queue; int reserved; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (struct ttm_buffer_object*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ttm_buffer_object *VAR_0,
      bool VAR_1, uint32_t VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4;

 while (FUNC_3(FUNC_1(&VAR_0->reserved, 1) != 0)) {
  FUNC_0(VAR_0->seq_valid && VAR_2 == VAR_0->val_seq);

  VAR_4 = FUNC_2(VAR_0, VAR_1);

  if (FUNC_3(VAR_4))
   return VAR_4;
 }

 if ((VAR_0->val_seq - VAR_2 < (1 << 31)) || !VAR_0->seq_valid)
  VAR_3 = 1;





 VAR_0->val_seq = VAR_2;
 VAR_0->seq_valid = 1;
 if (VAR_3)
  FUNC_4(&VAR_0->event_queue);

 return 0;
}
