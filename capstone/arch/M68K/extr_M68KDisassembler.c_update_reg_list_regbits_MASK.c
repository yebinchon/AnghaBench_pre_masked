
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int m68k_info ;
struct TYPE_3__ {int register_bits; } ;
typedef TYPE_1__ cs_m68k_op ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int,int) ;

__attribute__((used)) static void FUNC_1(m68k_info *VAR_3, cs_m68k_op *VAR_4, int VAR_5)
{
 uint32_t VAR_6 = VAR_4->register_bits;
 FUNC_0(VAR_3, VAR_1, VAR_6 & 0xff, VAR_5);
 FUNC_0(VAR_3, VAR_0, (VAR_6 >> 8) & 0xff, VAR_5);
 FUNC_0(VAR_3, VAR_2, (VAR_6 >> 16) & 0xff, VAR_5);
}
