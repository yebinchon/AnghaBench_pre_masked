
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct v9fs_session_info*) ;

__attribute__((used)) static int FUNC_1(struct v9fs_session_info *VAR_17, int VAR_18)
{
 int VAR_19;

 VAR_19 = VAR_18 & 0777;

 if ((VAR_18 & VAR_1) == VAR_1)
  VAR_19 |= VAR_9;
 else if ((VAR_18 & VAR_7) && (FUNC_0(VAR_17)))
  VAR_19 |= VAR_11;
 else if ((VAR_18 & VAR_6) && (FUNC_0(VAR_17))
   && (VAR_17->nodev == 0))
  VAR_19 |= VAR_13;
 else if ((VAR_18 & VAR_2) && (FUNC_0(VAR_17))
   && (VAR_17->nodev == 0))
  VAR_19 |= VAR_10;
 else if ((VAR_18 & VAR_0) && (FUNC_0(VAR_17))
   && (VAR_17->nodev == 0))
  VAR_19 |= VAR_8;
 else
  VAR_19 |= VAR_12;

 if (FUNC_0(VAR_17)) {
  if ((VAR_18 & VAR_4) == VAR_4)
   VAR_19 |= VAR_15;

  if ((VAR_18 & VAR_3) == VAR_3)
   VAR_19 |= VAR_14;

  if ((VAR_18 & VAR_5) == VAR_5)
   VAR_19 |= VAR_16;
 }

 return VAR_19;
}
