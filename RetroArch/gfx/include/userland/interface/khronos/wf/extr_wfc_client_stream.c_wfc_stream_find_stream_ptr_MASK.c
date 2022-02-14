
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int to_be_deleted; } ;
typedef TYPE_1__ WFC_STREAM_T ;
typedef int WFCNativeStreamType ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static WFC_STREAM_T *FUNC_3(WFCNativeStreamType VAR_0)
{
   WFC_STREAM_T *VAR_1 = FUNC_2(VAR_0);

   if (VAR_1 && !VAR_1->to_be_deleted)
      FUNC_1(VAR_1);

   FUNC_0();

   return VAR_1;
}
