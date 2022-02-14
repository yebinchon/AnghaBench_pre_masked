
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chunk_count; } ;
typedef TYPE_1__ HapContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(HapContext *VAR_2)
{

    int VAR_3 = VAR_0;

    if (VAR_2->chunk_count > 1) {

        VAR_3 += VAR_1 + FUNC_0(VAR_2);
    }

    return VAR_3;
}
