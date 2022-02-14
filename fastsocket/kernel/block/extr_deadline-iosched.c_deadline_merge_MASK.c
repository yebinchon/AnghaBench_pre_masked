
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct request {int dummy; } ;
struct deadline_data {int * sort_list; scalar_t__ front_merges; } ;
struct bio {scalar_t__ bi_sector; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {struct deadline_data* elevator_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 struct request* FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (struct request*,struct bio*) ;

__attribute__((used)) static int
FUNC_6(struct request_queue *VAR_2, struct request **VAR_3, struct bio *VAR_4)
{
 struct deadline_data *VAR_5 = VAR_2->elevator->elevator_data;
 struct request *VAR_6;
 int VAR_7;




 if (VAR_5->front_merges) {
  sector_t VAR_8 = VAR_4->bi_sector + FUNC_2(VAR_4);

  VAR_6 = FUNC_4(&VAR_5->sort_list[FUNC_1(VAR_4)], VAR_8);
  if (VAR_6) {
   FUNC_0(VAR_8 != FUNC_3(VAR_6));

   if (FUNC_5(VAR_6, VAR_4)) {
    VAR_7 = VAR_0;
    goto out;
   }
  }
 }

 return VAR_1;
out:
 *VAR_3 = VAR_6;
 return VAR_7;
}
