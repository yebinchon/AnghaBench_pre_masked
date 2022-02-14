
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int * addr; } ;
typedef TYPE_1__ IP ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(IP *VAR_0, UINT VAR_1)
{
 UCHAR *VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0);

 VAR_2 = (UCHAR *)&VAR_1;
 for (VAR_3 = 0;VAR_3 < 4;VAR_3++)
 {
  VAR_0->addr[VAR_3] = VAR_2[VAR_3];
 }
}
