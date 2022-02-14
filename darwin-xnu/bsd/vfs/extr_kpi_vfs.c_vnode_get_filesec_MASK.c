
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int * uio_t ;
typedef size_t uint32_t ;
typedef TYPE_2__* kauth_filesec_t ;
struct TYPE_8__ {int acl_entrycount; } ;
struct TYPE_9__ {size_t fsec_magic; TYPE_1__ fsec_acl; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (char*,...) ;
 int VAR_5 ;
 size_t FUNC_2 (size_t) ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ,TYPE_2__*,int *) ;
 TYPE_2__* FUNC_6 (size_t) ;
 int FUNC_7 (TYPE_2__*) ;
 size_t FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int ,size_t) ;
 int * FUNC_10 (int,int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int *,size_t*,int ,int ) ;

__attribute__((used)) static int
FUNC_13(vnode_t VAR_12, kauth_filesec_t *VAR_13, vfs_context_t VAR_14)
{
 kauth_filesec_t VAR_15;
 uio_t VAR_16;
 size_t VAR_17;
 size_t VAR_18, VAR_19;
 int VAR_20;
 uint32_t VAR_21;
 uint32_t VAR_22;

 VAR_15 = ((void*)0);
 VAR_16 = ((void*)0);


 VAR_20 = FUNC_12(VAR_12, VAR_8, ((void*)0), &VAR_18, VAR_11, VAR_14);
 if (VAR_20 != 0) {

  if ((VAR_20 == VAR_1) || (VAR_20 == VAR_2) || (VAR_20 == VAR_0))
   VAR_20 = 0;

  goto out;
 }







 if (!FUNC_4(VAR_18)) {
  FUNC_1("    ERROR - Bogus kauth_fiilesec_t: %ld bytes", VAR_18);
  VAR_20 = 0;
  goto out;
 }


 VAR_17 = FUNC_2(VAR_18);
 if (VAR_17 > VAR_4) {
  FUNC_1("    ERROR - Bogus (too large) kauth_fiilesec_t: %ld bytes", VAR_18);
  VAR_20 = 0;
  goto out;
 }


 if (((VAR_15 = FUNC_6(VAR_17)) == ((void*)0)) ||
     ((VAR_16 = FUNC_10(1, 0, VAR_10, VAR_9)) == ((void*)0)) ||
     FUNC_9(VAR_16, FUNC_0(VAR_15), VAR_18)) {
  FUNC_1("    ERROR - could not allocate iov to read ACL");
  VAR_20 = VAR_3;
  goto out;
 }


 VAR_19 = VAR_18;
 if ((VAR_20 = FUNC_12(VAR_12,
   VAR_8,
   VAR_16,
   &VAR_19,
   VAR_11,
   VAR_14)) != 0) {


  if ((VAR_20 == VAR_1) || (VAR_20 == VAR_2) || (VAR_20 == VAR_0))
   VAR_20 = 0;

  goto out;
 }







 if (VAR_19 < FUNC_3(0)) {
  FUNC_1("ACL - DATA TOO SMALL (%d)", VAR_19);
  goto out;
 }


 VAR_21 = FUNC_8(VAR_6);
 if (VAR_15->fsec_magic != VAR_21) {
  FUNC_1("ACL - BAD MAGIC %x", VAR_21);
  goto out;
 }


 VAR_22 = FUNC_8(VAR_15->fsec_acl.acl_entrycount);
 if (VAR_22 != VAR_7) {
  if (VAR_22 > VAR_4) {
   FUNC_1("ACL - BAD ENTRYCOUNT %x", VAR_22);
   goto out;
  }
      if (FUNC_3(VAR_22) > VAR_19) {
   FUNC_1("ACL - BUFFER OVERFLOW (%d entries too big for %d)", VAR_22, VAR_19);
   goto out;
  }
 }

 FUNC_5(VAR_5, VAR_15, ((void*)0));

 *VAR_13 = VAR_15;
 VAR_15 = ((void*)0);
 VAR_20 = 0;
out:
 if (VAR_15 != ((void*)0))
  FUNC_7(VAR_15);
 if (VAR_16 != ((void*)0))
  FUNC_11(VAR_16);
 if (VAR_20)
  *VAR_13 = ((void*)0);
 return(VAR_20);
}
