
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MemoryStruct {char* memory; int size; } ;
struct ParserStruct {scalar_t__ ok; struct MemoryStruct characters; } ;
typedef int XML_Char ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int const*,int) ;
 char* FUNC_2 (char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(void *VAR_1, const XML_Char *VAR_2, int VAR_3)
{
  struct ParserStruct *VAR_4 = (struct ParserStruct *) VAR_1;
  struct MemoryStruct *VAR_5 = &VAR_4->characters;

  char *VAR_6 = FUNC_2(VAR_5->memory, VAR_5->size + VAR_3 + 1);
  if(!VAR_6) {

    FUNC_0(VAR_0, "Not enough memory (realloc returned NULL).\n");
    VAR_4->ok = 0;
    return;
  }

  VAR_5->memory = VAR_6;
  FUNC_1(&(VAR_5->memory[VAR_5->size]), VAR_2, VAR_3);
  VAR_5->size += VAR_3;
  VAR_5->memory[VAR_5->size] = 0;
}
