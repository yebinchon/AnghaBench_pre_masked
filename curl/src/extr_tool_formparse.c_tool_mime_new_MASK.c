
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int toolmimekind ;
struct TYPE_4__ {struct TYPE_4__* subparts; struct TYPE_4__* prev; struct TYPE_4__* parent; int kind; } ;
typedef TYPE_1__ tool_mime ;


 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static tool_mime *FUNC_1(tool_mime *VAR_0, toolmimekind VAR_1)
{
  tool_mime *VAR_2 = (tool_mime *) FUNC_0(1, sizeof(*VAR_2));

  if(VAR_2) {
    VAR_2->kind = VAR_1;
    VAR_2->parent = VAR_0;
    if(VAR_0) {
      VAR_2->prev = VAR_0->subparts;
      VAR_0->subparts = VAR_2;
    }
  }
  return VAR_2;
}
