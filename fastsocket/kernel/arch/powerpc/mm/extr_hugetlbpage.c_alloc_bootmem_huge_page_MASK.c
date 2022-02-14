
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct huge_bootmem_page {struct hstate* hstate; int list; } ;
struct hstate {int dummy; } ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 size_t VAR_2 ;
 struct huge_bootmem_page* FUNC_1 (scalar_t__) ;

int FUNC_2(struct hstate *VAR_3)
{
 struct huge_bootmem_page *VAR_4;
 if (VAR_2 == 0)
  return 0;
 VAR_4 = FUNC_1(VAR_0[--VAR_2]);
 VAR_0[VAR_2] = 0;
 FUNC_0(&VAR_4->list, &VAR_1);
 VAR_4->hstate = VAR_3;
 return 1;
}
