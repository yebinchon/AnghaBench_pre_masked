
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {scalar_t__ nodev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (struct v9fs_session_info*) ;

__attribute__((used)) static int FUNC_7(struct v9fs_session_info *VAR_12, int VAR_13)
{
 int VAR_14;
 VAR_14 = VAR_13 & 0777;
 if (FUNC_2(VAR_13))
  VAR_14 |= VAR_1;
 if (FUNC_6(VAR_12)) {
  if (FUNC_4(VAR_13))
   VAR_14 |= VAR_8;
  if (VAR_12->nodev == 0) {
   if (FUNC_5(VAR_13))
    VAR_14 |= VAR_7;
   if (FUNC_3(VAR_13))
    VAR_14 |= VAR_3;
   if (FUNC_0(VAR_13))
    VAR_14 |= VAR_0;
   if (FUNC_1(VAR_13))
    VAR_14 |= VAR_0;
  }

  if ((VAR_13 & VAR_10) == VAR_10)
   VAR_14 |= VAR_5;
  if ((VAR_13 & VAR_9) == VAR_9)
   VAR_14 |= VAR_4;
  if ((VAR_13 & VAR_11) == VAR_11)
   VAR_14 |= VAR_6;
  if ((VAR_13 & VAR_2))
   VAR_14 |= VAR_2;
 }

 return VAR_14;
}
