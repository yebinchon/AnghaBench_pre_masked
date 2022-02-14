
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1bio {int state; struct bio* master_bio; } ;
struct bio {scalar_t__ bi_sector; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct r1bio*) ;
 int FUNC_3 (struct r1bio*) ;
 int FUNC_4 (char*,char*,unsigned long long,scalar_t__) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct r1bio *VAR_2)
{
 struct bio *VAR_3 = VAR_2->master_bio;


 if (!FUNC_5(VAR_0, &VAR_2->state)) {
  FUNC_4("raid1: sync end %s on sectors %llu-%llu\n",
    (FUNC_0(VAR_3) == VAR_1) ? "write" : "read",
    (unsigned long long) VAR_3->bi_sector,
    (unsigned long long) VAR_3->bi_sector +
    FUNC_1(VAR_3) - 1);

  FUNC_2(VAR_2);
 }
 FUNC_3(VAR_2);
}
