
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_4__* vnode_t ;
struct vnode_attr {char* va_name; TYPE_3__* va_acl; } ;
struct attrlist {int commonattr; int forkattr; } ;
typedef int ssize_t ;
typedef int errno_t ;
struct TYPE_12__ {TYPE_2__* v_mount; } ;
struct TYPE_11__ {scalar_t__ acl_entrycount; } ;
struct TYPE_9__ {int* f_mntonname; } ;
struct TYPE_10__ {TYPE_1__ mnt_vfsstat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct vnode_attr*,int ) ;
 int FUNC_2 (TYPE_4__*,char*,int,int*,int ,int ) ;
 int FUNC_3 (char*,char const**,int*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (char const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 () ;
 char* FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static errno_t
FUNC_9(vnode_t VAR_9, struct attrlist *VAR_10, struct vnode_attr *VAR_11,
   ssize_t *VAR_12, char *VAR_13, ssize_t *VAR_14,
   char *VAR_15, ssize_t *VAR_16, const char **VAR_17,
   const char **VAR_18, ssize_t *VAR_19)
{
 int VAR_20 = 0;

 *VAR_12 = 0;

 if (VAR_10->commonattr & VAR_3) {
  if (FUNC_1(VAR_11, VAR_8)) {
   VAR_11->va_name[VAR_6-1] = '\0';
   *VAR_18 = VAR_11->va_name;
   *VAR_19 = FUNC_5(*VAR_18);
  } else if (VAR_9) {

   if (FUNC_8(VAR_9)) {
    if (VAR_9->v_mount->mnt_vfsstat.f_mntonname[1] == 0x00 &&
      VAR_9->v_mount->mnt_vfsstat.f_mntonname[0] == '/') {






     *VAR_18 = *VAR_17 = FUNC_7(VAR_9);
     if (*VAR_18 == ((void*)0)) {

      *VAR_18 = &VAR_9->v_mount->mnt_vfsstat.f_mntonname[0];
     }
     *VAR_19 = FUNC_5(*VAR_18);
    }
    else {
     FUNC_3(VAR_9->v_mount->mnt_vfsstat.f_mntonname, VAR_18, VAR_19);
    }
   }
   else {
    *VAR_18 = *VAR_17 = FUNC_7(VAR_9);
    *VAR_19 = 0;
    if (*VAR_18 != ((void*)0)) {
     *VAR_19 = FUNC_5(*VAR_18);
    }
   }
  } else {
   *VAR_19 = 0;
  }
  *VAR_12 += FUNC_4(*VAR_19 + 1, 4);
 }





 if (VAR_9 && (VAR_10->commonattr & VAR_2)) {
  int VAR_21 = VAR_6;
  int VAR_22;


  VAR_22 = FUNC_2(VAR_9, VAR_13, VAR_21, &VAR_21, 0, FUNC_6());
  if (VAR_22) {
   VAR_20 = VAR_22;
   goto out;
  }
  *VAR_14 = 0;
  if (VAR_13){
   *VAR_14 = FUNC_5(VAR_13);
  }
  *VAR_12 += FUNC_4(((*VAR_14) + 1), 4);
 }




 if (VAR_9 && (VAR_10->forkattr & VAR_0)) {
  int VAR_23;
  int VAR_24;


  VAR_24 = FUNC_2(VAR_9, VAR_15, VAR_6, &VAR_23, VAR_4, FUNC_6());
  if (VAR_24) {
   VAR_20 = VAR_24;
   goto out;
  }


  *VAR_16 = VAR_23 - 1;
  *VAR_12 += FUNC_4(VAR_23, 4);
 }







 if ((VAR_10->commonattr & VAR_1) &&
   FUNC_1(VAR_11, VAR_7) &&
   (VAR_11->va_acl != ((void*)0))) {





  if (VAR_11->va_acl->acl_entrycount == VAR_5) {
   *VAR_12 += FUNC_4((FUNC_0(0)), 4);
  }
  else {
   *VAR_12 += FUNC_4 ((FUNC_0(VAR_11->va_acl->acl_entrycount)), 4);
  }
 }

out:
 return (VAR_20);
}
