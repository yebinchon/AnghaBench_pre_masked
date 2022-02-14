
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int low; int* bytestream; int* bytestream_end; } ;
typedef TYPE_1__ CABACContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(CABACContext *VAR_2){



        VAR_2->low+= VAR_2->bytestream[0]<<1;

    VAR_2->low -= VAR_1;

    if (VAR_2->bytestream < VAR_2->bytestream_end)

        VAR_2->bytestream += VAR_0 / 8;
}
