
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t reg_size; } ;
typedef TYPE_1__ arena_bin_info_t ;


 int FUNC_0 (void*,TYPE_1__*) ;
 int FUNC_1 (char,int,char*,size_t,size_t) ;
 int VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static void
FUNC_2(void *VAR_2, arena_bin_info_t *VAR_3)
{
 size_t VAR_4;

 FUNC_0(VAR_2, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_3->reg_size; VAR_4++) {
  FUNC_1(((char *)VAR_2)[VAR_4], 0x5a,
      "Missing junk fill for byte %zu/%zu of deallocated region",
      VAR_4, VAR_3->reg_size);
 }
 if (VAR_2 == VAR_1)
  VAR_0 = 1;
}
