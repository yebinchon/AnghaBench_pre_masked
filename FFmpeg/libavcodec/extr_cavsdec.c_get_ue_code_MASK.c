
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int) ;
 unsigned int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(GetBitContext *VAR_2, int VAR_3)
{
    unsigned VAR_4 = FUNC_2(VAR_2);
    if (VAR_4 >= ((1U<<31)>>VAR_3)) {
        FUNC_0(((void*)0), VAR_1, "get_ue_code: value too larger\n");
        return VAR_0;
    }
    if (VAR_3) {
        return (VAR_4<<VAR_3) + FUNC_1(VAR_2, VAR_3);
    }
    return VAR_4;
}
