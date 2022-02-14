
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vnode* vnode_t ;
struct vnode {scalar_t__ v_type; int v_specflags; scalar_t__ v_rdev; struct specinfo* v_specinfo; struct vnode* v_specnext; struct vnode** v_hashchain; } ;
struct specinfo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct vnode*,int) ;

__attribute__((used)) static void
FUNC_5(vnode_t VAR_5, int VAR_6)
{
 struct vnode *VAR_7;
 struct vnode *VAR_8;






 FUNC_4(VAR_5, VAR_6 | VAR_0);





 if ((VAR_5->v_type == VAR_3 || VAR_5->v_type == VAR_4) && VAR_5->v_specinfo != 0) {
   FUNC_1();
   if (*VAR_5->v_hashchain == VAR_5) {
    *VAR_5->v_hashchain = VAR_5->v_specnext;
   } else {
    for (VAR_7 = *VAR_5->v_hashchain; VAR_7; VAR_7 = VAR_7->v_specnext) {
     if (VAR_7->v_specnext != VAR_5)
      continue;
     VAR_7->v_specnext = VAR_5->v_specnext;
     break;
    }
   if (VAR_7 == ((void*)0))
    FUNC_3("missing bdev");
   }
   if (VAR_5->v_specflags & VAR_2) {
    VAR_8 = ((void*)0);
    for (VAR_7 = *VAR_5->v_hashchain; VAR_7; VAR_7 = VAR_7->v_specnext) {
     if (VAR_7->v_rdev != VAR_5->v_rdev ||
         VAR_7->v_type != VAR_5->v_type)
      continue;
     if (VAR_8)
      break;
     VAR_8 = VAR_7;
    }
    if (VAR_8 == ((void*)0))
     FUNC_3("missing alias");
    if (VAR_7 == ((void*)0))
     VAR_8->v_specflags &= ~VAR_2;
    VAR_5->v_specflags &= ~VAR_2;
   }
   FUNC_2();
   {
   struct specinfo *VAR_9 = VAR_5->v_specinfo;
   VAR_5->v_specinfo = ((void*)0);
   FUNC_0((void *)VAR_9, sizeof(struct specinfo), VAR_1);
   }
 }
}
