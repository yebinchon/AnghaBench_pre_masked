
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct agp_memory {int type; int page_count; int bridge; } ;
typedef int off_t ;
struct TYPE_6__ {TYPE_1__* driver; scalar_t__ gatt_table; int scratch_page; } ;
struct TYPE_5__ {scalar_t__ pg_offset; } ;
struct TYPE_4__ {int (* tlb_flush ) (struct agp_memory*) ;} ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int ,int) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (struct agp_memory*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct agp_memory *VAR_3, off_t VAR_4, int VAR_5)
{
 int VAR_6;

 int VAR_7;

 VAR_7 = FUNC_0(VAR_3->bridge, VAR_5);
 if (VAR_7 != 0 || VAR_5 != VAR_3->type)
  return -VAR_0;

 if (VAR_3->page_count == 0)
  return 0;

 for (VAR_6 = VAR_4; VAR_6 < (VAR_3->page_count + VAR_4); VAR_6++)
  FUNC_2(VAR_1->scratch_page, VAR_1->gatt_table+VAR_2.pg_offset+VAR_6);

 VAR_1->driver->tlb_flush(VAR_3);
 return 0;
}
