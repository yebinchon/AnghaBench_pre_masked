
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NameValueParserData {int topelt; char* curelt; scalar_t__ cdatalen; int * cdata; } ;


 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_1(void * VAR_0, const char * VAR_1, int VAR_2)
{
 struct NameValueParserData * VAR_3 = (struct NameValueParserData *)VAR_0;
 VAR_3->topelt = 1;
    if(VAR_2>63)
        VAR_2 = 63;
    FUNC_0(VAR_3->curelt, VAR_1, VAR_2);
    VAR_3->curelt[VAR_2] = '\0';
 VAR_3->cdata = ((void*)0);
 VAR_3->cdatalen = 0;
}
