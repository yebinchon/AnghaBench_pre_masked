
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct ParserStruct {TYPE_1__ characters; int depth; } ;
typedef int XML_Char ;


 int FUNC_0 (char*,int ,int ,int const*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, const XML_Char *VAR_1)
{
  struct ParserStruct *VAR_2 = (struct ParserStruct *) VAR_0;
  VAR_2->depth--;

  FUNC_0("%5lu   %10lu   %s\n", VAR_2->depth, VAR_2->characters.size, VAR_1);
}
