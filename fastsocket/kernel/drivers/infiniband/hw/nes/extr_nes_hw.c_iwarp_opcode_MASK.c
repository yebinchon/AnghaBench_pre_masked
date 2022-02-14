
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int * q2_vbase; } ;
struct nes_qp {TYPE_1__ hwqp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static u32 FUNC_2(struct nes_qp *VAR_2, u32 VAR_3)
{
 u8 *VAR_4;
 u16 *VAR_5;
 u32 VAR_6 = 0xffffffff;

 if (VAR_3 & VAR_1) {
  VAR_4 = VAR_2->hwqp.q2_vbase + VAR_0;
  VAR_5 = (u16 *)FUNC_1(VAR_4, VAR_3);
  VAR_6 = FUNC_0(VAR_5[1]) & 0xf;
 }

 return VAR_6;
}
