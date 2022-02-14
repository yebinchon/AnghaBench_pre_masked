
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int v8u16 ;
typedef scalar_t__ v4u32 ;
typedef int v4i32 ;
typedef scalar_t__ v2u64 ;
typedef int v2i64 ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ v16u8 ;
typedef scalar_t__ v16i8 ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int ,int ,TYPE_1__) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ,int ,int ,int ,int *,int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_1__,TYPE_1__) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int ,int) ;

void FUNC_10(uint8_t *VAR_0, ptrdiff_t VAR_1, const uint8_t *VAR_2,
                   const uint8_t *VAR_3)
{
    uint64_t VAR_4, VAR_5;
    v16i8 VAR_6;
    v16u8 VAR_7 = { 0 };
    v8u16 VAR_8;
    v4u32 VAR_9;
    v2u64 VAR_10;

    VAR_4 = FUNC_1(VAR_3);
    VAR_5 = FUNC_1(VAR_2);
    FUNC_0(VAR_4, VAR_5, VAR_7);
    VAR_8 = FUNC_5(VAR_7, VAR_7);
    VAR_9 = FUNC_6(VAR_8, VAR_8);
    VAR_10 = FUNC_4(VAR_9, VAR_9);
    VAR_9 = (v4u32) FUNC_7((v4i32) VAR_10, (v4i32) VAR_10);
    VAR_10 = FUNC_4(VAR_9, VAR_9);
    VAR_9 = (v4u32) FUNC_9((v4i32) VAR_10, 4);
    VAR_6 = FUNC_8((v16i8) VAR_9, 0);
    VAR_4 = FUNC_3((v2i64) VAR_6, 0);

    FUNC_2(VAR_4, VAR_4, VAR_4, VAR_4, VAR_0, VAR_1);
    VAR_0 += (4 * VAR_1);
    FUNC_2(VAR_4, VAR_4, VAR_4, VAR_4, VAR_0, VAR_1);
}
