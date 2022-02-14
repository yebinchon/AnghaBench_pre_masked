
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct request {int dummy; } ;
struct bio {scalar_t__ bi_sector; } ;
struct as_data {int * sort_list; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {struct as_data* elevator_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 struct request* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (struct request*,struct bio*) ;

__attribute__((used)) static int
FUNC_4(struct request_queue *VAR_2, struct request **VAR_3, struct bio *VAR_4)
{
 struct as_data *VAR_5 = VAR_2->elevator->elevator_data;
 sector_t VAR_6 = VAR_4->bi_sector + FUNC_1(VAR_4);
 struct request *VAR_7;




 VAR_7 = FUNC_2(&VAR_5->sort_list[FUNC_0(VAR_4)], VAR_6);
 if (VAR_7 && FUNC_3(VAR_7, VAR_4)) {
  *VAR_3 = VAR_7;
  return VAR_0;
 }

 return VAR_1;
}
