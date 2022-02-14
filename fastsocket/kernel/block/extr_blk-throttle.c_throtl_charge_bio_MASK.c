
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int blkg; int * io_disp; int * bytes_disp; } ;
struct bio {int bi_rw; scalar_t__ bi_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int *,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_2(struct throtl_grp *VAR_1, struct bio *VAR_2)
{
 bool VAR_3 = FUNC_0(VAR_2);
 bool VAR_4 = VAR_2->bi_rw & VAR_0;


 VAR_1->bytes_disp[VAR_3] += VAR_2->bi_size;
 VAR_1->io_disp[VAR_3]++;

 FUNC_1(&VAR_1->blkg, VAR_2->bi_size, VAR_3, VAR_4);
}
