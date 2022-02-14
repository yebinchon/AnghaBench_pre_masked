
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serverworks_page_map {int dummy; } ;
struct TYPE_2__ {int num_tables; struct serverworks_page_map** gatt_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (struct serverworks_page_map*) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_3(int VAR_3)
{
 struct serverworks_page_map **VAR_4;
 struct serverworks_page_map *VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 VAR_4 = FUNC_0((VAR_3 + 1) * sizeof(struct serverworks_page_map *),
    VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_5 = FUNC_0(sizeof(struct serverworks_page_map), VAR_1);
  if (VAR_5 == ((void*)0)) {
   VAR_6 = -VAR_0;
   break;
  }
  VAR_4[VAR_7] = VAR_5;
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6 != 0) break;
 }
 VAR_2.num_tables = VAR_3;
 VAR_2.gatt_pages = VAR_4;

 if (VAR_6 != 0) FUNC_2();

 return VAR_6;
}
