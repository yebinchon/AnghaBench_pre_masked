
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int str; int len; } ;
typedef TYPE_1__ GString ;


 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int ) ;

GString *FUNC_2(GString *VAR_0) {
 GString *VAR_1 = FUNC_1(VAR_0->len);

 FUNC_0(VAR_1, VAR_0->str);

 return VAR_1;
}
