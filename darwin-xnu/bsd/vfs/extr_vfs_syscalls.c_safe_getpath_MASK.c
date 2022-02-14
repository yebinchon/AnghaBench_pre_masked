
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {char* v_name; TYPE_2__* v_mount; struct vnode* v_parent; } ;
struct TYPE_3__ {char* f_mntonname; } ;
struct TYPE_4__ {TYPE_1__ mnt_vfsstat; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,struct vnode*,char*,int) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct vnode*,char*,int*) ;

int
FUNC_5(struct vnode *VAR_2, char *VAR_3, char *VAR_4, int VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8 = VAR_5;

 *VAR_6 = 0;
 VAR_7 = FUNC_4(VAR_2, VAR_4, &VAR_8);
 if (VAR_7 == 0 && VAR_8 < (VAR_1 - 1)) {
  if (VAR_3) {
   VAR_4[VAR_8-1] = '/';
   VAR_8 += FUNC_2(&VAR_4[VAR_8], VAR_3, VAR_1-VAR_8) + 1;
   if (VAR_8 > VAR_1) {
    char *VAR_9;


    *VAR_6 = 1;
    VAR_9 = FUNC_0(VAR_4, '/');
    if (VAR_9) {
     *VAR_9 = '\0';
    }
    VAR_8 = FUNC_3(VAR_4) + 1;
   }
  }
 } else if (VAR_7 == 0) {
  *VAR_6 = 1;
 } else if (VAR_7 != 0) {
  struct vnode *VAR_10=VAR_2;

  if (VAR_7 != VAR_0) {
   FUNC_1("safe_getpath: failed to get the path for vp %p (%s) : err %d\n",
          VAR_2, VAR_2->v_name ? VAR_2->v_name : "no-name", VAR_7);
  }
  *VAR_6 = 1;

  do {
   if (VAR_10->v_parent != ((void*)0)) {
    VAR_10 = VAR_10->v_parent;
   } else if (VAR_10->v_mount) {
    FUNC_2(VAR_4, VAR_10->v_mount->mnt_vfsstat.f_mntonname, VAR_5);
    break;
   } else {

    FUNC_2(VAR_4, "/", VAR_5);
    VAR_8 = 2;
    VAR_10 = ((void*)0);
   }

   if (VAR_10 == ((void*)0)) {
    break;
   }

   VAR_8 = VAR_5;
   VAR_7 = FUNC_4(VAR_10, VAR_4, &VAR_8);
  } while (VAR_7 == VAR_0);
 }

 return VAR_8;
}
