
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_3__ {int tfm; } ;
struct TYPE_4__ {TYPE_1__ essiv; } ;
struct crypt_config {TYPE_2__ iv_gen_private; int iv_size; } ;
typedef int sector_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct crypt_config *VAR_0, u8 *VAR_1, sector_t VAR_2)
{
 FUNC_2(VAR_1, 0, VAR_0->iv_size);
 *(u64 *)VAR_1 = FUNC_0(VAR_2);
 FUNC_1(VAR_0->iv_gen_private.essiv.tfm, VAR_1, VAR_1);
 return 0;
}
