
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ttm_buffer_object {int seq_valid; scalar_t__ val_seq; int event_queue; int reserved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (struct ttm_buffer_object*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ttm_buffer_object *VAR_3,
     bool VAR_4,
     bool VAR_5, bool VAR_6, uint32_t VAR_7)
{
 int VAR_8;

 while (FUNC_2(FUNC_0(&VAR_3->reserved, 1) != 0)) {



  if (VAR_6 && VAR_3->seq_valid) {



   if (FUNC_2(VAR_7 == VAR_3->val_seq))
    return -VAR_2;




   if (FUNC_2(VAR_7 - VAR_3->val_seq < (1 << 31)))
    return -VAR_0;
  }

  if (VAR_5)
   return -VAR_1;

  VAR_8 = FUNC_1(VAR_3, VAR_4);

  if (FUNC_2(VAR_8))
   return VAR_8;
 }

 if (VAR_6) {
  bool VAR_9 = 0;




  if (FUNC_2((VAR_3->val_seq - VAR_7 < (1 << 31))
        || !VAR_3->seq_valid))
   VAR_9 = 1;
  VAR_3->val_seq = VAR_7;
  VAR_3->seq_valid = 1;
  if (VAR_9)
   FUNC_3(&VAR_3->event_queue);
 } else {
  VAR_3->seq_valid = 0;
 }

 return 0;
}
