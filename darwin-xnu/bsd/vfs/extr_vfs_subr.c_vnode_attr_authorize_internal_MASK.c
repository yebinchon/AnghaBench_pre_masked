
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vauth_ctx ;
typedef int mount_t ;
typedef int kauth_ace_rights_t ;
typedef int boolean_t ;
struct TYPE_10__ {int va_mode; } ;
struct TYPE_9__ {scalar_t__ va_type; int va_mode; } ;
struct TYPE_8__ {TYPE_4__* vap; TYPE_4__* dvap; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ VAR_10 ;
 TYPE_6__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,TYPE_4__*,int,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int,int *) ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_5(vauth_ctx VAR_14, mount_t VAR_15,
    kauth_ace_rights_t VAR_16, int VAR_17, boolean_t *VAR_18,
    int VAR_19, int VAR_20)
{
 int VAR_21;







 if ((VAR_21 = FUNC_2(VAR_15, VAR_14->vap, VAR_16,
     VAR_19)) != 0)
  goto out;

 if ((VAR_16 & VAR_2) &&
     !VAR_20) {
  VAR_21 = FUNC_2(VAR_15, VAR_14->dvap,
      VAR_3, 0);
  if (VAR_21)
   goto out;
 }





 VAR_16 &= ~(VAR_5 | VAR_1);
 if (VAR_16 == 0)
  goto out;






 if (!VAR_17) {

  if ((VAR_16 & VAR_2) &&
      ((VAR_21 = FUNC_3(VAR_14, VAR_20)) != 0))
      goto out;


  if ((VAR_16 & ~VAR_2) &&
      (VAR_21 = FUNC_4(VAR_14, VAR_16, VAR_16 & VAR_2, VAR_18)) != 0)
   goto out;
 } else {




  if ((VAR_16 & VAR_4) &&
      (VAR_14->vap->va_type == VAR_10) &&
      FUNC_1(VAR_14->vap, VAR_12) &&
      !(VAR_14->vap->va_mode & (VAR_8 | VAR_6 | VAR_7))) {
   VAR_21 = VAR_0;
   FUNC_0("%p    DENIED - root execute requires at least one x bit in 0x%x", VAR_13, VAR_11.va_mode);
   goto out;
  }


  *VAR_18 = VAR_9;

  FUNC_0("%p    ALLOWED - caller is superuser", VAR_13);
 }
out:
 return (VAR_21);
}
