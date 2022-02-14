
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ buf_pos; scalar_t__ buf_len; int pb; } ;
typedef TYPE_1__ FFTextReader ;


 scalar_t__ FUNC_0 (int ) ;

int64_t FUNC_1(FFTextReader *VAR_0)
{
    return FUNC_0(VAR_0->pb) - VAR_0->buf_len + VAR_0->buf_pos;
}
