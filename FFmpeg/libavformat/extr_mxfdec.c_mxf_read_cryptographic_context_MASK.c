
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int64_t ;
typedef int UID ;
struct TYPE_2__ {int source_container_ul; } ;
typedef TYPE_1__ MXFCryptoContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(void *VAR_2, AVIOContext *VAR_3, int VAR_4, int VAR_5, UID VAR_6, int64_t VAR_7)
{
    MXFCryptoContext *VAR_8 = VAR_2;
    if (VAR_5 != 16)
        return VAR_0;
    if (FUNC_0(VAR_6, VAR_1))
        FUNC_1(VAR_3, VAR_8->source_container_ul, 16);
    return 0;
}
