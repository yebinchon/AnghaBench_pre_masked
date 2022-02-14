
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int cmd_flags; unsigned long start_time; int rq_disk; } ;
struct hd_struct {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 struct hd_struct* FUNC_2 (int ,int ) ;
 int * VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_3 (struct hd_struct*,int const) ;
 int FUNC_4 (int,struct hd_struct*) ;
 int FUNC_5 (int,struct hd_struct*,int ,unsigned long) ;
 int FUNC_6 (int,struct hd_struct*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct request*) ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_10(struct request *VAR_4)
{





 if (FUNC_0(VAR_4) && !(VAR_4->cmd_flags & VAR_0)) {
  unsigned long VAR_5 = VAR_2 - VAR_4->start_time;
  const int VAR_6 = FUNC_9(VAR_4);
  struct hd_struct *VAR_7;
  int VAR_8;

  VAR_8 = FUNC_7();
  VAR_7 = FUNC_2(VAR_4->rq_disk, FUNC_1(VAR_4));

  FUNC_6(VAR_8, VAR_7, VAR_1[VAR_6]);
  FUNC_5(VAR_8, VAR_7, VAR_3[VAR_6], VAR_5);
  FUNC_4(VAR_8, VAR_7);
  FUNC_3(VAR_7, VAR_6);

  FUNC_8();
 }
}
