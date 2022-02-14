
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MemoryStruct {char* memory; size_t size; } ;


 int FUNC_0 (char*,void*,size_t) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,size_t) ;

__attribute__((used)) static size_t
FUNC_3(void *VAR_0, size_t VAR_1, size_t VAR_2, void *VAR_3)
{
  size_t VAR_4 = VAR_1 * VAR_2;
  struct MemoryStruct *VAR_5 = (struct MemoryStruct *)VAR_3;

  char *VAR_6 = FUNC_2(VAR_5->memory, VAR_5->size + VAR_4 + 1);
  if(!VAR_6) {

    FUNC_1("not enough memory (realloc returned NULL)\n");
    return 0;
  }

  VAR_5->memory = VAR_6;
  FUNC_0(&(VAR_5->memory[VAR_5->size]), VAR_0, VAR_4);
  VAR_5->size += VAR_4;
  VAR_5->memory[VAR_5->size] = 0;

  return VAR_4;
}
