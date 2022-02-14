
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_3__ {int shift; } ;
struct TYPE_4__ {TYPE_1__ benbi; } ;
struct crypt_config {int iv_size; TYPE_2__ iv_gen_private; } ;
typedef int sector_t ;
typedef int __be64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct crypt_config *VAR_0, u8 *VAR_1, sector_t VAR_2)
{
 __be64 VAR_3;

 FUNC_1(VAR_1, 0, VAR_0->iv_size - sizeof(u64));

 VAR_3 = FUNC_0(((u64)VAR_2 << VAR_0->iv_gen_private.benbi.shift) + 1);
 FUNC_2(VAR_3, (__be64 *)(VAR_1 + VAR_0->iv_size - sizeof(u64)));

 return 0;
}
