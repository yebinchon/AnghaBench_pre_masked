
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
typedef int le128 ;
typedef int (* common_glue_ctr_func_t ) (void*,int *,int *,int *) ;
typedef int be128 ;


 int FUNC_0 (int *,int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,unsigned int) ;

__attribute__((used)) static void FUNC_4(const common_glue_ctr_func_t VAR_0,
     struct blkcipher_desc *VAR_1,
     struct blkcipher_walk *VAR_2)
{
 void *VAR_3 = FUNC_1(VAR_1->tfm);
 u8 *VAR_4 = (u8 *)VAR_2->src.virt.addr;
 u8 *VAR_5 = (u8 *)VAR_2->dst.virt.addr;
 unsigned int VAR_6 = VAR_2->nbytes;
 le128 VAR_7;
 u128 VAR_8;

 FUNC_0(&VAR_7, (be128 *)VAR_2->iv);

 FUNC_3(&VAR_8, VAR_4, VAR_6);
 VAR_0(VAR_3, &VAR_8, &VAR_8, &VAR_7);
 FUNC_3(VAR_5, &VAR_8, VAR_6);

 FUNC_2((be128 *)VAR_2->iv, &VAR_7);
}
