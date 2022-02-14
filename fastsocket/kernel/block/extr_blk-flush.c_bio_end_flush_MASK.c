
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {scalar_t__ bi_private; int bi_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_1, int VAR_2)
{
 if (VAR_2)
  FUNC_1(VAR_0, &VAR_1->bi_flags);
 if (VAR_1->bi_private)
  FUNC_2(VAR_1->bi_private);
 FUNC_0(VAR_1);
}
