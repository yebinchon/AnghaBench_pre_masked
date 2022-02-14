
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ mem_ptr; } ;
typedef TYPE_1__ ips_ha_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(ips_ha_t * VAR_1)
{
 uint32_t VAR_2;

 FUNC_0("ips_enable_int_morpheus", 1);

 VAR_2 = FUNC_1(VAR_1->mem_ptr + VAR_0);
 VAR_2 &= ~0x08;
 FUNC_2(VAR_2, VAR_1->mem_ptr + VAR_0);
 FUNC_1(VAR_1->mem_ptr + VAR_0);
}
