
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int NET_BUFFER_LIST_STATUS ;
typedef int NET_BUFFER_LIST ;


 int FUNC_0 (int ) ;

void FUNC_1(NET_BUFFER_LIST *VAR_0, UINT VAR_1)
{
 if (VAR_0 == ((void*)0))
 {
  return;
 }

 while (VAR_0 != ((void*)0))
 {
  NET_BUFFER_LIST_STATUS(VAR_2) = VAR_1;

  VAR_2 = FUNC_0(VAR_2);
 }
}
