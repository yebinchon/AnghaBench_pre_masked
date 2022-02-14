
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct thash_data {scalar_t__ next; int etag; scalar_t__ itir; scalar_t__ page_flags; } ;
struct TYPE_2__ {unsigned long val; int vf; int ve; int size; } ;
struct thash_cb {int num; struct thash_data* hash; TYPE_1__ pta; } ;


 int VAR_0 ;

void FUNC_0(struct thash_cb *VAR_1, u64 VAR_2)
{
 int VAR_3;
 struct thash_data *VAR_4;

 VAR_1->pta.val = (unsigned long)VAR_1->hash;
 VAR_1->pta.vf = 1;
 VAR_1->pta.ve = 1;
 VAR_1->pta.size = VAR_2;
 VAR_4 = VAR_1->hash;
 for (VAR_3 = 0; VAR_3 < VAR_1->num; VAR_3++) {
  VAR_4->page_flags = 0;
  VAR_4->itir = 0;
  VAR_4->etag = VAR_0;
  VAR_4->next = 0;
  VAR_4++;
 }
}
