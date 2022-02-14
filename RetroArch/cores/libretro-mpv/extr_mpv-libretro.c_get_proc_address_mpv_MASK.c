
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* get_proc_address ) (char const*) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static void *FUNC_2(void *VAR_2, const char *VAR_3)
{



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
 void *VAR_4 = (void *) VAR_1.get_proc_address(VAR_3);
#pragma GCC diagnostic pop

 if(VAR_4 == ((void*)0))
  FUNC_0(VAR_0, "Failure obtaining %s proc address\n", VAR_3);

 return VAR_4;
}
