
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int ) ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static void FUNC_2(int VAR_7)
{

 if (VAR_7) {
  switch (FUNC_1(VAR_1) ) {
  case 4:
   VAR_6 = VAR_4;
   VAR_5 = VAR_4;
   break;
  case 5:
   VAR_6 = VAR_4;
   VAR_5 = VAR_3;
   break;
  case 6:
   VAR_6 = VAR_3;
   VAR_5 = VAR_4;
   break;
  case 7:
  default:
   VAR_6 = VAR_3;
   VAR_5 = VAR_3;
   break;
  }
 }
 else {
  if (FUNC_1(VAR_2) < 128)
   VAR_6 = VAR_4;
  else
   VAR_6 = VAR_3;
  VAR_5 = VAR_4;
 }

 VAR_0 = VAR_4;
 FUNC_0();
}
