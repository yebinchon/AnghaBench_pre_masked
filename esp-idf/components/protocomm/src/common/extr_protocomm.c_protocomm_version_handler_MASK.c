
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int ssize_t ;
struct TYPE_2__ {int ver; } ;
typedef TYPE_1__ protocomm_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(uint32_t VAR_3,
                                     const uint8_t *VAR_4, ssize_t VAR_5,
                                     uint8_t **VAR_6, ssize_t *VAR_7,
                                     void *VAR_8)
{
    protocomm_t *VAR_9 = (protocomm_t *) VAR_8;
    if (!VAR_9->ver) {
        *VAR_7 = 0;
        *VAR_6 = ((void*)0);
        return VAR_1;
    }


    *VAR_7 = FUNC_3(VAR_9->ver);
    *VAR_6 = FUNC_1(*VAR_7);
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_2, "Failed to allocate memory for version response");
        return VAR_0;
    }

    FUNC_2(*VAR_6, VAR_9->ver, *VAR_7);
    return VAR_1;
}
