
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; } ;
struct TYPE_6__ {TYPE_1__ bulk; } ;
struct TYPE_7__ {scalar_t__ event_type; TYPE_2__ u; } ;
typedef TYPE_3__ MMAL_DBG_ENTRY_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,size_t,char*,char const*,int) ;

__attribute__((used)) static void FUNC_1(MMAL_DBG_ENTRY_T *VAR_1,
                    char *VAR_2,
                    size_t VAR_3)
{
   const char *VAR_4 = VAR_1->event_type == VAR_0 ? "tx" : "rx";
   FUNC_0(VAR_2,VAR_3,"bulk %s len %d", VAR_4, VAR_1->u.bulk.len);
}
