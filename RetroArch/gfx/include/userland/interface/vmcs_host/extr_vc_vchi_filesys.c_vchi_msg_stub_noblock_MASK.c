
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int cur_xid; int open_handle; int resp_code; } ;
struct TYPE_5__ {int cmd_code; int xid; } ;
typedef TYPE_1__ FILESERV_MSG_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,int,int ,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(FILESERV_MSG_T* VAR_4, uint16_t VAR_5, int VAR_6)
{
   uint32_t VAR_7;

   if(!FUNC_2(VAR_6 <= VAR_2))
      return -1;


   VAR_3.resp_code = VAR_0;


   VAR_7 = VAR_3.cur_xid + 1;
   VAR_7 &= 0x7fffffffUL;
   VAR_3.cur_xid = VAR_7;


   FUNC_1( &(VAR_4->xid), VAR_3.cur_xid );


   FUNC_1( &(VAR_4->cmd_code), VAR_5 );


   VAR_6 += 8;


   return (int) FUNC_0( VAR_3.open_handle, VAR_4, (uint32_t)VAR_6, VAR_1, ((void*)0) );
}
