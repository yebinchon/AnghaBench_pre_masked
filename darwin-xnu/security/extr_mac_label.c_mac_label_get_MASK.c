
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct label {TYPE_1__* l_perpolicy; } ;
struct TYPE_2__ {scalar_t__ l_ptr; } ;


 int FUNC_0 (int ,char*) ;

intptr_t
FUNC_1(struct label *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0 != ((void*)0), ("mac_label_get: NULL label"));

 return ((intptr_t) (VAR_0->l_perpolicy[VAR_1].l_ptr));
}
