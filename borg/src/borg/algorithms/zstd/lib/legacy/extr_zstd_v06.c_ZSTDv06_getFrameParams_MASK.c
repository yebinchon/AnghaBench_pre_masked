
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frameContentSize; scalar_t__ windowLog; } ;
typedef TYPE_1__ ZSTDv06_frameParams ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (void const*) ;
 int FUNC_3 (int const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_4 (void const*,size_t) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int VAR_4 ;

size_t FUNC_6(ZSTDv06_frameParams* VAR_5, const void* VAR_6, size_t VAR_7)
{
    const BYTE* VAR_8 = (const BYTE*)VAR_6;

    if (VAR_7 < VAR_2) return VAR_2;
    if (FUNC_2(VAR_6) != VAR_0) return FUNC_0(VAR_4);


    { size_t const VAR_9 = FUNC_4(VAR_6, VAR_7);
      if (VAR_7 < VAR_9) return VAR_9; }

    FUNC_5(VAR_5, 0, sizeof(*VAR_5));
    { BYTE const VAR_10 = VAR_8[4];
        VAR_5->windowLog = (VAR_10 & 0xF) + VAR_1;
        if ((VAR_10 & 0x20) != 0) return FUNC_0(VAR_3);
        switch(VAR_10 >> 6)
        {
            default:
            case 0 : VAR_5->frameContentSize = 0; break;
            case 1 : VAR_5->frameContentSize = VAR_8[5]; break;
            case 2 : VAR_5->frameContentSize = FUNC_1(VAR_8+5)+256; break;
            case 3 : VAR_5->frameContentSize = FUNC_3(VAR_8+5); break;
    } }
    return 0;
}
