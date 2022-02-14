
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int cachesize ;
typedef int cacheconfig ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*,int*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_4(int VAR_2, int *VAR_3, int *VAR_4)
{
 size_t VAR_5;
 int VAR_6;
 int VAR_7;
 int64_t VAR_8[VAR_0];
 int64_t VAR_9[VAR_0];

 FUNC_1("Autoconfiguring...\n");

 VAR_5 = sizeof(VAR_8);
 if (FUNC_3("hw.cacheconfig",
    &VAR_8[0], &VAR_5, ((void*)0), 0) != 0) {
  FUNC_2("Unable to get hw.cacheconfig, %d\n", VAR_1);
  FUNC_0(1);
 }
 VAR_5 = sizeof(VAR_9);
 if (FUNC_3("hw.cachesize",
    &VAR_9[0], &VAR_5, ((void*)0), 0) != 0) {
  FUNC_2("Unable to get hw.cachesize, %d\n", VAR_1);
  FUNC_0(1);
 }




 for (VAR_7 = VAR_0 - 1; VAR_7 > 0; VAR_7--)
  if (VAR_8[VAR_7] != 0)
   break;





 *VAR_3 = VAR_9[VAR_7] * 9 / (VAR_2 * 4096 * 10);
 FUNC_1("  L%d (LLC) cache %qd bytes: "
  "using %d buffers of size %d bytes\n",
  VAR_7, VAR_9[VAR_7], *VAR_3, (VAR_2 * 4096));




 *VAR_4 = VAR_8[0]/VAR_8[VAR_7];
 FUNC_1("  %qd cpus; %qd cpus per L%d cache: using %d sets\n",
  VAR_8[0], VAR_8[VAR_7], VAR_7, *VAR_4);
}
