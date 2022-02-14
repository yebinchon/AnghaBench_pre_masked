
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int ** VAR_2 ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void
FUNC_6(uint32_t VAR_3, uint64_t VAR_4)
{
 int VAR_5 = FUNC_4();
 uint64_t VAR_6 = 0;

 switch (VAR_3) {
  case 2:
  case 3:
  case 4:
  case 5:
   VAR_6 = FUNC_2(VAR_0);
   VAR_6 &= FUNC_0(VAR_3, 2);
   VAR_6 |= FUNC_1(VAR_4, VAR_3, 2);
   FUNC_3(VAR_0, VAR_6);
   VAR_2[VAR_5][0] = VAR_6;
   break;

  case 6:
  case 7:





   VAR_6 = FUNC_2(VAR_1);
   VAR_6 &= FUNC_0(VAR_3, 6);
   VAR_6 |= FUNC_1(VAR_4, VAR_3, 6);
   FUNC_3(VAR_1, VAR_6);
   VAR_2[VAR_5][1] = VAR_6;
   break;
  default:
   break;
 }

 FUNC_5(VAR_3, VAR_4);
}
