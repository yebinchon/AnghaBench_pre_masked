
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
struct uthread {scalar_t__ uu_sigmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ) ;

void
FUNC_9(void)
{
 thread_t VAR_7;
 struct uthread *VAR_8;





 VAR_7 = FUNC_1(VAR_3, VAR_0, VAR_6, VAR_1, VAR_4);


 VAR_5 = FUNC_5(1);
 FUNC_6(VAR_5, 0);
 FUNC_7(VAR_5, 0);

 VAR_8 = (struct uthread *)FUNC_2(VAR_7);
 VAR_8->uu_sigmask = 0;
 FUNC_0(VAR_7);
 FUNC_8(FUNC_3(VAR_7));
}
