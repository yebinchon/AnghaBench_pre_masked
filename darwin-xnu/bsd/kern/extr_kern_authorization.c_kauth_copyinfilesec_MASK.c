
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int u_int32_t ;
struct kauth_ace {int dummy; } ;
typedef TYPE_1__* kauth_filesec_t ;
typedef int caddr_t ;
struct TYPE_6__ {scalar_t__ fsec_magic; int fsec_entrycount; } ;


 int FUNC_0 (int ,TYPE_1__*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int,int ,size_t) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int) ;
 int VAR_6 ;

int
FUNC_6(user_addr_t VAR_7, kauth_filesec_t *VAR_8)
{
 int VAR_9;
 kauth_filesec_t VAR_10;
 u_int32_t VAR_11;
 size_t VAR_12;

 VAR_9 = 0;
 VAR_10 = ((void*)0);
 {
  user_addr_t VAR_13 = (VAR_7 & VAR_5) + FUNC_1(0);
  user_addr_t VAR_14 = FUNC_5(VAR_13);
  VAR_11 = (VAR_14 - VAR_13) / sizeof(struct kauth_ace);
 }
 if (VAR_11 > 32)
  VAR_11 = 32;
restart:
 if ((VAR_10 = FUNC_3(VAR_11)) == ((void*)0)) {
  VAR_9 = VAR_1;
  goto out;
 }
 VAR_12 = FUNC_1(VAR_11);
 if ((VAR_9 = FUNC_2(VAR_7, (caddr_t)VAR_10, VAR_12)) != 0)
  goto out;


 if (VAR_10->fsec_magic != VAR_3) {
  VAR_9 = VAR_0;
  goto out;
 }




 if ((VAR_10->fsec_entrycount != VAR_4) &&
     (VAR_10->fsec_entrycount > VAR_11)) {
  if (VAR_10->fsec_entrycount > VAR_2) {

   VAR_9 = VAR_0;
   goto out;
  }
  VAR_11 = VAR_10->fsec_entrycount;
  FUNC_4(VAR_10);
  goto restart;
 }

out:
 if (VAR_9) {
  if (VAR_10)
   FUNC_4(VAR_10);
 } else {
  *VAR_8 = VAR_10;
  FUNC_0(VAR_6, VAR_10, VAR_12);
 }
 return(VAR_9);
}
