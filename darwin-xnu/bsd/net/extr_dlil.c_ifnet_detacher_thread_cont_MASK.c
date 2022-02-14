
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct ifnet*) ;
 scalar_t__ VAR_3 ;
 struct ifnet* FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 (int *,int *,scalar_t__,char*,int ,int (*) (int)) ;

__attribute__((used)) static int
FUNC_8(int VAR_5)
{
#pragma unused(err)
 struct ifnet *VAR_6;

 for (;;) {
  FUNC_3();
  while (VAR_3 == 0) {
   (void) FUNC_7(&VAR_2, &VAR_1,
       (VAR_0 - 1), "ifnet_detacher_cont", 0,
       FUNC_8);

  }

  FUNC_1(FUNC_0(&VAR_4) != ((void*)0));


  VAR_6 = FUNC_6();
  if (VAR_6 != ((void*)0)) {
   FUNC_4();
   FUNC_5(VAR_6);
   FUNC_2();
  }
 }
}
