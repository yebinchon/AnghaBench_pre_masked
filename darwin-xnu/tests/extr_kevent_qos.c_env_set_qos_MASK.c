
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* qos_class_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (char**,char*,int ,char const*) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(char **VAR_5, qos_class_t VAR_6[], const char *VAR_7[], const char *VAR_8)
{
 int VAR_9;
 char *VAR_10, *VAR_11;
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_1; FUNC_0(FUNC_1(&VAR_10, "%d=%s", VAR_2[VAR_9] , VAR_6[VAR_9]),
   ((void*)0));
  VAR_1; FUNC_0(
   FUNC_1(&VAR_11, "%d=%s", VAR_3[VAR_9], VAR_7[VAR_9]), ((void*)0));
  VAR_5[2 * VAR_9] = VAR_10;
  VAR_5[2 * VAR_9 + 1] = VAR_11;
 }
 VAR_1; FUNC_0(FUNC_1(&VAR_5[2 * VAR_9], "%d=%s", VAR_4, VAR_8),
   ((void*)0));
 VAR_5[2 * VAR_9 + 1] = ((void*)0);
}
