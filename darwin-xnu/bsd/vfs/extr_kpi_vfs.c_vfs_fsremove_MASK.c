
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vfstable_t ;
struct vfstable {scalar_t__ vfc_refcount; void* vfc_descptr; scalar_t__ vfc_descsize; } ;
typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct vfstable*) ;

errno_t
FUNC_4(vfstable_t VAR_2)
{
 struct vfstable * VAR_3 = (struct vfstable *)VAR_2;
 void *VAR_4 = ((void*)0);
 errno_t VAR_5;


 FUNC_1();
 if ( VAR_3->vfc_refcount != 0 ) {
  FUNC_2();
  return VAR_0;
 }





 if (VAR_3->vfc_descptr && VAR_3->vfc_descsize) {
  VAR_4 = VAR_3->vfc_descptr;
 }
 VAR_5 = FUNC_3(VAR_3);

 FUNC_2();


 if (VAR_5 == 0 && VAR_4) {
  FUNC_0(VAR_4, VAR_1);
 }

 return(VAR_5);
}
