
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct AVCodecParserContext {int dummy; } ;
struct TYPE_3__ {struct AVCodecParserContext* parser; } ;
typedef TYPE_1__ AVStream ;



struct AVCodecParserContext *FUNC_0(const AVStream *VAR_0)
{
    return VAR_0->parser;
}
