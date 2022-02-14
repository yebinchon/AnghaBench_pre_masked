
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; int * memory; } ;
struct ParserStruct {TYPE_1__ characters; int depth; int tags; } ;
typedef int XML_Char ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, const XML_Char *VAR_1,
                         const XML_Char **VAR_2)
{
  struct ParserStruct *VAR_3 = (struct ParserStruct *) VAR_0;
  VAR_3->tags++;
  VAR_3->depth++;


  FUNC_0(VAR_3->characters.memory);
  VAR_3->characters.memory = ((void*)0);
  VAR_3->characters.size = 0;
}
