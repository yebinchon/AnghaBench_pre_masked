
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t const uint8_t ;
typedef size_t uint32_t ;
typedef int * typefilter_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,size_t const) ;

__attribute__((used)) static void FUNC_2(typefilter_t VAR_0, uint8_t VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0));
 const uint32_t VAR_2 = 256 / 8;
 FUNC_1(&VAR_0[VAR_1 * VAR_2], 0xFF, VAR_2);
}
