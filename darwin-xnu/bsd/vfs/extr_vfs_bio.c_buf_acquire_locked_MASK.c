
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int tv_sec; int tv_nsec; } ;
typedef scalar_t__ errno_t ;
typedef int caddr_t ;
typedef TYPE_1__* buf_t ;
struct TYPE_4__ {int b_tag; int b_owner; int b_lflags; int b_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,int,char*,struct timespec*) ;

__attribute__((used)) static errno_t
FUNC_5(buf_t VAR_14, int VAR_15, int VAR_16, int VAR_17)
{
 errno_t VAR_18;
 struct timespec VAR_19;

 if (FUNC_0(VAR_14->b_flags, VAR_6)) {
         if ((VAR_15 & VAR_2))
   return (VAR_9);
 } else {
         if ((VAR_15 & VAR_3))
   return (VAR_9);
 }
        if (FUNC_0(VAR_14->b_lflags, VAR_4)) {





         if (VAR_15 & VAR_0)
   return (VAR_8);
         FUNC_1(VAR_14->b_lflags, VAR_5);


  VAR_19.tv_sec = (VAR_17/100);
  VAR_19.tv_nsec = (VAR_17 % 100) * 10 * VAR_10 * 1000;
  VAR_18 = FUNC_4((caddr_t)VAR_14, VAR_13, VAR_16 | (VAR_11 + 1), "buf_acquire", &VAR_19);

  if (VAR_18)
   return (VAR_18);
  return (VAR_7);
 }
 if (VAR_15 & VAR_1)
         FUNC_2(VAR_14);
 FUNC_1(VAR_14->b_lflags, VAR_4);
 VAR_12++;





 return (0);
}
