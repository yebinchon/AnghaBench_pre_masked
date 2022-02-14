
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AdvPortAddr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned short) ;
 int FUNC_1 (int ,int ,unsigned short) ;

__attribute__((used)) static void
FUNC_2(AdvPortAddr VAR_2, unsigned short VAR_3)
{
 unsigned short VAR_4;
 FUNC_0(VAR_2, VAR_0, VAR_4);
 if ((VAR_4 & VAR_3) != 0)
  return;

 VAR_4 |= VAR_3;
 FUNC_1(VAR_2, VAR_0, VAR_4);





 FUNC_0(VAR_2, VAR_1, VAR_4);
 VAR_4 &= ~VAR_3;
 FUNC_1(VAR_2, VAR_1, VAR_4);
}
