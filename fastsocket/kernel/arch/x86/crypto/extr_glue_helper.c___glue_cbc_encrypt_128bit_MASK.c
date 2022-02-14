
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u128 ;
struct TYPE_7__ {scalar_t__ addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; scalar_t__ iv; TYPE_4__ dst; TYPE_2__ src; } ;
struct blkcipher_desc {int tfm; } ;
typedef int (* common_glue_func_t ) (void*,int *,int *) ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_2(const common_glue_func_t VAR_0,
           struct blkcipher_desc *VAR_1,
           struct blkcipher_walk *VAR_2)
{
 void *VAR_3 = FUNC_0(VAR_1->tfm);
 const unsigned int VAR_4 = 128 / 8;
 unsigned int VAR_5 = VAR_2->nbytes;
 u128 *VAR_6 = (u128 *)VAR_2->src.virt.addr;
 u128 *VAR_7 = (u128 *)VAR_2->dst.virt.addr;
 u128 *VAR_8 = (u128 *)VAR_2->iv;

 do {
  FUNC_1(VAR_7, VAR_6, VAR_8);
  VAR_0(VAR_3, (u8 *)VAR_7, (u8 *)VAR_7);
  VAR_8 = VAR_7;

  VAR_6 += 1;
  VAR_7 += 1;
  VAR_5 -= VAR_4;
 } while (VAR_5 >= VAR_4);

 FUNC_1((u128 *)VAR_2->iv, (u128 *)VAR_2->iv, VAR_8);
 return VAR_5;
}
