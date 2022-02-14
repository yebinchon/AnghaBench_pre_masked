
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submit_bio_ret {int error; int event; } ;
struct bio {int bi_end_io; struct submit_bio_ret* bi_private; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,struct bio*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

int FUNC_3(int VAR_2, struct bio *VAR_3)
{
 struct submit_bio_ret VAR_4;

 VAR_2 |= VAR_0;
 FUNC_0(&VAR_4.event);
 VAR_3->bi_private = &VAR_4;
 VAR_3->bi_end_io = VAR_1;
 FUNC_1(VAR_2, VAR_3);
 FUNC_2(&VAR_4.event);

 return VAR_4.error;
}
