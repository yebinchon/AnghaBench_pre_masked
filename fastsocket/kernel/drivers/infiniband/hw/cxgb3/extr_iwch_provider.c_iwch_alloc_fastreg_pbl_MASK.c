
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ib_fast_reg_page_list {int max_page_list_len; int * page_list; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct ib_fast_reg_page_list* FUNC_0 (int ) ;
 int VAR_1 ;
 struct ib_fast_reg_page_list* FUNC_1 (int,int ) ;

__attribute__((used)) static struct ib_fast_reg_page_list *FUNC_2(
     struct ib_device *VAR_2,
     int VAR_3)
{
 struct ib_fast_reg_page_list *VAR_4;

 VAR_4 = FUNC_1(sizeof *VAR_4 + VAR_3 * sizeof(u64),
       VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->page_list = (u64 *)(VAR_4 + 1);
 VAR_4->max_page_list_len = VAR_3;

 return VAR_4;
}
