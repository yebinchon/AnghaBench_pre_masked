
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int (* bi_end_io ) (struct bio*,int) ;int bi_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct bio*,int) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct bio *VAR_2, int VAR_3)
{
 if (VAR_3)
  FUNC_0(VAR_0, &VAR_2->bi_flags);
 else if (!FUNC_2(VAR_0, &VAR_2->bi_flags))
  VAR_3 = -VAR_1;

 if (VAR_2->bi_end_io)
  VAR_2->bi_end_io(VAR_2, VAR_3);
}
