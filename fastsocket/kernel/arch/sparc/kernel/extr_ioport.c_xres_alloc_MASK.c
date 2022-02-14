
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xresource {int xflag; } ;


 int VAR_0 ;
 struct xresource* VAR_1 ;

__attribute__((used)) static struct xresource *FUNC_0(void) {
 struct xresource *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->xflag == 0) {
   VAR_2->xflag = 1;
   return VAR_2;
  }
  VAR_2++;
 }
 return ((void*)0);
}
