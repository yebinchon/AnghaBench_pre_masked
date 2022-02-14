
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mfxStatus ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,char const*,char const*,int ) ;
 int FUNC_1 (int ,char const**) ;

int FUNC_2(void *VAR_1, mfxStatus VAR_2,
                         const char *VAR_3)
{
    const char *VAR_4;
    int VAR_5;
    VAR_5 = FUNC_1(VAR_2, &VAR_4);
    FUNC_0(VAR_1, VAR_0, "%s: %s (%d)\n", VAR_3, VAR_4, VAR_2);
    return VAR_5;
}
