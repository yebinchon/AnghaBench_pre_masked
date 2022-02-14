
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flagStaticTables; int LLTable; int MLTable; int OffTable; int hufTableX4; } ;
typedef TYPE_1__ ZSTDv05_DCtx ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ,short*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (size_t) ;
 size_t FUNC_3 (short*,unsigned int*,unsigned int*,void const*,size_t) ;
 scalar_t__ FUNC_4 (size_t) ;
 size_t FUNC_5 (int ,void const*,size_t) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static size_t FUNC_6(ZSTDv05_DCtx* VAR_7, const void* VAR_8, size_t VAR_9)
{
    size_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    short VAR_15[VAR_4+1];
    unsigned VAR_16=VAR_4, VAR_17;
    short VAR_18[VAR_3+1];
    unsigned VAR_19 = VAR_3, VAR_20;
    short VAR_21[VAR_2+1];
    unsigned VAR_22 = VAR_2, VAR_23;

    VAR_10 = FUNC_5(VAR_7->hufTableX4, VAR_8, VAR_9);
    if (FUNC_4(VAR_10)) return FUNC_0(VAR_6);
    VAR_8 = (const char*)VAR_8 + VAR_10;
    VAR_9 -= VAR_10;

    VAR_11 = FUNC_3(VAR_15, &VAR_16, &VAR_17, VAR_8, VAR_9);
    if (FUNC_2(VAR_11)) return FUNC_0(VAR_6);
    if (VAR_17 > VAR_5) return FUNC_0(VAR_6);
    VAR_13 = FUNC_1(VAR_7->OffTable, VAR_15, VAR_16, VAR_17);
    if (FUNC_2(VAR_13)) return FUNC_0(VAR_6);
    VAR_8 = (const char*)VAR_8 + VAR_11;
    VAR_9 -= VAR_11;

    VAR_12 = FUNC_3(VAR_18, &VAR_19, &VAR_20, VAR_8, VAR_9);
    if (FUNC_2(VAR_12)) return FUNC_0(VAR_6);
    if (VAR_20 > VAR_1) return FUNC_0(VAR_6);
    VAR_13 = FUNC_1(VAR_7->MLTable, VAR_18, VAR_19, VAR_20);
    if (FUNC_2(VAR_13)) return FUNC_0(VAR_6);
    VAR_8 = (const char*)VAR_8 + VAR_12;
    VAR_9 -= VAR_12;

    VAR_14 = FUNC_3(VAR_21, &VAR_22, &VAR_23, VAR_8, VAR_9);
    if (VAR_23 > VAR_0) return FUNC_0(VAR_6);
    if (FUNC_2(VAR_14)) return FUNC_0(VAR_6);
    VAR_13 = FUNC_1(VAR_7->LLTable, VAR_21, VAR_22, VAR_23);
    if (FUNC_2(VAR_13)) return FUNC_0(VAR_6);

    VAR_7->flagStaticTables = 1;
    return VAR_10 + VAR_11 + VAR_12 + VAR_14;
}
