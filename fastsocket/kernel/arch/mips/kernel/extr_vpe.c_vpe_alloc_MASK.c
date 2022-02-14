
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vpe* vpe_handle ;
struct vpe {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vpe* FUNC_0 (int) ;

vpe_handle FUNC_1(void)
{
 int VAR_2;
 struct vpe *VAR_3;


 for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++) {
  if ((VAR_3 = FUNC_0(VAR_2)) != ((void*)0)) {
   VAR_3->state = VAR_1;
   return VAR_3;
  }
 }
 return ((void*)0);
}
