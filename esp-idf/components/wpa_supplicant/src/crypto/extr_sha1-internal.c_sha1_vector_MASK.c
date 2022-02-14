
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int SHA1_CTX ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,size_t const) ;

int
FUNC_3(size_t VAR_0, const u8 *VAR_1[], const size_t *VAR_2, u8 *VAR_3)
{
 SHA1_CTX VAR_4;
 size_t VAR_5;

 FUNC_1(&VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_2(&VAR_4, VAR_1[VAR_5], VAR_2[VAR_5]);
 FUNC_0(VAR_3, &VAR_4);
 return 0;
}
