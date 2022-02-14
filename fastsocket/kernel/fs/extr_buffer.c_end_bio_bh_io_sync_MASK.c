
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int (* b_end_io ) (struct buffer_head*,int ) ;int b_state; } ;
struct bio {int bi_flags; struct buffer_head* bi_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct buffer_head*,int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct bio *VAR_6, int VAR_7)
{
 struct buffer_head *VAR_8 = VAR_6->bi_private;

 if (VAR_7 == -VAR_5) {
  FUNC_1(VAR_2, &VAR_6->bi_flags);
  FUNC_1(VAR_0, &VAR_8->b_state);
 }

 if (FUNC_4 (FUNC_3(VAR_3,&VAR_6->bi_flags)))
  FUNC_1(VAR_1, &VAR_8->b_state);

 VAR_8->b_end_io(VAR_8, FUNC_3(VAR_4, &VAR_6->bi_flags));
 FUNC_0(VAR_6);
}
