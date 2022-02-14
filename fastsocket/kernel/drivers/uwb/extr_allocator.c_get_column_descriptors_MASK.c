
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rsv_col_info {int dummy; } ;
struct uwb_rsv_alloc_info {unsigned char* bm; struct uwb_rsv_col_info* ci; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int,struct uwb_rsv_col_info*) ;

__attribute__((used)) static void FUNC_1(struct uwb_rsv_alloc_info *VAR_1)
{
 unsigned char *VAR_2 = VAR_1->bm;
 struct uwb_rsv_col_info *VAR_3 = VAR_1->ci;
 int VAR_4;

 for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++) {
  FUNC_0(VAR_2, VAR_4, &VAR_3[VAR_4]);
 }
}
