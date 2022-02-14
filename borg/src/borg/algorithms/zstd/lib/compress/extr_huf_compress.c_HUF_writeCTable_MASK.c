
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int U32 ;
struct TYPE_3__ {size_t nbBits; } ;
typedef TYPE_1__ HUF_CElt ;
typedef int BYTE ;


 int FUNC_0 (int,int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*,size_t,int*,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

size_t FUNC_3 (void* VAR_6, size_t VAR_7,
                        const HUF_CElt* VAR_8, unsigned VAR_9, unsigned VAR_10)
{
    BYTE VAR_11[VAR_2 + 1];
    BYTE VAR_12[VAR_1];
    BYTE* VAR_13 = (BYTE*)VAR_6;
    U32 VAR_14;


    if (VAR_9 > VAR_1) return FUNC_1(VAR_5);


    VAR_11[0] = 0;
    for (VAR_14=1; VAR_14<VAR_10+1; VAR_14++)
        VAR_11[VAR_14] = (BYTE)(VAR_10 + 1 - VAR_14);
    for (VAR_14=0; VAR_14<VAR_9; VAR_14++)
        VAR_12[VAR_14] = VAR_11[VAR_8[VAR_14].nbBits];


    { FUNC_0(VAR_4, FUNC_2(VAR_13+1, VAR_7-1, VAR_12, VAR_9) );
        if ((VAR_4>1) & (VAR_4 < VAR_9/2)) {
            VAR_13[0] = (BYTE)VAR_4;
            return VAR_4+1;
    } }


    if (VAR_9 > (256-128)) return FUNC_1(VAR_0);
    if (((VAR_9+1)/2) + 1 > VAR_7) return FUNC_1(VAR_3);
    VAR_13[0] = (BYTE)(128 + (VAR_9-1));
    VAR_12[VAR_9] = 0;
    for (VAR_14=0; VAR_14<VAR_9; VAR_14+=2)
        VAR_13[(VAR_14/2)+1] = (BYTE)((VAR_12[VAR_14] << 4) + VAR_12[VAR_14+1]);
    return ((VAR_9+1)/2) + 1;
}
