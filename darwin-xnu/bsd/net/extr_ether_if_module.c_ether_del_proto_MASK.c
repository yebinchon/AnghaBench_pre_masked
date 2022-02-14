
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct ether_desc_blk_str {int n_max_used; scalar_t__ n_used; TYPE_1__* block_ptr; } ;
typedef scalar_t__ protocol_family_t ;
typedef TYPE_2__* ifnet_t ;
struct TYPE_5__ {scalar_t__ if_family_cookie; } ;
struct TYPE_4__ {scalar_t__ protocol_family; scalar_t__ type; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;

int
FUNC_1(ifnet_t VAR_1, protocol_family_t VAR_2)
{
 struct ether_desc_blk_str *VAR_3 =
     (struct ether_desc_blk_str *)VAR_1->if_family_cookie;
 u_int32_t VAR_4 = 0;
 int VAR_5 = 0;

 if (VAR_3 == ((void*)0))
  return (0);

 for (VAR_4 = VAR_3->n_max_used; VAR_4 > 0; VAR_4--) {
  if (VAR_3->block_ptr[VAR_4 - 1].protocol_family ==
      VAR_2) {
   VAR_5 = 1;
   VAR_3->block_ptr[VAR_4 - 1].type = 0;
   VAR_3->n_used--;
  }
 }

 if (VAR_3->n_used == 0) {
  FUNC_0(VAR_1->if_family_cookie, VAR_0);
  VAR_1->if_family_cookie = 0;
 } else {

  for (; VAR_3->n_max_used > 0 &&
      VAR_3->block_ptr[VAR_3->n_max_used - 1].type == 0;
      VAR_3->n_max_used--)
   ;
 }

 return (0);
}
