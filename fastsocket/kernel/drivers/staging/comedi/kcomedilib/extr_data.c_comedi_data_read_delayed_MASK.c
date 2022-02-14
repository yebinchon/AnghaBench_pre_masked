
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int*) ;
 int FUNC_1 (void*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int) ;

int FUNC_3(void *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2, unsigned int VAR_3,
        unsigned int VAR_4, unsigned int *VAR_5,
        unsigned int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_2((VAR_6 + 999) / 1000);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
