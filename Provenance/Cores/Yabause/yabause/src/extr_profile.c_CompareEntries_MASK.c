
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int l_total_ms; } ;
typedef TYPE_1__ entry_t ;



__attribute__((used)) static int FUNC_0 (const void* VAR_0, const void* VAR_1) {
  entry_t* VAR_2, *VAR_3 ;

  VAR_2 = (entry_t*) VAR_0 ;
  VAR_3 = (entry_t*) VAR_1 ;

  return VAR_3->l_total_ms - VAR_2->l_total_ms ;
}
