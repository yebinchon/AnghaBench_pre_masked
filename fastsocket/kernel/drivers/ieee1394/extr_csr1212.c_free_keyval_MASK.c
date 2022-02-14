
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct csr1212_keyval* data; } ;
struct TYPE_6__ {TYPE_2__ leaf; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ id; } ;
struct csr1212_keyval {TYPE_3__ value; TYPE_1__ key; } ;


 int FUNC_0 (struct csr1212_keyval*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct csr1212_keyval *VAR_2)
{
 if ((VAR_2->key.type == VAR_1) &&
     (VAR_2->key.id != VAR_0))
  FUNC_0(VAR_2->value.leaf.data);

 FUNC_0(VAR_2);
}
