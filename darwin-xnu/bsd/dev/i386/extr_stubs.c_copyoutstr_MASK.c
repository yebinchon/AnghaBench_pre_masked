
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void const*,int ,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (void const*) ;

int
FUNC_3(const void *VAR_2, user_addr_t VAR_3, size_t VAR_4, size_t *VAR_5)
{
 size_t VAR_6;
 size_t VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_2(VAR_2) + 1;
 if (VAR_6 > VAR_4)
  VAR_8 = VAR_1;

 VAR_7 = FUNC_1(VAR_4,VAR_6);
 if (FUNC_0(VAR_2, VAR_3, VAR_7))
  VAR_8 = VAR_0;
 *VAR_5 = VAR_7;

 return VAR_8;
}
