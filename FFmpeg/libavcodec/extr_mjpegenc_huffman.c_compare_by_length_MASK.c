
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
typedef TYPE_1__ HuffTable ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    HuffTable VAR_2 = *(HuffTable *) VAR_0;
    HuffTable VAR_3 = *(HuffTable *) VAR_1;
    return VAR_2.length - VAR_3.length;
}
