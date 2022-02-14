
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* value; } ;
struct TYPE_5__ {int size; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVDictionaryEntry ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(const AVPacket *VAR_0, const AVDictionaryEntry *VAR_1)
{
    return FUNC_0("image/jpeg")*2 + 2 + 1 + (VAR_1 ? FUNC_0(VAR_1->value)*2 : 0) + 2 + 4 + VAR_0->size;
}
