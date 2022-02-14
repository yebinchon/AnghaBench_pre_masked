
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ windowLog; } ;
typedef TYPE_1__ ZSTD_parameters ;
typedef scalar_t__ U32 ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static size_t FUNC_3(ZSTD_parameters* VAR_6, const void* VAR_7, size_t VAR_8)
{
    U32 VAR_9;
    if (VAR_8 < VAR_3) return VAR_2;
    VAR_9 = FUNC_1(VAR_7);
    if (VAR_9 != VAR_0) return FUNC_0(VAR_5);
    FUNC_2(VAR_6, 0, sizeof(*VAR_6));
    VAR_6->windowLog = (((const BYTE*)VAR_7)[4] & 15) + VAR_1;
    if ((((const BYTE*)VAR_7)[4] >> 4) != 0) return FUNC_0(VAR_4);
    return 0;
}
