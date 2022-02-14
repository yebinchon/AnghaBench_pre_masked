
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int rq_disk; } ;
struct hd_struct {int dummy; } ;


 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 struct hd_struct* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct hd_struct*,int ) ;
 int FUNC_4 (int,struct hd_struct*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct request*) ;

__attribute__((used)) static void FUNC_8(struct request *VAR_0)
{
 if (FUNC_0(VAR_0)) {
  struct hd_struct *VAR_1;
  int VAR_2;

  VAR_2 = FUNC_5();
  VAR_1 = FUNC_2(VAR_0->rq_disk, FUNC_1(VAR_0));

  FUNC_4(VAR_2, VAR_1);
  FUNC_3(VAR_1, FUNC_7(VAR_0));

  FUNC_6();
 }
}
