
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ next_klv; scalar_t__ length; scalar_t__ key; scalar_t__ offset; } ;
typedef TYPE_1__ KLVPacket ;
typedef int AVIOContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int FUNC_5(KLVPacket *VAR_3, AVIOContext *VAR_4)
{
    int64_t VAR_5, VAR_6;
    if (!FUNC_4(VAR_4, VAR_2, 4))
        return VAR_0;
    VAR_3->offset = FUNC_1(VAR_4) - 4;
    FUNC_3(VAR_3->key, VAR_2, 4);
    FUNC_0(VAR_4, VAR_3->key + 4, 12);
    VAR_5 = FUNC_2(VAR_4);
    if (VAR_5 < 0)
        return VAR_5;
    VAR_3->length = VAR_5;
    VAR_6 = FUNC_1(VAR_4);
    if (VAR_6 > VAR_1 - VAR_5)
        return VAR_0;
    VAR_3->next_klv = VAR_6 + VAR_5;
    return 0;
}
