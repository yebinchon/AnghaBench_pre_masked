
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_bus_type {int (* probe ) (char const*,char*) ;int root; } ;


 scalar_t__ FUNC_0 (char**) ;
 int FUNC_1 (char**) ;
 int VAR_0 ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char const*,char*) ;
 char** FUNC_4 (int ,int ,char const*,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct xen_bus_type *VAR_1, const char *VAR_2)
{
 int VAR_3 = 0;
 char **VAR_4;
 unsigned int VAR_5 = 0;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_0, VAR_1->root, VAR_2, &VAR_5);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_3 = VAR_1->probe(VAR_2, VAR_4[VAR_6]);
  if (VAR_3)
   break;
 }
 FUNC_2(VAR_4);
 return VAR_3;
}
