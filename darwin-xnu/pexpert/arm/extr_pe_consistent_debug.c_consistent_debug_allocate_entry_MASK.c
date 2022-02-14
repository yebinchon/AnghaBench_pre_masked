
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int record_id; } ;
typedef TYPE_2__ dbg_record_header_t ;
struct TYPE_5__ {unsigned int num_records; } ;
struct TYPE_7__ {TYPE_2__* records; TYPE_1__ top_level_header; } ;


 scalar_t__ FUNC_0 (int ,int ,int *) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static dbg_record_header_t* FUNC_1(void) {
 unsigned int VAR_3;

 if (!VAR_0)
  return ((void*)0);
 for (VAR_3 = 0; VAR_3 < VAR_0->top_level_header.num_records; VAR_3++) {
  dbg_record_header_t *VAR_4 = &VAR_0->records[VAR_3];
  if (FUNC_0(VAR_2, VAR_1, &VAR_4->record_id)) {

   return (dbg_record_header_t*)VAR_4;
  }
 }
 return ((void*)0);
}
