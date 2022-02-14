
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; scalar_t__** elements; scalar_t__ ptr_s; } ;
struct TYPE_7__ {TYPE_1__ Set; } ;
struct TYPE_8__ {int globindex; TYPE_2__ content; int type; } ;
typedef TYPE_3__ URLPattern ;
struct TYPE_9__ {size_t size; TYPE_3__* pattern; } ;
typedef TYPE_4__ URLGlob ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (scalar_t__*,char*,size_t) ;

__attribute__((used)) static CURLcode FUNC_3(URLGlob *VAR_3, char *VAR_4, size_t VAR_5)
{
  URLPattern *VAR_6 = &VAR_3->pattern[VAR_3->size];
  VAR_6->type = VAR_2;
  VAR_6->content.Set.size = 1;
  VAR_6->content.Set.ptr_s = 0;
  VAR_6->globindex = -1;

  VAR_6->content.Set.elements = FUNC_1(sizeof(char *));

  if(!VAR_6->content.Set.elements)
    return FUNC_0("out of memory", 0, VAR_1);

  VAR_6->content.Set.elements[0] = FUNC_1(VAR_5 + 1);
  if(!VAR_6->content.Set.elements[0])
    return FUNC_0("out of memory", 0, VAR_1);

  FUNC_2(VAR_6->content.Set.elements[0], VAR_4, VAR_5);
  VAR_6->content.Set.elements[0][VAR_5] = 0;

  return VAR_0;
}
