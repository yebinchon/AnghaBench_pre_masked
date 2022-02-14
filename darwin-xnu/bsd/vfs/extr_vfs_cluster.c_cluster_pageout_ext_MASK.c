
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef int upl_t ;
typedef scalar_t__ upl_offset_t ;
struct clios {int dummy; } ;
typedef int off_t ;
typedef int buf_t ;
struct TYPE_6__ {TYPE_1__* v_mount; } ;
struct TYPE_5__ {int mnt_flag; } ;


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
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int,int,int,int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__,int,int,int,int ,struct clios*,int (*) (buf_t,void*),void*) ;
 int FUNC_3 (int ,scalar_t__,int,int ) ;

int
FUNC_4(vnode_t VAR_19, upl_t VAR_20, upl_offset_t VAR_21, off_t VAR_22,
  int VAR_23, off_t VAR_24, int VAR_25, int (*VAR_26)(buf_t, void *), void *VAR_27)
{
 int VAR_28;
 int VAR_29;
        off_t VAR_30;
 int VAR_31;

 VAR_31 = VAR_4 | VAR_5;

 if ((VAR_25 & VAR_15) == 0)
  VAR_31 |= VAR_0;
 if ((VAR_25 & VAR_17) == 0)
  VAR_31 |= VAR_1;
 if ((VAR_25 & VAR_16))
         VAR_31 |= VAR_3;
 if (VAR_25 & VAR_18)
  VAR_31 |= VAR_2;


 FUNC_1((FUNC_0(VAR_6, 52)) | VAR_7,
       (int)VAR_22, VAR_23, (int)VAR_24, VAR_31, 0);






 if (VAR_23 <= 0)
  return (VAR_8);

        if (VAR_19->v_mount->mnt_flag & VAR_10) {
  if (VAR_31 & VAR_1)
          FUNC_3(VAR_20, VAR_21, VAR_23, VAR_14);
  return (VAR_9);
 }






 if (VAR_22 < 0 || VAR_22 >= VAR_24 ||
    (VAR_22 & VAR_12) || (VAR_23 & VAR_11)) {
  if (VAR_31 & VAR_1)
   FUNC_3(VAR_20, VAR_21, VAR_23, VAR_14);
  return (VAR_8);
 }
 VAR_30 = VAR_24 - VAR_22;

 if (VAR_23 < VAR_30)
         VAR_28 = VAR_23;
 else
         VAR_28 = VAR_30;

 VAR_29 = (VAR_28 + (VAR_13 - 1)) & ~VAR_11;

 if (VAR_23 > VAR_29) {
  if (VAR_31 & VAR_1)
   FUNC_3(VAR_20, VAR_21 + VAR_29, VAR_23 - VAR_29,
     VAR_14);
 }
 return (FUNC_2(VAR_19, VAR_20, VAR_21, VAR_22, VAR_28,
      VAR_31, (buf_t)((void*)0), (struct clios *)((void*)0), VAR_26, VAR_27));
}
