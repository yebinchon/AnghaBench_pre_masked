
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int blockType; } ;
typedef TYPE_1__ blockProperties_t ;
struct TYPE_10__ {size_t expected; int stage; size_t headerSize; int bType; char* previousDstEnd; int headerBuffer; } ;
typedef TYPE_2__ ZSTDv05_DCtx ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (TYPE_2__*,void*) ;
 size_t FUNC_2 (void*,size_t,void const*,size_t) ;
 size_t FUNC_3 (TYPE_2__*,void const*,size_t) ;
 size_t FUNC_4 (TYPE_2__*,int ,size_t) ;
 size_t FUNC_5 (TYPE_2__*,void*,size_t,void const*,size_t) ;
 size_t VAR_2 ;
 size_t FUNC_6 (void const*,void*,TYPE_1__*) ;
 int FUNC_7 (size_t const) ;
 int FUNC_8 (int ,void const*,size_t) ;
 int VAR_3 ;

size_t FUNC_9(ZSTDv05_DCtx* VAR_4, void* VAR_5, size_t VAR_6, const void* VAR_7, size_t VAR_8)
{

    if (VAR_8 != VAR_4->expected) return FUNC_0(VAR_3);
    FUNC_1(VAR_4, VAR_5);


    switch (VAR_4->stage)
    {
    case 132 :

        if (VAR_8 != VAR_2) return FUNC_0(VAR_3);
        VAR_4->headerSize = FUNC_3(VAR_4, VAR_7, VAR_2);
        if (FUNC_7(VAR_4->headerSize)) return VAR_4->headerSize;
        FUNC_8(VAR_4->headerBuffer, VAR_7, VAR_2);
        if (VAR_4->headerSize > VAR_2) return FUNC_0(VAR_0);
        VAR_4->expected = 0;

    case 134:

        { size_t const VAR_9 = FUNC_4(VAR_4, VAR_4->headerBuffer, VAR_4->headerSize);
            if (FUNC_7(VAR_9)) return VAR_9;
            VAR_4->expected = VAR_1;
            VAR_4->stage = 135;
            return 0;
        }
    case 135:
        {

            blockProperties_t VAR_10;
            size_t VAR_11 = FUNC_6(VAR_7, VAR_1, &VAR_10);
            if (FUNC_7(VAR_11)) return VAR_11;
            if (VAR_10.blockType == 130) {
                VAR_4->expected = 0;
                VAR_4->stage = 132;
            }
            else {
                VAR_4->expected = VAR_11;
                VAR_4->bType = VAR_10.blockType;
                VAR_4->stage = 133;
            }
            return 0;
        }
    case 133:
        {

            size_t VAR_12;
            switch(VAR_4->bType)
            {
            case 131:
                VAR_12 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
                break;
            case 129 :
                VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
                break;
            case 128 :
                return FUNC_0(VAR_0);
                break;
            case 130 :
                VAR_12 = 0;
                break;
            default:
                return FUNC_0(VAR_0);
            }
            VAR_4->stage = 135;
            VAR_4->expected = VAR_1;
            VAR_4->previousDstEnd = (char*)VAR_5 + VAR_12;
            return VAR_12;
        }
    default:
        return FUNC_0(VAR_0);
    }
}
