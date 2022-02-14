
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int * dentries_tail; int * dentries_head; scalar_t__ len; } ;
struct TYPE_3__ {TYPE_2__ directory; } ;
struct csr1212_keyval {int valid; TYPE_1__ value; scalar_t__ offset; } ;


 int VAR_0 ;
 struct csr1212_keyval* FUNC_0 (int ,int ) ;

struct csr1212_keyval *FUNC_1(u8 VAR_1)
{
 struct csr1212_keyval *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->value.directory.len = 0;
 VAR_2->offset = 0;
 VAR_2->value.directory.dentries_head = ((void*)0);
 VAR_2->value.directory.dentries_tail = ((void*)0);
 VAR_2->valid = 1;
 return VAR_2;
}
