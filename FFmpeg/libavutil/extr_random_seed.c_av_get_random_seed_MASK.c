
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int seed ;
typedef int UCHAR ;
typedef int NTSTATUS ;
typedef int BCRYPT_ALG_HANDLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,char*) ;

uint32_t FUNC_7(void)
{
    uint32_t VAR_2;
    if (FUNC_6(&VAR_2, "/dev/urandom") == sizeof(VAR_2))
        return VAR_2;
    if (FUNC_6(&VAR_2, "/dev/random") == sizeof(VAR_2))
        return VAR_2;
    return FUNC_5();
}
