
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kern_return_t ;
typedef int UNDServerRef ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

kern_return_t FUNC_4(char VAR_1[1024], int VAR_2, int VAR_3)
{

 UNDServerRef VAR_4;

 VAR_4 = FUNC_3();
 if (FUNC_0(VAR_4)) {
  kern_return_t VAR_5;
  VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3);
  FUNC_2(VAR_4);
  return VAR_5;
 }
 return VAR_0;
}
