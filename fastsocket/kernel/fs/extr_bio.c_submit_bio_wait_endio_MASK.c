
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submit_bio_ret {int error; int event; } ;
struct bio {struct submit_bio_ret* bi_private; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bio *VAR_0, int VAR_1)
{
 struct submit_bio_ret *VAR_2 = VAR_0->bi_private;

 VAR_2->error = VAR_1;
 FUNC_0(&VAR_2->event);
}
