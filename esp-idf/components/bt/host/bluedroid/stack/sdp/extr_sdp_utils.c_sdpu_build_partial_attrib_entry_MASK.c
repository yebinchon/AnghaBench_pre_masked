
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tSDP_ATTRIBUTE ;
typedef int UINT8 ;
typedef size_t UINT16 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 size_t FUNC_5 (int *) ;

UINT8 *FUNC_6 (UINT8 *VAR_1, tSDP_ATTRIBUTE *VAR_2, UINT16 VAR_3, UINT16 *VAR_4)
{
    UINT8 *VAR_5;
    UINT8 *VAR_6;
    size_t VAR_7;
    UINT16 VAR_8;

    if ((VAR_5 = (UINT8 *) FUNC_3(sizeof(UINT8) * VAR_0 )) == ((void*)0)) {
        FUNC_0("sdpu_build_partial_attrib_entry cannot get a buffer!\n");
        return ((void*)0);
    }
    VAR_6 = VAR_5;

    FUNC_4(VAR_6, VAR_2);
    VAR_8 = FUNC_5(VAR_2);

    VAR_7 = ((VAR_8 - *VAR_4) < VAR_3) ? (VAR_8 - *VAR_4) : VAR_3;

    FUNC_1(VAR_1, &VAR_5[*VAR_4], VAR_7);

    VAR_1 = &VAR_1[VAR_7];
    *VAR_4 += VAR_7;

    FUNC_2(VAR_5);
    return VAR_1;
}
