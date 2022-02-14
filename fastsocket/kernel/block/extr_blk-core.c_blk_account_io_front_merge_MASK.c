
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int __sector; int rq_disk; } ;
struct hd_struct {int * in_flight; } ;
typedef int sector_t ;


 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (int ,int ,int ,struct hd_struct**,struct hd_struct**) ;
 int FUNC_2 (int,struct hd_struct*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 size_t FUNC_5 (struct request*) ;

__attribute__((used)) static void FUNC_6(struct request *VAR_0, sector_t VAR_1)
{
 if (FUNC_0(VAR_0)) {
  struct hd_struct *VAR_2, *VAR_3;
  int VAR_4;

  VAR_4 = FUNC_3();
  if (!FUNC_1(VAR_0->rq_disk, VAR_0->__sector, VAR_1,
      &VAR_2, &VAR_3)) {
   if (VAR_2) {
    FUNC_2(VAR_4, VAR_2);
    VAR_2->in_flight[FUNC_5(VAR_0)]--;
   }
   if (VAR_3) {
    FUNC_2(VAR_4, VAR_3);
    VAR_3->in_flight[FUNC_5(VAR_0)]++;
   }
  }
  FUNC_4();
 }
}
