
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scrub_dev {int curr; int in_flight; struct scrub_bio** bios; } ;
struct scrub_bio {int bio; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct scrub_dev *VAR_1)
{
 struct scrub_bio *VAR_2;

 if (VAR_1->curr == -1)
  return;

 VAR_2 = VAR_1->bios[VAR_1->curr];
 VAR_1->curr = -1;
 FUNC_0(&VAR_1->in_flight);

 FUNC_1(VAR_0, VAR_2->bio);
}
