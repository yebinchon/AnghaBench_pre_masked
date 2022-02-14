
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_batch {int wait; int done; int flags; } ;
struct bio {struct bio_batch* bi_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct bio *VAR_2, int VAR_3)
{
 struct bio_batch *VAR_4 = VAR_2->bi_private;

 if (VAR_3 && (VAR_3 != -VAR_1))
  FUNC_2(VAR_0, &VAR_4->flags);
 if (FUNC_0(&VAR_4->done))
  FUNC_3(VAR_4->wait);
 FUNC_1(VAR_2);
}
