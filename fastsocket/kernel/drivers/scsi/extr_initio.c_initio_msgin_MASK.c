
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_control {int flags; } ;
struct initio_host {scalar_t__ phase; scalar_t__ addr; struct target_control* active_tc; } ;






 scalar_t__ VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct initio_host*) ;
 int FUNC_2 (struct initio_host*) ;
 int FUNC_3 (struct initio_host*) ;
 int FUNC_4 (struct initio_host*) ;
 int FUNC_5 (struct initio_host*) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (struct initio_host*) ;

__attribute__((used)) static int FUNC_9(struct initio_host * VAR_13)
{
 struct target_control *VAR_14;

 for (;;) {
  FUNC_6(VAR_3, VAR_13->addr + VAR_10);

  FUNC_7(1, VAR_13->addr + VAR_9);
  FUNC_6(VAR_7, VAR_13->addr + VAR_8);
  if (FUNC_8(VAR_13) == -1)
   return -1;

  switch (FUNC_0(VAR_13->addr + VAR_11)) {
  case 134:
   FUNC_6(VAR_4, VAR_13->addr + VAR_8);
   return FUNC_4(VAR_13);
  case 128:
  case 129:
  case 131:
   FUNC_1(VAR_13);
   break;
  case 130:
   FUNC_6((FUNC_0(VAR_13->addr + VAR_12) & (VAR_5 | 7)),
    VAR_13->addr + VAR_12);
   VAR_14 = VAR_13->active_tc;
   if ((VAR_14->flags & (VAR_2 | VAR_1)) == 0)
    FUNC_6(((FUNC_0(VAR_13->addr + VAR_12) & (VAR_5 | 7)) | VAR_6),
     VAR_13->addr + VAR_12);
   FUNC_1(VAR_13);
   break;
  case 133:
   FUNC_2(VAR_13);
   break;
  case 132:
   FUNC_1(VAR_13);
   break;
  case 135:
   FUNC_6(VAR_3, VAR_13->addr + VAR_10);
   FUNC_6(VAR_4, VAR_13->addr + VAR_8);
   return FUNC_5(VAR_13);
  default:
   FUNC_3(VAR_13);
   break;
  }
  if (VAR_13->phase != VAR_0)
   return VAR_13->phase;
 }

}
