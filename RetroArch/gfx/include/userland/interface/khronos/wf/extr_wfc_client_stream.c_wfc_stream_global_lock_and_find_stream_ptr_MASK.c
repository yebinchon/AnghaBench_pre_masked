
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ handle; struct TYPE_4__* next; } ;
typedef TYPE_1__ WFC_STREAM_T ;
typedef scalar_t__ WFCNativeStreamType ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static WFC_STREAM_T *FUNC_1(WFCNativeStreamType VAR_1)
{
   WFC_STREAM_T *VAR_2;

   FUNC_0();

   VAR_2 = VAR_0;
   while (VAR_2 && VAR_2->handle != VAR_1)
      VAR_2 = VAR_2->next;

   return VAR_2;
}
