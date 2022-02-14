
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ncpu ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int*,size_t*,int *,int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_1;
 size_t VAR_2 = sizeof(VAR_1);

 VAR_0; FUNC_0(FUNC_1("hw.ncpu", &VAR_1, &VAR_2, ((void*)0), 0),
   "failed to query hw.ncpu");
 return VAR_1;
}
