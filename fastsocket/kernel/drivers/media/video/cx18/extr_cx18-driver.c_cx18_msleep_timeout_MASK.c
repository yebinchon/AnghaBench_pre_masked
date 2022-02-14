
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (unsigned int) ;
 long FUNC_1 (long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(unsigned int VAR_3, int VAR_4)
{
 long int VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 do {
  FUNC_2(VAR_4 ? VAR_0 : VAR_1);
  VAR_5 = FUNC_1(VAR_5);
  VAR_6 = VAR_4 ? FUNC_3(VAR_2) : 0;
 } while (!VAR_6 && VAR_5);
 return VAR_6;
}
