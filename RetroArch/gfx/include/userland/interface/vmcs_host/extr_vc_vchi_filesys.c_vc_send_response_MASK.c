
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int open_handle; } ;
struct TYPE_5__ {scalar_t__ cmd_code; scalar_t__ xid; scalar_t__* params; } ;
typedef TYPE_1__ FILESERV_MSG_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,scalar_t__,int ,int *) ;
 int FUNC_1 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3( FILESERV_MSG_T* VAR_3, uint32_t VAR_4, uint32_t VAR_5 )
{
   int VAR_6 = -1;

   FUNC_1(&VAR_3->cmd_code, VAR_4);
   FUNC_1(&VAR_3->xid, VAR_3->xid);
   FUNC_1(&VAR_3->params[0], VAR_3->params[0]);
   FUNC_1(&VAR_3->params[1], VAR_3->params[1]);
   FUNC_1(&VAR_3->params[2], VAR_3->params[2]);
   FUNC_1(&VAR_3->params[3], VAR_3->params[3]);


   VAR_5 += 8;

   if(FUNC_2(VAR_5 <= VAR_1))
      VAR_6 = (int) FUNC_0( VAR_2.open_handle, VAR_3, VAR_5, VAR_0, ((void*)0) );

   return VAR_6;
}
