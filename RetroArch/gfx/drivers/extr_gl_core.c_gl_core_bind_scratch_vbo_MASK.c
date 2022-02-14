
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t scratch_vbo_index; int * scratch_vbos; } ;
typedef TYPE_1__ gl_core_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,size_t,void const*,int ) ;
 int FUNC_2 (int,int *) ;

void FUNC_3(gl_core_t *VAR_3, const void *VAR_4, size_t VAR_5)
{
   if (!VAR_3->scratch_vbos[VAR_3->scratch_vbo_index])
      FUNC_2(1, &VAR_3->scratch_vbos[VAR_3->scratch_vbo_index]);
   FUNC_0(VAR_0, VAR_3->scratch_vbos[VAR_3->scratch_vbo_index]);
   FUNC_1(VAR_0, VAR_5, VAR_4, VAR_2);
   VAR_3->scratch_vbo_index++;
   if (VAR_3->scratch_vbo_index >= VAR_1)
      VAR_3->scratch_vbo_index = 0;
}
