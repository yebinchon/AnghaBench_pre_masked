
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;


 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (unsigned char,int ) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_10)
{
 unsigned char VAR_11, VAR_12, VAR_13;

 VAR_12 = FUNC_0(VAR_4);
 VAR_11 = FUNC_0(VAR_6);
 FUNC_1(VAR_11 | VAR_1, VAR_6);
 FUNC_5();
 VAR_13 = FUNC_0(VAR_0);
 if ((VAR_13 & VAR_2) || (VAR_12 & VAR_5 )) {

  VAR_7.expires = VAR_9 + 50;
  FUNC_2(&VAR_7);


  FUNC_1(VAR_13 & ~VAR_2, VAR_0);
  FUNC_1(VAR_11 & ~VAR_1, VAR_6);
  return;
 }
 FUNC_1(VAR_11 & ~VAR_1, VAR_6);

 if (VAR_8)
  FUNC_4(((void*)0));

 FUNC_3(VAR_3);
}
