
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; int data; } ;
typedef TYPE_1__ X_SERIAL ;
typedef size_t UINT ;
typedef scalar_t__ UCHAR ;


 int FUNC_0 (int ,scalar_t__*,size_t) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (size_t) ;

X_SERIAL *FUNC_3(void *VAR_0, UINT VAR_1)
{
 X_SERIAL *VAR_2;
 UCHAR *VAR_3 = (UCHAR *)VAR_0;
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return ((void*)0);
 }

 for (VAR_4 = 0;VAR_4 < VAR_1;VAR_4++)
 {
  if (VAR_3[VAR_4] != 0)
  {
   break;
  }
 }
 if (VAR_4 == VAR_1)
 {
  VAR_4 = VAR_1 - 1;
 }
 VAR_3 += VAR_4;

 VAR_2 = FUNC_1(sizeof(X_SERIAL));
 VAR_2->size = VAR_1 - VAR_4;
 VAR_2->data = FUNC_2(VAR_1 + 16);
 FUNC_0(VAR_2->data, VAR_3, VAR_1 - VAR_4);

 return VAR_2;
}
