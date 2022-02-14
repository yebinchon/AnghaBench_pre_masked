
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UID ;
struct TYPE_4__ {int matching_len; scalar_t__* uid; } ;
typedef TYPE_1__ MXFCodecUL ;


 scalar_t__ FUNC_0 (scalar_t__*,int ,int ) ;

__attribute__((used)) static const MXFCodecUL *FUNC_1(const MXFCodecUL *VAR_0, UID *VAR_1)
{
    while (VAR_0->uid[0]) {
        if(FUNC_0(VAR_0->uid, *VAR_1, VAR_0->matching_len))
            break;
        VAR_0++;
    }
    return VAR_0;
}
