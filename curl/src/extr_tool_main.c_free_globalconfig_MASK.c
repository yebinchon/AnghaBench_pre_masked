
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct GlobalConfig {int libcurl; int * trace_stream; scalar_t__ trace_fopened; int * errors; scalar_t__ errors_fopened; int trace_dump; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct GlobalConfig *VAR_0)
{
  FUNC_0(VAR_0->trace_dump);

  if(VAR_0->errors_fopened && VAR_0->errors)
    FUNC_1(VAR_0->errors);
  VAR_0->errors = ((void*)0);

  if(VAR_0->trace_fopened && VAR_0->trace_stream)
    FUNC_1(VAR_0->trace_stream);
  VAR_0->trace_stream = ((void*)0);

  FUNC_0(VAR_0->libcurl);
}
