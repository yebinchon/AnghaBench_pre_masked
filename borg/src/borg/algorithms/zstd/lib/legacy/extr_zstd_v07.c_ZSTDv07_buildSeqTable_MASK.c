
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int const S16 ;
typedef int FSEv07_DTable ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;




 int FUNC_1 (int *,int const*,int,int) ;
 int FUNC_2 (int *,int const) ;
 int FUNC_3 (size_t const) ;
 size_t FUNC_4 (int const*,int*,int*,void const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static size_t FUNC_5(FSEv07_DTable* VAR_3, U32 VAR_4, U32 VAR_5, U32 VAR_6,
                                 const void* VAR_7, size_t VAR_8,
                                 const S16* VAR_9, U32 VAR_10, U32 VAR_11)
{
    switch(VAR_4)
    {
    case 129 :
        if (!VAR_8) return FUNC_0(VAR_2);
        if ( (*(const BYTE*)VAR_7) > VAR_5) return FUNC_0(VAR_1);
        FUNC_2(VAR_3, *(const BYTE*)VAR_7);
        return 1;
    case 130 :
        FUNC_1(VAR_3, VAR_9, VAR_5, VAR_10);
        return 0;
    case 128:
        if (!VAR_11) return FUNC_0(VAR_1);
        return 0;
    default :
    case 131 :
        { U32 VAR_12;
            S16 VAR_13[VAR_0+1];
            size_t const VAR_14 = FUNC_4(VAR_13, &VAR_5, &VAR_12, VAR_7, VAR_8);
            if (FUNC_3(VAR_14)) return FUNC_0(VAR_1);
            if (VAR_12 > VAR_6) return FUNC_0(VAR_1);
            FUNC_1(VAR_3, VAR_13, VAR_5, VAR_12);
            return VAR_14;
    } }
}
