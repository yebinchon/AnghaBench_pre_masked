
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1bio {int remaining; int state; int read_disk; } ;
struct bio {int bi_flags; struct r1bio* bi_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct r1bio*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,struct r1bio*) ;

__attribute__((used)) static void FUNC_5(struct bio *VAR_2, int VAR_3)
{
 struct r1bio *VAR_4 = VAR_2->bi_private;

 FUNC_4(VAR_4->read_disk, VAR_4);






 if (FUNC_3(VAR_0, &VAR_2->bi_flags))
  FUNC_2(VAR_1, &VAR_4->state);

 if (FUNC_0(&VAR_4->remaining))
  FUNC_1(VAR_4);
}
