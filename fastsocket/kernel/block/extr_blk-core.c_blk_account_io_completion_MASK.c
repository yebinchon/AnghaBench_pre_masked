
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int rq_disk; } ;
struct hd_struct {int dummy; } ;


 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 struct hd_struct* FUNC_2 (int ,int ) ;
 int FUNC_3 (int,struct hd_struct*,int ,unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct request*) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_7(struct request *VAR_1, unsigned int VAR_2)
{
 if (FUNC_0(VAR_1)) {
  const int VAR_3 = FUNC_6(VAR_1);
  struct hd_struct *VAR_4;
  int VAR_5;

  VAR_5 = FUNC_4();
  VAR_4 = FUNC_2(VAR_1->rq_disk, FUNC_1(VAR_1));
  FUNC_3(VAR_5, VAR_4, VAR_0[VAR_3], VAR_2 >> 9);
  FUNC_5();
 }
}
