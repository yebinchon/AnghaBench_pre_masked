
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ int32_t ;
struct TYPE_6__ {int cur_xid; int open_handle; int response_event; } ;
struct TYPE_5__ {int xid; scalar_t__ cmd_code; scalar_t__* params; int * data; } ;
typedef TYPE_1__ FILESERV_MSG_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 TYPE_4__ VAR_8 ;
 scalar_t__ FUNC_2 (int ,int *,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(FILESERV_MSG_T* VAR_9, uint16_t VAR_10, uint32_t VAR_11, uint8_t* VAR_12 )
{
   uint32_t VAR_13;
   int VAR_14;
   uint32_t VAR_15;
   uint32_t VAR_16;
   int32_t VAR_17;



   if(!FUNC_5(VAR_11 <= VAR_1))
      return -1;


   VAR_15 = FUNC_0(VAR_12);

   VAR_13 = VAR_8.cur_xid + 1;
   VAR_13 &= 0x7fffffffUL;
   VAR_8.cur_xid = VAR_13;

   VAR_9->xid = VAR_8.cur_xid;


   VAR_9->cmd_code = VAR_10;

   VAR_9->params[2] = VAR_11;

   VAR_9->params[3] = VAR_15;


   VAR_14 = 24;

   if(FUNC_3( VAR_8.open_handle, VAR_9, (uint32_t)VAR_14, VAR_6, ((void*)0) ) != 0)
      return -1;


   if(FUNC_4(&VAR_8.response_event) != VAR_7 || VAR_9->cmd_code == VAR_3)
      return -1;


   VAR_16 = VAR_9->params[0];

   if(!FUNC_5(VAR_16 <= VAR_1))
      return -1;


   if(VAR_9->cmd_code == VAR_4) {
      if(!FUNC_5(VAR_16 <= VAR_2))
         return -1;

      FUNC_1(VAR_12, VAR_9->data, VAR_16);
      return (int) VAR_16;
   }
   if(VAR_9->cmd_code == VAR_0){

      uint32_t VAR_18 = VAR_9->params[1];

      uint32_t VAR_19 = (VAR_16-VAR_15-VAR_18);

      VAR_17 = FUNC_2(VAR_8.open_handle,
                              VAR_12,
                              VAR_19,
                              VAR_5,
                              ((void*)0) );
      if(!FUNC_5(VAR_17 == 0))
         return -1;

      VAR_12+=VAR_19;


      if(VAR_18)
         FUNC_1(VAR_12, &VAR_9->data[VAR_15], VAR_18);
   }
   else {
      return -1;
   }

   return (int) VAR_16;
}
