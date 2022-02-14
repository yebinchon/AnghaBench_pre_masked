
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct mtd_info {int (* erase ) (struct mtd_info*,struct erase_info*) ;} ;
struct erase_info {unsigned long priv; scalar_t__ state; int callback; struct mtd_info* mtd; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mtd_info*,struct erase_info*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(struct mtd_info *VAR_8, struct erase_info *VAR_9)
{
 int VAR_10;
 wait_queue_head_t VAR_11;
 FUNC_0(VAR_7, VAR_6);




 FUNC_2(&VAR_11);

 VAR_9->mtd = VAR_8;
 VAR_9->callback = VAR_5;
 VAR_9->priv = (unsigned long) &VAR_11;





 VAR_10 = VAR_8->erase(VAR_8, VAR_9);
 if (!VAR_10) {
  FUNC_5(VAR_4);
  FUNC_1(&VAR_11, &VAR_7);
  if (VAR_9->state != VAR_1
      && VAR_9->state != VAR_2)
   FUNC_4();
  FUNC_3(&VAR_11, &VAR_7);
  FUNC_5(VAR_3);

  VAR_10 = (VAR_9->state == VAR_2) ? -VAR_0 : 0;
 }
 return VAR_10;
}
