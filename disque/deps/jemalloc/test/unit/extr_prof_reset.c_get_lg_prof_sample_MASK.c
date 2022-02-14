
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (char*,size_t*,size_t*,int *,int ) ;

__attribute__((used)) static size_t
FUNC_2(void)
{
 size_t VAR_0;
 size_t VAR_1 = sizeof(size_t);

 FUNC_0(FUNC_1("prof.lg_sample", &VAR_0, &VAR_1, ((void*)0), 0), 0,
     "Unexpected mallctl failure while reading profiling sample rate");
 return (VAR_0);
}
