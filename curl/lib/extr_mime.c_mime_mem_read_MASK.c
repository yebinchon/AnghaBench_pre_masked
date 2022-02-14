
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t offset; } ;
struct TYPE_4__ {TYPE_1__ state; int * data; scalar_t__ datasize; } ;
typedef TYPE_2__ curl_mimepart ;


 int FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static size_t FUNC_1(char *VAR_0, size_t VAR_1, size_t VAR_2,
                            void *VAR_3)
{
  curl_mimepart *VAR_4 = (curl_mimepart *) VAR_3;
  size_t VAR_5 = (size_t) VAR_4->datasize - VAR_4->state.offset;
  (void) VAR_1;

  if(VAR_5 > VAR_2)
    VAR_5 = VAR_2;

  if(VAR_5)
    FUNC_0(VAR_0, (char *) &VAR_4->data[VAR_4->state.offset], VAR_5);

  VAR_4->state.offset += VAR_5;
  return VAR_5;
}
