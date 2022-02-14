
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dohresponse {size_t size; int * memory; } ;


 int * FUNC_0 (int *,size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,void*,size_t) ;

__attribute__((used)) static size_t
FUNC_2(void *VAR_1, size_t VAR_2, size_t VAR_3, void *VAR_4)
{
  size_t VAR_5 = VAR_2 * VAR_3;
  struct dohresponse *VAR_6 = (struct dohresponse *)VAR_4;

  if((VAR_6->size + VAR_5) > VAR_0)

    return 0;

  VAR_6->memory = FUNC_0(VAR_6->memory, VAR_6->size + VAR_5);
  if(!VAR_6->memory)

    return 0;

  FUNC_1(&(VAR_6->memory[VAR_6->size]), VAR_1, VAR_5);
  VAR_6->size += VAR_5;

  return VAR_5;
}
