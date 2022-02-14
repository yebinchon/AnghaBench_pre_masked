
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef scalar_t__ uint32_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (void*,int ,scalar_t__) ;

int FUNC_3(user_addr_t VAR_4, uint32_t *VAR_5)
{
 int VAR_6 = 0;

 FUNC_0();

 if (VAR_1 == 0) {
  *VAR_5 = 0;
  goto out;
 }

 if (*VAR_5 < VAR_2) {
  VAR_6 = VAR_0;
  goto out;
 }

 if ((VAR_6 = FUNC_2((void *)VAR_1, VAR_4,
     VAR_2)) != 0) {
  *VAR_5 = 0;
  goto out;
 }
 *VAR_5 = VAR_2;


 VAR_3 = 0;

out:

 FUNC_1();

 return (VAR_6);
}
