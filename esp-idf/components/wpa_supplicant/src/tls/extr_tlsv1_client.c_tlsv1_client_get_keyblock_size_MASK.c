
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hash_size; int key_material_len; int iv_size; } ;
struct tlsv1_client {scalar_t__ state; TYPE_1__ rl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(struct tlsv1_client *VAR_2)
{
 if (VAR_2->state == VAR_0 || VAR_2->state == VAR_1)
  return -1;

 return 2 * (VAR_2->rl.hash_size + VAR_2->rl.key_material_len +
      VAR_2->rl.iv_size);
}
