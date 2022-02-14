
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int type; int id; } ;
struct csr1212_keyval {scalar_t__ valid; scalar_t__ offset; int * prev; int * next; int * associate; TYPE_1__ key; int refcnt; } ;


 struct csr1212_keyval* FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int* VAR_0 ;

__attribute__((used)) static struct csr1212_keyval *FUNC_2(u8 VAR_1, u8 VAR_2)
{
 struct csr1212_keyval *VAR_3;

 if (VAR_2 < 0x30 && ((VAR_0[VAR_2] & (1 << VAR_1)) == 0))
  return ((void*)0);

 VAR_3 = FUNC_0(sizeof(*VAR_3));
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(&VAR_3->refcnt, 1);
 VAR_3->key.type = VAR_1;
 VAR_3->key.id = VAR_2;
 VAR_3->associate = ((void*)0);
 VAR_3->next = ((void*)0);
 VAR_3->prev = ((void*)0);
 VAR_3->offset = 0;
 VAR_3->valid = 0;
 return VAR_3;
}
