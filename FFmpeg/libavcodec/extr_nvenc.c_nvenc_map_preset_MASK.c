
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int flags; int guid; } ;
struct TYPE_7__ {int presetGUID; } ;
struct TYPE_8__ {size_t preset; int flags; TYPE_1__ init_encode_params; } ;
typedef TYPE_2__ NvencContext ;
typedef TYPE_3__ GUIDTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_3__ FUNC_0 (int ,...) ;
 TYPE_3__ FUNC_1 (int ,int ,int ) ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_2(NvencContext *VAR_16)
{
    GUIDTuple VAR_17[] = {
        FUNC_0(VAR_1),
        FUNC_0(VAR_3),
        FUNC_0(VAR_4),
        FUNC_0(VAR_0),
        FUNC_1(VAR_15, VAR_4, VAR_14),
        FUNC_1(VAR_10, VAR_4, VAR_13),
        FUNC_1(VAR_2, VAR_3, VAR_13),
        FUNC_0(VAR_7, VAR_12),
        FUNC_0(VAR_8, VAR_12),
        FUNC_0(VAR_9, VAR_12),
        FUNC_0(VAR_5, VAR_11),
        FUNC_0(VAR_6, VAR_11),
    };

    GUIDTuple *VAR_18 = &VAR_17[VAR_16->preset];

    VAR_16->init_encode_params.presetGUID = VAR_18->guid;
    VAR_16->flags = VAR_18->flags;
}
