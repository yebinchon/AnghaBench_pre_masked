
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int headers; int data; int encoder; int type; int filename; int name; struct TYPE_4__* prev; struct TYPE_4__* subparts; } ;
typedef TYPE_1__ tool_mime ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(tool_mime *VAR_0)
{
  if(VAR_0) {
    if(VAR_0->subparts)
      FUNC_3(VAR_0->subparts);
    if(VAR_0->prev)
      FUNC_3(VAR_0->prev);
    FUNC_0(VAR_0->name);
    FUNC_0(VAR_0->filename);
    FUNC_0(VAR_0->type);
    FUNC_0(VAR_0->encoder);
    FUNC_0(VAR_0->data);
    FUNC_1(VAR_0->headers);
    FUNC_2(VAR_0);
  }
}
