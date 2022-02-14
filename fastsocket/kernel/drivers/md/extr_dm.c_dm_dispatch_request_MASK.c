
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int q; int start_time; int cmd_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct request*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct request*,int) ;
 int VAR_1 ;

void FUNC_3(struct request *VAR_2)
{
 int VAR_3;

 if (FUNC_1(VAR_2->q))
  VAR_2->cmd_flags |= VAR_0;

 VAR_2->start_time = VAR_1;
 VAR_3 = FUNC_0(VAR_2->q, VAR_2);
 if (VAR_3)
  FUNC_2(VAR_2, VAR_3);
}
