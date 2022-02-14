
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int rq_disk; } ;
struct hd_struct {int dummy; } ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 struct hd_struct* FUNC_2 (int ,int ) ;
 int * VAR_0 ;
 int FUNC_3 (struct hd_struct*,int) ;
 int FUNC_4 (int,struct hd_struct*) ;
 int FUNC_5 (int,struct hd_struct*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct request*) ;

__attribute__((used)) static void FUNC_9(struct request *VAR_1, int VAR_2)
{
 struct hd_struct *VAR_3;
 int VAR_4 = FUNC_8(VAR_1);
 int VAR_5;

 if (!FUNC_0(VAR_1))
  return;

 VAR_5 = FUNC_6();
 VAR_3 = FUNC_2(VAR_1->rq_disk, FUNC_1(VAR_1));

 if (!VAR_2)
  FUNC_5(VAR_5, VAR_3, VAR_0[VAR_4]);
 else {
  FUNC_4(VAR_5, VAR_3);
  FUNC_3(VAR_3, VAR_4);
 }

 FUNC_7();
}
