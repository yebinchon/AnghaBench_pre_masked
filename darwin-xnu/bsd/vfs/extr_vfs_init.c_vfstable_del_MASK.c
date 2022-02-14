
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfstable {struct vfstable* vfc_next; struct vfstable* vfc_sysctl; int * oid_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct vfstable*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vfstable*,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct vfstable*) ;
 struct vfstable* VAR_7 ;

int
FUNC_6(struct vfstable * VAR_8)
{
 struct vfstable **VAR_9;
 struct vfstable *VAR_10;
 for( VAR_9 = &VAR_7; *VAR_9; VAR_9 = &(*VAR_9)->vfc_next) {
  if (*VAR_9 == VAR_8)
   break;
 }

 if (*VAR_9 == ((void*)0))
    return(VAR_0);

 if ((*VAR_9)->vfc_sysctl) {
  FUNC_5((*VAR_9)->vfc_sysctl);
  (*VAR_9)->vfc_sysctl->oid_name = ((void*)0);
  FUNC_0((*VAR_9)->vfc_sysctl, VAR_2);
  (*VAR_9)->vfc_sysctl = ((void*)0);
 }


 VAR_10 = *VAR_9;
 *VAR_9 = (*VAR_9)->vfc_next;






 if (VAR_10 >= VAR_7 && VAR_10 < (VAR_7 + VAR_3)) {

  FUNC_1(VAR_10, sizeof(struct vfstable));
  VAR_5--;
  VAR_6--;
 } else {






  VAR_5--;
  FUNC_4();
  FUNC_0(VAR_10, VAR_2);
  FUNC_3();
 }





 return(0);
}
