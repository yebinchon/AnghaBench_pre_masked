
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {scalar_t__* t_cc; int t_state; int t_outq; int t_iflag; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct tty*) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (struct tty*) ;

__attribute__((used)) static void
FUNC_6(struct tty *VAR_4)
{
 FUNC_3(VAR_4);

 FUNC_0(VAR_4->t_state, VAR_1);
 if (FUNC_1(VAR_4->t_iflag, VAR_0) && VAR_4->t_cc[VAR_2] != VAR_3 &&
     FUNC_4(VAR_4->t_cc[VAR_2], &VAR_4->t_outq) != 0)
  FUNC_2(VAR_4->t_state, VAR_1);
 FUNC_5(VAR_4);
}
