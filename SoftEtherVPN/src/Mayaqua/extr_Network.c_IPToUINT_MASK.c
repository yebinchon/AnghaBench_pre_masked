
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int * addr; } ;
typedef TYPE_1__ IP ;



UINT FUNC_0(IP *VAR_0)
{
 UCHAR *VAR_1;
 UINT VAR_2, VAR_3 = 0;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_1 = (UCHAR *)&VAR_3;
 for (VAR_2 = 0;VAR_2 < 4;VAR_2++)
 {
  VAR_1[VAR_2] = VAR_0->addr[VAR_2];
 }

 return VAR_3;
}
