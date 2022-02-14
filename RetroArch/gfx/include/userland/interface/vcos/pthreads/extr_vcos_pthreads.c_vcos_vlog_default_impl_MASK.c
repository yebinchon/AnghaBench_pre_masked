
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
typedef size_t VCOS_LOG_LEVEL_T ;
struct TYPE_4__ {scalar_t__ want_prefix; } ;
struct TYPE_5__ {char* name; TYPE_1__ flags; } ;
typedef TYPE_2__ VCOS_LOG_CAT_T ;


 int FUNC_0 (int ,char*,char const*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (char*,int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *,char const*,int ) ;

void FUNC_7(const VCOS_LOG_CAT_T *VAR_4, VCOS_LOG_LEVEL_T VAR_5, const char *VAR_6, va_list VAR_7)
{
   (void)VAR_5;
      if(((void*)0) != VAR_0)
      {
         if (VAR_4->flags.want_prefix)
            FUNC_2( VAR_0, "%s: ", VAR_4->name );
         FUNC_6(VAR_0, VAR_6, VAR_7);
         FUNC_3("\n", VAR_0);
         FUNC_1(VAR_0);
      }




}
