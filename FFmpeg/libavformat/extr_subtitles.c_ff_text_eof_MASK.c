
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf_pos; scalar_t__ buf_len; int pb; } ;
typedef TYPE_1__ FFTextReader ;


 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(FFTextReader *VAR_0)
{
    return VAR_0->buf_pos >= VAR_0->buf_len && FUNC_0(VAR_0->pb);
}
