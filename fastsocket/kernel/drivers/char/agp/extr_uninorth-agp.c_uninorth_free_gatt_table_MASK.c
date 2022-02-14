
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct agp_bridge_data {scalar_t__ gatt_table_real; int gatt_table; void* current_size; } ;
struct TYPE_2__ {int page_order; } ;


 TYPE_1__* FUNC_0 (void*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int FUNC_2 (unsigned long,int) ;
 struct page* FUNC_3 (char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct agp_bridge_data *VAR_1)
{
 int VAR_2;
 char *VAR_3, *VAR_4;
 void *VAR_5;
 struct page *VAR_6;

 VAR_5 = VAR_1->current_size;
 VAR_2 = FUNC_0(VAR_5)->page_order;






 FUNC_4(VAR_1->gatt_table);
 VAR_3 = (char *) VAR_1->gatt_table_real;
 VAR_4 = VAR_3 + ((VAR_0 * (1 << VAR_2)) - 1);

 for (VAR_6 = FUNC_3(VAR_3); VAR_6 <= FUNC_3(VAR_4); VAR_6++)
  FUNC_1(VAR_6);

 FUNC_2((unsigned long) VAR_1->gatt_table_real, VAR_2);

 return 0;
}
