
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int kauth_cred_t ;
typedef scalar_t__ id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int*) ;

int
FUNC_2(kauth_cred_t VAR_4, id_t VAR_5, id_t VAR_6, mode_t VAR_7, mode_t VAR_8)
{
 int VAR_9;
 mode_t VAR_10 = (VAR_7 & VAR_3);
 mode_t VAR_11 = (VAR_7 & VAR_1) << 3;
 mode_t VAR_12 = (VAR_7 & VAR_2) << 6;




 if (FUNC_0(VAR_4) == VAR_5 && (VAR_8 & VAR_10) == VAR_8)
  return (0);
 if ((VAR_8 & VAR_11 & VAR_12) == VAR_8) {
  return (0);
 } else {



  if ((VAR_8 & VAR_11) != VAR_8) {





   if (!FUNC_1(VAR_4, VAR_6, &VAR_9) && VAR_9) {



    return (VAR_0);
   } else {
    if ((VAR_8 & VAR_12) != VAR_8) {



     return (VAR_0);
    } else {



     return (0);
    }
   }
  } else {






   if (!FUNC_1(VAR_4, VAR_6, &VAR_9) && VAR_9) {



    return (0);
   } else {
    if ((VAR_8 & VAR_12) != VAR_8) {



     return (VAR_0);
    } else {



     return (0);
    }
   }
  }
 }
}
