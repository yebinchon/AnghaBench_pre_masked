
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ idxalias; } ;
union cvmx_l2c_cfg {TYPE_1__ s; int u64; } ;
typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

uint32_t FUNC_1(uint64_t VAR_5)
{
 uint64_t VAR_6 = VAR_5 >> VAR_2;
 union cvmx_l2c_cfg VAR_7;
 VAR_7.u64 = FUNC_0(VAR_1);

 if (VAR_7.s.idxalias) {
  VAR_6 ^=
      ((VAR_5 & VAR_0) >>
       VAR_4);
 }
 VAR_6 &= VAR_3;
 return VAR_6;
}
