
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 () ;
 int VAR_2 ;

__attribute__((used)) static uint64_t *
FUNC_4(uint32_t *VAR_3)
{
 static uint64_t *VAR_4 = ((void*)0);

 FUNC_0(&VAR_2, VAR_0);

 uint32_t VAR_5 = FUNC_3() + sizeof(uint64_t);
 *VAR_3 = VAR_5;

 if (VAR_4) {
  return VAR_4;
 }





 VAR_4 = FUNC_2(VAR_5, VAR_1);
 FUNC_1(VAR_4 != ((void*)0));
 return VAR_4;
}
