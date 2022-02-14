
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ blockType_t ;
struct TYPE_3__ {scalar_t__ blockType; size_t origSize; } ;
typedef TYPE_1__ blockProperties_t ;
typedef size_t U32 ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static size_t FUNC_1(const void* VAR_4, size_t VAR_5, blockProperties_t* VAR_6)
{
    const BYTE* const VAR_7 = (const BYTE* const)VAR_4;
    U32 VAR_8;

    if (VAR_5 < VAR_0) return FUNC_0(VAR_3);

    VAR_6->blockType = (blockType_t)((*VAR_7) >> 6);
    VAR_8 = VAR_7[2] + (VAR_7[1]<<8) + ((VAR_7[0] & 7)<<16);
    VAR_6->origSize = (VAR_6->blockType == VAR_2) ? VAR_8 : 0;

    if (VAR_6->blockType == VAR_1) return 0;
    if (VAR_6->blockType == VAR_2) return 1;
    return VAR_8;
}
