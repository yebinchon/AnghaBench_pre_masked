
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int supported ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_1;
 int VAR_2 = 0;
 size_t VAR_3 = sizeof(VAR_2);

 VAR_1 = FUNC_1("kern.monotonic.supported", &VAR_2, &VAR_3,
   ((void*)0), 0);
 if (VAR_1 < 0) {
  VAR_0;
  FUNC_0("could not find \"kern.monotonic.supported\" sysctl");
 }

 if (!VAR_2) {
  FUNC_0("monotonic is not supported on this platform");
 }
}
