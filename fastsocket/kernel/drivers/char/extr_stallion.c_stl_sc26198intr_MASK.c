
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlport {int dummy; } ;
struct stlpanel {struct stlport** ports; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct stlport*,unsigned int) ;
 int FUNC_5 (struct stlport*,unsigned int) ;
 int FUNC_6 (struct stlport*) ;

__attribute__((used)) static void FUNC_7(struct stlpanel *VAR_5, unsigned int VAR_6)
{
 struct stlport *VAR_7;
 unsigned int VAR_8;

 FUNC_2(&VAR_4);





 FUNC_1(0, (VAR_6 + 1));

 VAR_8 = FUNC_0(VAR_6 + VAR_3);
 VAR_7 = VAR_5->ports[(VAR_8 & VAR_0) + ((VAR_6 & 0x4) << 1)];

 if (VAR_8 & VAR_1)
  FUNC_5(VAR_7, VAR_8);
 else if (VAR_8 & VAR_2)
  FUNC_6(VAR_7);
 else
  FUNC_4(VAR_7, VAR_8);

 FUNC_3(&VAR_4);
}
