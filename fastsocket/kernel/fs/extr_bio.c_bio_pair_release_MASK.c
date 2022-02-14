
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bi_private; } ;
struct TYPE_3__ {struct bio* bi_private; } ;
struct bio_pair {TYPE_2__ bio2; int error; TYPE_1__ bio1; int cnt; } ;
struct bio {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (struct bio_pair*,int ) ;

void FUNC_3(struct bio_pair *VAR_0)
{
 if (FUNC_0(&VAR_0->cnt)) {
  struct bio *VAR_1 = VAR_0->bio1.bi_private;

  FUNC_1(VAR_1, VAR_0->error);
  FUNC_2(VAR_0, VAR_0->bio2.bi_private);
 }
}
