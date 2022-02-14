
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vnode_t ;
typedef int vm_size_t ;
typedef int vfs_context_t ;
typedef int user_ssize_t ;
typedef int uint64_t ;
struct mount {int mnt_flag; int mnt_vnodecovered; } ;
typedef int ino64_t ;
typedef int dbg_parms ;
typedef int * caddr_t ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct mount*,scalar_t__*,int ) ;
 int FUNC_2 (struct mount*,int ,scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__,int *,int ,int*,int,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (long*,int,void*,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (char*,int *,int) ;
 int FUNC_7 (char*,int ,int) ;
 struct mount* FUNC_8 (int,int) ;
 int VAR_13 ;
 scalar_t__ FUNC_9 (struct mount*,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct mount*) ;
 struct mount* FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static int FUNC_14(
 vfs_context_t VAR_14, int VAR_15, uint64_t VAR_16,
 vm_size_t VAR_17, caddr_t VAR_18, int *VAR_19)
{
 int VAR_20;
 struct mount *VAR_21 = ((void*)0);
 vnode_t VAR_22;
 int VAR_23;
 int VAR_24;

 unsigned int VAR_25 = 0x10;

 if (VAR_17 > VAR_11) {
  return (VAR_3);
 }

 if (VAR_18 == ((void*)0)) {
  return (VAR_5);
 }

retry:
 if ((VAR_21 = FUNC_8(VAR_15, 1)) == ((void*)0)) {
  VAR_20 = VAR_6;
  return VAR_6;
 }

unionget:
 if (VAR_16 == 2) {
  VAR_20 = FUNC_1(VAR_21, &VAR_22, VAR_14);
 } else {
  VAR_20 = FUNC_2(VAR_21, (ino64_t)VAR_16, &VAR_22, VAR_14);
 }

 if (VAR_20 == VAR_4 && (VAR_21->mnt_flag & VAR_9)) {





  struct mount *VAR_26 = VAR_21;
  VAR_21 = FUNC_12(VAR_26->mnt_vnodecovered);
  FUNC_11(VAR_26);
  if (FUNC_9(VAR_21, VAR_8) == 0)
   goto unionget;
 } else {
  FUNC_11(VAR_21);
 }

 if (VAR_20) {
  return VAR_20;
 }
 VAR_24 = FUNC_10(VAR_14) ? VAR_0 : 0;
 VAR_24 |= VAR_1;
 VAR_20 = FUNC_3(VAR_22, VAR_18, VAR_17, &VAR_23, VAR_24, VAR_14);
 FUNC_13(VAR_22);

 if (VAR_20) {

  if (VAR_20 == VAR_2) {
   --VAR_25;
   if (VAR_25 > 0)
    goto retry;

   VAR_20 = VAR_4;
  }
  goto out;
 }

 FUNC_0(VAR_13, VAR_18);

 if (VAR_12) {
  long VAR_27[VAR_10];
  int VAR_28;

  VAR_28 = (int)sizeof(VAR_27);

        if (VAR_23 < VAR_28) {
   FUNC_6((char *)VAR_27, VAR_18, VAR_23);
   FUNC_7((char *)VAR_27 + VAR_23, 0, VAR_28 - VAR_23);

   VAR_28 = VAR_23;
  } else {
   FUNC_6((char *)VAR_27, VAR_18 + (VAR_23 - VAR_28), VAR_28);
  }

  FUNC_4(VAR_27, VAR_28, (void *)VAR_22,
    VAR_7);
 }

 *VAR_19 = (user_ssize_t)VAR_23;

out:
 return (VAR_20);
}
