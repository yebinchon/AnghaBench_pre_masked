
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
typedef int fs16 ;
typedef int befs_btree_nodehead ;
struct TYPE_4__ {int all_key_length; } ;
struct TYPE_5__ {scalar_t__ od_node; TYPE_1__ head; } ;
typedef TYPE_2__ befs_btree_node ;



__attribute__((used)) static fs16 *
FUNC_0(befs_btree_node * VAR_0)
{
 const int VAR_1 = 8;
 unsigned long int VAR_2 =
     (sizeof (befs_btree_nodehead) + VAR_0->head.all_key_length);
 ulong VAR_3 = VAR_2 % VAR_1;

 if (VAR_3)
  VAR_2 += VAR_1 - VAR_3;

 return (fs16 *) ((void *) VAR_0->od_node + VAR_2);
}
