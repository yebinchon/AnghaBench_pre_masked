
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ network_mysqld_type_t ;
typedef int gsize ;
typedef int GString ;


 int FUNC_0 (int *,char const*,int ) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(network_mysqld_type_t *VAR_0, const char *VAR_1, gsize VAR_2) {
 GString *VAR_3;

 if (((void*)0) == VAR_0->data) {
  VAR_0->data = FUNC_1(VAR_2);
 }

 VAR_3 = VAR_0->data;

 FUNC_0(VAR_3, VAR_1, VAR_2);

 return 0;
}
