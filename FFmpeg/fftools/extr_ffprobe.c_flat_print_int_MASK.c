
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t level; TYPE_1__* section_pbuf; } ;
typedef TYPE_2__ WriterContext ;
struct TYPE_4__ {char* str; } ;


 int FUNC_0 (char*,char*,char const*,long long) ;

__attribute__((used)) static void FUNC_1(WriterContext *VAR_0, const char *VAR_1, long long int VAR_2)
{
    FUNC_0("%s%s=%lld\n", VAR_0->section_pbuf[VAR_0->level].str, VAR_1, VAR_2);
}
