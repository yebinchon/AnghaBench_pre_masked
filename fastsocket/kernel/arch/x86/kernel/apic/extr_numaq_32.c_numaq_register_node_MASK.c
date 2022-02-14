
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_cfg_data {struct eachquadmem* eq; } ;
struct eachquadmem {scalar_t__ hi_shrd_mem_size; scalar_t__ hi_shrd_mem_start; scalar_t__ priv_mem_size; } ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,void*,void*) ;
 int FUNC_2 (int,void*,void*) ;
 void** VAR_0 ;
 int FUNC_3 (int,void*,void*) ;
 int * VAR_1 ;
 int FUNC_4 (int) ;
 void** VAR_2 ;

__attribute__((used)) static inline void FUNC_5(int VAR_3, struct sys_cfg_data *VAR_4)
{
 struct eachquadmem *VAR_5 = VAR_4->eq + VAR_3;

 FUNC_4(VAR_3);


 VAR_2[VAR_3] =
   FUNC_0(VAR_5->hi_shrd_mem_start - VAR_5->priv_mem_size);

 VAR_0[VAR_3] =
   FUNC_0(VAR_5->hi_shrd_mem_start + VAR_5->hi_shrd_mem_size);

 FUNC_1(VAR_3, VAR_2[VAR_3],
      VAR_0[VAR_3]);

 FUNC_2(VAR_3, VAR_2[VAR_3], VAR_0[VAR_3]);

 VAR_1[VAR_3] = FUNC_3(VAR_3,
     VAR_2[VAR_3],
     VAR_0[VAR_3]);
}
