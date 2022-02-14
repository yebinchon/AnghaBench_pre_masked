
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ output_bytes; int pb; } ;
typedef TYPE_1__ LZWEncodeState ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(LZWEncodeState *VAR_0){
    int VAR_1 = FUNC_0(&VAR_0->pb) >> 3;
    VAR_1 -= VAR_0->output_bytes;
    VAR_0->output_bytes += VAR_1;
    return VAR_1;
}
