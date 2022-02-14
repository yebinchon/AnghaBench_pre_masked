
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ib_fast_reg_page_list {void* page_list; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_fast_reg_page_list* FUNC_0 (int ) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct ib_fast_reg_page_list*) ;
 void* FUNC_2 (unsigned int,int ) ;

struct ib_fast_reg_page_list *
FUNC_3(struct ib_device *VAR_4, int VAR_5)
{
 unsigned VAR_6 = VAR_5 * sizeof(u64);
 struct ib_fast_reg_page_list *VAR_7;

 if (VAR_6 > VAR_3)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_2(sizeof *VAR_7, VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_7->page_list = FUNC_2(VAR_6, VAR_2);
 if (!VAR_7->page_list)
  goto err_free;

 return VAR_7;

err_free:
 FUNC_1(VAR_7);
 return FUNC_0(-VAR_1);
}
