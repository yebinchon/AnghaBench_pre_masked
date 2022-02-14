
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; int data; } ;
typedef TYPE_1__ X_SERIAL ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

bool FUNC_1(X_SERIAL *VAR_0, X_SERIAL *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0->size != VAR_1->size)
 {
  return 0;
 }

 if (FUNC_0(VAR_0->data, VAR_1->data, VAR_0->size) != 0)
 {
  return 0;
 }

 return 1;
}
