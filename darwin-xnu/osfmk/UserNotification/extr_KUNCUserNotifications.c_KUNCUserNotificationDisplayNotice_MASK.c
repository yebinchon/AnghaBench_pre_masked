
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kern_return_t ;
typedef int UNDServerRef ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,unsigned int,char*,char*,char*,char*,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

kern_return_t
FUNC_4(
 int VAR_1,
 unsigned VAR_2,
 char *VAR_3,
 char *VAR_4,
 char *VAR_5,
 char *VAR_6,
 char *VAR_7,
 char *VAR_8)
{
 UNDServerRef VAR_9;

 VAR_9 = FUNC_3();
 if (FUNC_0(VAR_9)) {
  kern_return_t VAR_10;
  VAR_10 = FUNC_1(VAR_9,
     VAR_1,
     VAR_2,
     VAR_3,
     VAR_4,
     VAR_5,
     VAR_6,
     VAR_7,
     VAR_8);
  FUNC_2(VAR_9);
  return VAR_10;
 }
 return VAR_0;
}
