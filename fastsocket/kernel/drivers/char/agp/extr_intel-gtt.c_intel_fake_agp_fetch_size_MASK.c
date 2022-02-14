
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* current_size; } ;
struct TYPE_6__ {unsigned int size; } ;
struct TYPE_5__ {unsigned int gtt_mappable_entries; } ;


 int FUNC_0 (TYPE_2__*) ;
 unsigned int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5;
 int VAR_6;

 VAR_5 = (VAR_3.gtt_mappable_entries << VAR_0) / FUNC_1(1);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (VAR_5 == VAR_2[VAR_6].size) {
   VAR_1->current_size =
    (void *) (VAR_2 + VAR_6);
   return VAR_5;
  }
 }

 return 0;
}
