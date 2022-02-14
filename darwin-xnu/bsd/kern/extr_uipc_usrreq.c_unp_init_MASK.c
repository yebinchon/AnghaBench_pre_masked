
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 void* FUNC_5 (int ,int ) ;
 int * FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int FUNC_7 (char*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_8 (int,int,int,char*) ;

void
FUNC_9(void)
{
 FUNC_1(VAR_1 >= (VAR_0 / sizeof(int)));
 VAR_11 = FUNC_8(sizeof (struct unpcb),
     (VAR_2 * sizeof (struct unpcb)), 4096, "unpzone");

 if (VAR_11 == 0)
  FUNC_7("unp_init");
 FUNC_0(&VAR_4);
 FUNC_0(&VAR_10);




 VAR_9 = FUNC_4();

 VAR_8 = FUNC_3("unp_list", VAR_9);

 VAR_7 = FUNC_2();

 if ((VAR_6 = FUNC_6(VAR_8,
     VAR_7)) == ((void*)0))
  return;

 if ((VAR_5 = FUNC_5(VAR_8,
  VAR_7)) == ((void*)0))
  return;

 if ((VAR_3 = FUNC_5(VAR_8,
  VAR_7)) == ((void*)0))
  return;
}
