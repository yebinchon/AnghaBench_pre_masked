
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;


 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(int VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 switch (VAR_3) {
 case 128:
  VAR_4 = VAR_1;
  break;
 case 129:
  VAR_4 = VAR_0;
  break;
 default:
  FUNC_4("sendintr");
 }

 VAR_4 += FUNC_3(VAR_2);






 FUNC_1(FUNC_0(FUNC_2(VAR_2)), VAR_4);
}
