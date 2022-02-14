
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int*,int*) ;

__attribute__((used)) static int
FUNC_1(uint32_t VAR_2,
                      uint32_t *VAR_3, void *VAR_4)
{
 uint64_t *VAR_5 = (uint64_t*)VAR_4;
 int VAR_6;
 uint32_t VAR_7;

 VAR_7 = FUNC_0(VAR_2 & VAR_1,
                              VAR_2,
                              &VAR_6, &VAR_5[1]);
 if (!VAR_7)
  return VAR_0;

 VAR_5[0] = VAR_6;

 *VAR_3 = (VAR_7+1) * sizeof(uint64_t);

 return 0;
}
