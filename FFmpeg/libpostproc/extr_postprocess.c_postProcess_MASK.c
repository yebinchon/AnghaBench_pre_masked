
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int pp_mode ;
typedef int (* pp_fn ) (int const*,int,int *,int,int,int,int const*,int,int,TYPE_1__*) ;
typedef int pp_context ;
typedef int int8_t ;
struct TYPE_11__ {int lumMode; } ;
struct TYPE_10__ {int cpuCaps; TYPE_2__ ppMode; } ;
typedef TYPE_2__ PPMode ;
typedef TYPE_1__ PPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*,int,int *,int,int,int,int const*,int,int,TYPE_1__*) ;
 int FUNC_1 (int const*,int,int *,int,int,int,int const*,int,int,TYPE_1__*) ;
 int FUNC_2 (int const*,int,int *,int,int,int,int const*,int,int,TYPE_1__*) ;
 int FUNC_3 (int const*,int,int *,int,int,int,int const*,int,int,TYPE_1__*) ;
 int FUNC_4 (int const*,int,int *,int,int,int,int const*,int,int,TYPE_1__*) ;
 int FUNC_5 (int const*,int,int *,int,int,int,int const*,int,int,TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_6(const uint8_t VAR_6[], int VAR_7, uint8_t VAR_8[], int VAR_9, int VAR_10, int VAR_11,
        const int8_t VAR_12[], int VAR_13, int VAR_14, pp_mode *VAR_15, pp_context *VAR_16)
{
    pp_fn VAR_17 = FUNC_1;
    PPContext *VAR_18= (PPContext *)VAR_16;
    PPMode *VAR_19= (PPMode *)VAR_15;
    VAR_18->ppMode= *VAR_19;

    if (!(VAR_19->lumMode & VAR_5)) {
    }

    VAR_17(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_18);
}
