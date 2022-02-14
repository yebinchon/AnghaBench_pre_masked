
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct socket {int so_flags; int so_state; int so_snd; TYPE_1__* so_cfil; } ;
struct TYPE_2__ {int cfi_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (struct socket*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct socket*,int) ;
 int FUNC_5 (struct socket*,int*) ;
 int FUNC_6 (struct socket*) ;

int
FUNC_7(struct socket *VAR_13, int *VAR_14)
{
 int VAR_15 = 0;

 if (FUNC_1(VAR_13)) {
  return (FUNC_5(VAR_13, VAR_14));
 }

 if ((VAR_13->so_flags & VAR_10) == 0 || VAR_13->so_cfil == ((void*)0))
  goto done;

 FUNC_6(VAR_13);

 FUNC_0(VAR_6, "so %llx how %d",
  (uint64_t)FUNC_2(VAR_13), *VAR_14);




 if (*VAR_14 != VAR_9 && (VAR_13->so_state & VAR_11) != 0) {

  VAR_15 = VAR_4;
  goto done;
 }
 if (*VAR_14 != VAR_7 && (VAR_13->so_state & VAR_12) != 0) {

  VAR_15 = VAR_4;
  goto done;
 }

 if ((VAR_13->so_cfil->cfi_flags & VAR_0) != 0) {
  FUNC_0(VAR_5, "so %llx drop set",
   (uint64_t)FUNC_2(VAR_13));
  goto done;
 }




 if (*VAR_14 != VAR_9) {
  if (VAR_13->so_cfil->cfi_flags & VAR_1) {
   VAR_15 = VAR_4;
   goto done;
  }
  VAR_13->so_cfil->cfi_flags |= VAR_1;
  FUNC_4(VAR_13, VAR_7);
 }



 if (*VAR_14 != VAR_7) {
  if (VAR_13->so_cfil->cfi_flags & VAR_2) {
   VAR_15 = VAR_4;
   goto done;
  }
  VAR_13->so_cfil->cfi_flags |= VAR_2;
  FUNC_4(VAR_13, VAR_9);





  if (FUNC_3(&VAR_13->so_snd) != 0) {





   if (*VAR_14 == VAR_9) {
    VAR_15 = VAR_3;
   } else if (*VAR_14 == VAR_8) {
    *VAR_14 = VAR_7;
   }
  }
 }
done:
 return (VAR_15);
}
