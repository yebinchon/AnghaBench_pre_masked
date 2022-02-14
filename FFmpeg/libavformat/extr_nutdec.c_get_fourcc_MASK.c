
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;

__attribute__((used)) static uint64_t FUNC_4(AVIOContext *VAR_1)
{
    unsigned int VAR_2 = FUNC_3(VAR_1);

    if (VAR_2 == 2)
        return FUNC_1(VAR_1);
    else if (VAR_2 == 4)
        return FUNC_2(VAR_1);
    else {
        FUNC_0(((void*)0), VAR_0, "Unsupported fourcc length %d\n", VAR_2);
        return -1;
    }
}
