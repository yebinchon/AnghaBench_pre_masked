
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* value; } ;
struct TYPE_6__ {int metadata; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVDictionaryEntry ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,char*,TYPE_2__*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*) ;

__attribute__((used)) static const char * FUNC_3(AVStream * VAR_1, const char * VAR_2)
{
    AVDictionaryEntry * VAR_3;
    char * VAR_4;




    VAR_3 = FUNC_0(VAR_1->metadata, "title", ((void*)0), 0);
    if (VAR_3 != ((void*)0) && VAR_3->value[0] != 0)
    {
        return VAR_3->value;
    }

    VAR_3 = FUNC_0(VAR_1->metadata, "title-und", ((void*)0), 0);
    if (VAR_3 != ((void*)0) && VAR_3->value[0] != 0)
    {
        return VAR_3->value;
    }

    VAR_4 = FUNC_2("title-%s", VAR_2);
    VAR_3 = FUNC_0(VAR_1->metadata, VAR_4, ((void*)0), 0);
    FUNC_1(VAR_4);
    if (VAR_3 != ((void*)0) && VAR_3->value[0] != 0)
    {
        return VAR_3->value;
    }
    while ((VAR_3 = FUNC_0(VAR_1->metadata, "title-", VAR_3, VAR_0)))
    {

        if (VAR_3 != ((void*)0) && VAR_3->value[0] != 0)
        {
            return VAR_3->value;
        }
    }
    return ((void*)0);
}
