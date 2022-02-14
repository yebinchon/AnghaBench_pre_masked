
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ transfer_len ;
struct TYPE_6__ {int cur_xid; int response_event; int open_handle; } ;
struct TYPE_5__ {int xid; scalar_t__ cmd_code; scalar_t__* params; scalar_t__ data; } ;
typedef TYPE_1__ FILESERV_MSG_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__,int *,scalar_t__) ;
 TYPE_4__ VAR_7 ;
 scalar_t__ FUNC_2 (int ,int *,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(FILESERV_MSG_T* VAR_8, uint16_t VAR_9, uint32_t VAR_10, uint8_t* VAR_11 )
{
   uint32_t VAR_12;
   int VAR_13;
   uint32_t VAR_14 = 0;
   uint32_t VAR_15 = 0;
   uint32_t VAR_16 = 0;
   int VAR_17 = -1;



   if(!FUNC_5(VAR_10 <= VAR_1))
      return -1;

   VAR_12 = VAR_7.cur_xid + 1;
   VAR_12 &= 0x7fffffffUL;
   VAR_7.cur_xid = VAR_12;

   VAR_8->xid = VAR_7.cur_xid;


   VAR_8->cmd_code = VAR_9;

   VAR_8->params[2] = VAR_10;


   VAR_13 = 24;


   if(VAR_10 <= VAR_2) {
      FUNC_1(VAR_8->data, VAR_11, VAR_10);
      VAR_8->params[3] = 0;
      VAR_13 += VAR_10;

      if(FUNC_3( VAR_7.open_handle, VAR_8, (uint32_t)VAR_13, VAR_5, ((void*)0) ) != 0)
         return -1;


      if(FUNC_4(&VAR_7.response_event) == VAR_6 &&
         VAR_8->cmd_code != VAR_3 && VAR_8->params[0] == VAR_10)
      {

         VAR_17 = (int)VAR_8->params[0];
      }
   }
   else {

      VAR_14 = FUNC_0(VAR_11);
         VAR_8->params[3] = 0;


      VAR_16 = (VAR_10)&(~(VAR_4-1));

      VAR_15 = VAR_10-VAR_16;

      if(VAR_15) {
         FUNC_1(VAR_8->data+VAR_14, VAR_11+VAR_16, VAR_15);
         VAR_13 += VAR_15;
      }


      if(FUNC_3( VAR_7.open_handle, VAR_8, (uint32_t)VAR_13, VAR_5, ((void*)0) ) != 0)
         return -1;


      if(FUNC_2( VAR_7.open_handle,
                                   VAR_11,
                                   VAR_16,
                                   VAR_5,
                                   ((void*)0) ) != 0)
         return -1;


      if(FUNC_4(&VAR_7.response_event) == VAR_6 && VAR_8->cmd_code == VAR_0)
         VAR_17 = (int)VAR_8->params[0];
   }

   return VAR_17;
}
