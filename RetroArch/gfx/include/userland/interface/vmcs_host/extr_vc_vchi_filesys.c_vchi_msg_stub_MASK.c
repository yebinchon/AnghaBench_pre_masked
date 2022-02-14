
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int response_event; } ;
struct TYPE_5__ {scalar_t__ cmd_code; } ;
typedef TYPE_1__ FILESERV_MSG_T ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(FILESERV_MSG_T* VAR_2, uint16_t VAR_3, int VAR_4 )
{
   int VAR_5 = -1;
   FUNC_0(VAR_2, VAR_3, VAR_4);


   if(FUNC_1(&VAR_1.response_event) == VAR_0)
      VAR_5 = (int) VAR_2->cmd_code;

   return VAR_5;
}
