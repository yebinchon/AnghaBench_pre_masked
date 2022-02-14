
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct agp_memory {scalar_t__ page_count; scalar_t__ num_sg; int * sg_list; } ;
typedef int off_t ;
struct TYPE_2__ {scalar_t__ needs_dmar; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct agp_memory *VAR_1,
      off_t VAR_2, int VAR_3)
{
 if (VAR_1->page_count == 0)
  return 0;

 FUNC_0(VAR_2, VAR_1->page_count);

 if (VAR_0.needs_dmar) {
  FUNC_1(VAR_1->sg_list, VAR_1->num_sg);
  VAR_1->sg_list = ((void*)0);
  VAR_1->num_sg = 0;
 }

 return 0;
}
