
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int off; int type; } ;
struct TYPE_6__ {int set; int bitmap; } ;
struct TYPE_8__ {TYPE_2__ terminal; TYPE_1__ branch; } ;
typedef TYPE_3__ ccv_cache_index_t ;
typedef int (* ccv_cache_index_free_f ) (void*) ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static void FUNC_5(ccv_cache_index_t* VAR_0, ccv_cache_index_free_f VAR_1[])
{
 int VAR_2 = VAR_0->terminal.off & 0x1;
 if (!VAR_2)
 {
  int VAR_3;
  uint64_t VAR_4 = FUNC_3(VAR_0->branch.bitmap);
  ccv_cache_index_t* VAR_5 = (ccv_cache_index_t*)(VAR_0->branch.set - (VAR_0->branch.set & 0x3));
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
   FUNC_5(VAR_5 + VAR_3, VAR_1);
  FUNC_2(VAR_5);
 } else {
  FUNC_1(FUNC_0(VAR_0->terminal.type) >= 0 && FUNC_0(VAR_0->terminal.type) < 16);
  VAR_1[FUNC_0(VAR_0->terminal.type)]((void*)(VAR_0->terminal.off - (VAR_0->terminal.off & 0x3)));
 }
}
