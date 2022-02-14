
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ sb_lkid; } ;
struct gfs2_glock {int gl_flags; TYPE_1__ gl_lksb; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int VAR_11 ;
 unsigned int const VAR_12 ;
 unsigned int const VAR_13 ;
 unsigned int const VAR_14 ;
 unsigned int const VAR_15 ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static u32 FUNC_2(struct gfs2_glock *VAR_16, const unsigned int VAR_17,
        const int VAR_18)
{
 u32 VAR_19 = VAR_8;
 u32 VAR_20 = VAR_16->gl_lksb.sb_lkid;

 if (VAR_17 & VAR_14)
  VAR_19 |= VAR_5;

 if (VAR_17 & VAR_15) {
  VAR_19 |= VAR_5;
  VAR_19 |= VAR_6;
 }

 if (VAR_17 & VAR_13) {
  VAR_19 |= VAR_4;
  VAR_19 |= VAR_3;
 }

 if (VAR_17 & VAR_12) {
  if (VAR_18 == VAR_10)
   VAR_19 |= VAR_0;
  else if (VAR_18 == VAR_9)
   VAR_19 |= VAR_1;
  else
   FUNC_0();
 }

 if (VAR_20 != 0) {
  VAR_19 |= VAR_2;
  if (FUNC_1(VAR_11, &VAR_16->gl_flags))
   VAR_19 |= VAR_7;
 }

 return VAR_19;
}
