
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,size_t) ;

ssize_t FUNC_2(void *VAR_3, size_t VAR_4, unsigned int VAR_5)
{




    FUNC_0(VAR_1, "getrandom(buf=0x%x, buflen=%d, flags=%u)", (int) VAR_3, VAR_4, VAR_5);

    if (VAR_3 == ((void*)0)) {
        VAR_2 = VAR_0;
        FUNC_0(VAR_1, "getrandom returns -1 (EFAULT)");
        return -1;
    }

    FUNC_1(VAR_3, VAR_4);

    FUNC_0(VAR_1, "getrandom returns %d", VAR_4);
    return VAR_4;
}
