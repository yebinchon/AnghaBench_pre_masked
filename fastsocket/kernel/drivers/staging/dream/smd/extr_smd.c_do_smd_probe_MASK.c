
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ free_offset; } ;
struct smem_shared {TYPE_1__ heap_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void)
{
 struct smem_shared *VAR_3 = (void *) VAR_0;
 if (VAR_3->heap_info.free_offset != VAR_1) {
  VAR_1 = VAR_3->heap_info.free_offset;
  FUNC_0(&VAR_2);
 }
}
