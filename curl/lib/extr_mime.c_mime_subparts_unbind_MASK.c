
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* parent; } ;
typedef TYPE_1__ curl_mime ;
struct TYPE_4__ {int * freefunc; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
  curl_mime *VAR_1 = (curl_mime *) VAR_0;

  if(VAR_1 && VAR_1->parent) {
    VAR_1->parent->freefunc = ((void*)0);
    FUNC_0(VAR_1->parent);
    VAR_1->parent = ((void*)0);
  }
}
