
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_4, unsigned VAR_5)
{
 int VAR_6 = VAR_4 - VAR_1;
 int VAR_7 = FUNC_0(VAR_4);

 if (VAR_7 != VAR_2 || VAR_4 > (VAR_3 + 13))
  return (VAR_5 == 129) ? 0 : -VAR_0;

 switch (VAR_5) {
 case 129:
  FUNC_1(1, VAR_6);
  break;
 case 128:
  FUNC_1(0, VAR_6);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
