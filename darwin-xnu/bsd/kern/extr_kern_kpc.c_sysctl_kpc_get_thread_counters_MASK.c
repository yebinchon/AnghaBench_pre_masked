
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int*,void*) ;

__attribute__((used)) static int
FUNC_1(uint32_t VAR_1,
                             uint32_t *VAR_2, void *VAR_3)
{
 uint32_t VAR_4 = *VAR_2 / sizeof(uint64_t);
 int VAR_5;

 if( VAR_1 != 0 )
  return VAR_0;

 VAR_5 = FUNC_0(&VAR_4, VAR_3);
 if( !VAR_5 )
  *VAR_2 = VAR_4 * sizeof(uint64_t);

 return VAR_5;
}
