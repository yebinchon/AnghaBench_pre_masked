
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int user_addr_t ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int*,int) ;

__attribute__((used)) static int
FUNC_2(user_addr_t VAR_0, user_addr_t *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_2 == 4) {

  unsigned int VAR_4;

  VAR_3 = FUNC_1(VAR_0, &VAR_4, 4);
  *VAR_1 = FUNC_0(VAR_4);
 } else {
  VAR_3 = FUNC_1(VAR_0, VAR_1, 8);
 }
 return (VAR_3);
}
