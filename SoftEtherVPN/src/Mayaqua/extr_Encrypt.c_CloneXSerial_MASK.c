
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; void* data; } ;
typedef TYPE_1__ X_SERIAL ;


 int FUNC_0 (void*,void*,int) ;
 void* FUNC_1 (int) ;

X_SERIAL *FUNC_2(X_SERIAL *VAR_0)
{
 X_SERIAL *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_1(sizeof(X_SERIAL));
 VAR_1->data = FUNC_1(VAR_0->size);
 FUNC_0(VAR_1->data, VAR_0->data, VAR_0->size);
 VAR_1->size = VAR_0->size;

 return VAR_1;
}
