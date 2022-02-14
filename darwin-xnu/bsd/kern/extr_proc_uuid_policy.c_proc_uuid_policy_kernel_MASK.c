
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int uint32_t ;


 int VAR_0 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(uint32_t VAR_1, uuid_t VAR_2, uint32_t VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_1) {
  case 129:
   VAR_4 = FUNC_0(VAR_3);
   break;

  case 130:
   VAR_4 = FUNC_1(VAR_2, VAR_3);
   break;

  case 128:
   VAR_4 = FUNC_2(VAR_2, VAR_3);
   break;

  default:
   VAR_4 = VAR_0;
   break;
 }

 return VAR_4;
}
