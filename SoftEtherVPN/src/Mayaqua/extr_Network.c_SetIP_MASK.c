
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* UCHAR ;
struct TYPE_4__ {void** addr; } ;
typedef TYPE_1__ IP ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(IP *VAR_0, UCHAR VAR_1, UCHAR VAR_2, UCHAR VAR_3, UCHAR VAR_4)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, sizeof(IP));
 VAR_0->addr[0] = VAR_1;
 VAR_0->addr[1] = VAR_2;
 VAR_0->addr[2] = VAR_3;
 VAR_0->addr[3] = VAR_4;
}
