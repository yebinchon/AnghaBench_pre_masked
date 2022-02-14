
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int c_cc; } ;
struct tty {scalar_t__* t_cc; scalar_t__ t_rocol; TYPE_1__ t_rawq; int t_rocount; int t_state; TYPE_1__ t_canq; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct tty*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 (TYPE_1__*,int*) ;
 int * FUNC_3 (TYPE_1__*,int *,int*) ;
 int FUNC_4 (int,struct tty*) ;
 int FUNC_5 (char,struct tty*) ;

__attribute__((used)) static void
FUNC_6(struct tty *VAR_3)
{
 u_char *VAR_4;
 int VAR_5;

 FUNC_1(VAR_3);


 if (VAR_3->t_cc[VAR_1] != VAR_2)
  FUNC_4(VAR_3->t_cc[VAR_1], VAR_3);

 (void)FUNC_5('\n', VAR_3);






 for (VAR_4 = FUNC_2(&VAR_3->t_canq, &VAR_5); VAR_4; VAR_4 = FUNC_3(&VAR_3->t_canq, VAR_4, &VAR_5))
  FUNC_4(VAR_5, VAR_3);
 for (VAR_4 = FUNC_2(&VAR_3->t_rawq, &VAR_5); VAR_4; VAR_4 = FUNC_3(&VAR_3->t_rawq, VAR_4, &VAR_5))
  FUNC_4(VAR_5, VAR_3);
 FUNC_0(VAR_3->t_state, VAR_0);

 VAR_3->t_rocount = VAR_3->t_rawq.c_cc;
 VAR_3->t_rocol = 0;
}
