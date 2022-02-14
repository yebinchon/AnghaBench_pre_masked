
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixp2400_msf_parameters {int rx_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ixp2400_msf_parameters *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_0) & 0x0fffffff;
 VAR_2 |= FUNC_2(VAR_1->rx_mode) << 28;
 FUNC_1(VAR_0, VAR_2);
}
