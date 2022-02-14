
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vpe* vpe_handle ;
struct vpe {unsigned long __start; } ;


 int FUNC_0 (struct vpe*) ;

int FUNC_1(vpe_handle VAR_0, unsigned long VAR_1)
{
 struct vpe *VAR_2 = VAR_0;

 VAR_2->__start = VAR_1;
 return FUNC_0(VAR_2);
}
