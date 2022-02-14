
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct spu {int aff_list; int has_mem_affinity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 size_t* VAR_2 ;
 int * VAR_3 ;
 struct spu* FUNC_1 (int,size_t) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_4, VAR_5;
 struct spu *VAR_6, *VAR_7;
 u32 VAR_8;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_6 = ((void*)0);
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   VAR_8 = VAR_2[VAR_5];
   VAR_7 = FUNC_1(VAR_4, VAR_8);
   if (!VAR_7)
    continue;
   VAR_7->has_mem_affinity = VAR_3[VAR_8];
   if (VAR_6)
    FUNC_0(&VAR_7->aff_list,
      &VAR_6->aff_list);
   VAR_6 = VAR_7;
  }
 }
}
