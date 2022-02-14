
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbuf_class_t ;
typedef int boolean_t ;


 int VAR_0 ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static boolean_t
FUNC_3(mbuf_class_t VAR_1, int VAR_2)
{
 switch (VAR_1) {
 case 131:
  if (VAR_2 & VAR_0)
   return (!FUNC_2(FUNC_1(128)) ||
       !FUNC_2(FUNC_1(129)));
  break;

 case 132:
  if (VAR_2 & VAR_0)
   return (!FUNC_2(FUNC_1(128)));
  break;

 case 133:
  if (VAR_2 & VAR_0)
   return (!FUNC_2(FUNC_1(129)));
  break;

 case 134:
  if (VAR_2 & VAR_0)
   return (!FUNC_2(FUNC_1(130)));
  break;

 case 128:
 case 129:
 case 130:
  break;

 default:
  FUNC_0(0);

 }

 return (!FUNC_2(FUNC_1(VAR_1)));
}
