
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {scalar_t__ ext_lock; } ;
struct videobuf_buffer {int done; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct videobuf_queue*,struct videobuf_buffer*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

int FUNC_7(struct videobuf_queue *VAR_2, struct videobuf_buffer *VAR_3,
  int VAR_4, int VAR_5)
{
 bool VAR_6;
 int VAR_7 = 0;

 FUNC_0(VAR_3->magic, VAR_1);

 if (VAR_4) {
  if (FUNC_1(VAR_2, VAR_3))
   return 0;
  return -VAR_0;
 }

 VAR_6 = VAR_2->ext_lock && FUNC_2(VAR_2->ext_lock);



 if (VAR_6)
  FUNC_4(VAR_2->ext_lock);
 if (VAR_5)
  VAR_7 = FUNC_6(VAR_3->done, FUNC_1(VAR_2, VAR_3));
 else
  FUNC_5(VAR_3->done, FUNC_1(VAR_2, VAR_3));

 if (VAR_6)
  FUNC_3(VAR_2->ext_lock);

 return VAR_7;
}
