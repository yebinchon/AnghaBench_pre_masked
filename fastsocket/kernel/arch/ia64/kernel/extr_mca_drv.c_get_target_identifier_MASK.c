
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_5__ {scalar_t__ target_identifier; } ;
struct TYPE_6__ {scalar_t__ target_identifier; TYPE_1__ valid; int check_info; } ;
typedef TYPE_2__ sal_log_mod_error_info_t ;
typedef int peidx_table_t ;
struct TYPE_7__ {int level; } ;
typedef TYPE_3__ pal_cache_check_info_t ;


 TYPE_2__* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static u64
FUNC_3(peidx_table_t *VAR_0)
{
 u64 VAR_1 = 0;
 sal_log_mod_error_info_t *VAR_2;
 pal_cache_check_info_t *VAR_3;
 int VAR_4, VAR_5 = 9;






 for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_0); VAR_4++) {
  VAR_2 = (sal_log_mod_error_info_t *)FUNC_1(VAR_0, VAR_4);
  if (VAR_2->valid.target_identifier && VAR_2->target_identifier) {
   VAR_3 = (pal_cache_check_info_t *)&(VAR_2->check_info);
   if (!VAR_1 || (VAR_3->level < VAR_5)) {
    VAR_1 = VAR_2->target_identifier;
    VAR_5 = VAR_3->level;
    continue;
   }
  }
 }
 if (VAR_1)
  return VAR_1;




 VAR_2 = FUNC_0(VAR_0, 0);
 if (VAR_2 && VAR_2->valid.target_identifier)
  return VAR_2->target_identifier;

 return 0;
}
