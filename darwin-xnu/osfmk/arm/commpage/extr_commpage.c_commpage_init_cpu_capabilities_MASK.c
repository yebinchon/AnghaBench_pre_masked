
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int cache_line_size; } ;
typedef TYPE_1__ ml_cpu_info_t ;
struct TYPE_6__ {scalar_t__ neon_fp16; scalar_t__ neon_hpfp; scalar_t__ neon; } ;
typedef TYPE_2__ arm_mvfp_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 () ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5( void )
{
 uint32_t VAR_24;
 int VAR_25;
 ml_cpu_info_t VAR_26;

 VAR_24 = 0;
 FUNC_4(&VAR_26);

 switch (VAR_26.cache_line_size) {
  case 128:
   VAR_24 |= VAR_9;
   break;
  case 64:
   VAR_24 |= VAR_11;
   break;
  case 32:
   VAR_24 |= VAR_10;
   break;
  default:
   break;
 }
 VAR_25 = FUNC_3();

 if (VAR_25 == 1)
  VAR_24 |= VAR_23;

 VAR_24 |= (VAR_25 << VAR_22);

 VAR_24 |= VAR_12;
 VAR_6 = VAR_24;

 *((uint32_t *)(VAR_4+VAR_5)) = VAR_6;
}
