
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int msgid; } ;
struct TYPE_7__ {TYPE_1__ header; } ;
struct TYPE_8__ {TYPE_2__ msg; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
typedef TYPE_4__ MMAL_DBG_ENTRY_T ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,char*,int,char*) ;

__attribute__((used)) static void FUNC_2(MMAL_DBG_ENTRY_T *VAR_0,
                   char *VAR_1,
                   size_t VAR_2)
{
   uint32_t VAR_3 = VAR_0->u.msg.header.msgid;
   FUNC_1(VAR_1,VAR_2,"msgid %d (%s)", VAR_3, FUNC_0(VAR_3));
}
