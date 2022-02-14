
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int * upl_t ;
typedef int upl_offset_t ;
typedef int u_int ;
struct clios {int dummy; } ;
typedef int off_t ;
typedef int buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int,int,int,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ,int *,int,int,int,int,int ,struct clios*,int (*) (buf_t,void*),void*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int,int,int) ;

int
FUNC_5(vnode_t VAR_18, upl_t VAR_19, upl_offset_t VAR_20, off_t VAR_21,
        int VAR_22, off_t VAR_23, int VAR_24, int (*VAR_25)(buf_t, void *), void *VAR_26)
{
 u_int VAR_27;
 int VAR_28;
        off_t VAR_29;
 int VAR_30;
 int VAR_31 = 0;

 if (VAR_19 == ((void*)0) || VAR_22 < 0)
         FUNC_3("cluster_pagein: NULL upl passed in");

 if ((VAR_24 & VAR_15) == 0)
         VAR_31 |= VAR_0;
 if ((VAR_24 & VAR_16) == 0)
  VAR_31 |= VAR_1;
 if (VAR_24 & VAR_14)
  VAR_31 |= VAR_3;
 if (VAR_24 & VAR_17)
  VAR_31 |= VAR_2;


 FUNC_1((FUNC_0(VAR_6, 56)) | VAR_7,
       (int)VAR_21, VAR_22, (int)VAR_23, VAR_31, 0);







 if (VAR_21 < 0 || VAR_21 >= VAR_23 ||
    (VAR_21 & VAR_10) || (VAR_22 & VAR_9) || (VAR_20 & VAR_9)) {
         if (VAR_31 & VAR_1)
          FUNC_4(VAR_19, VAR_20, VAR_22, VAR_13 | VAR_12);
  return (VAR_8);
 }
 VAR_29 = VAR_23 - VAR_21;

 if (VAR_22 < VAR_29)
         VAR_27 = VAR_22;
 else
         VAR_27 = VAR_29;

 VAR_28 = (VAR_27 + (VAR_11 - 1)) & ~VAR_9;

 if (VAR_22 > VAR_28 && (VAR_31 & VAR_1))
  FUNC_4(VAR_19, VAR_20 + VAR_28,
        VAR_22 - VAR_28, VAR_13 | VAR_12);

 VAR_30 = FUNC_2(VAR_18, VAR_19, VAR_20, VAR_21, VAR_27,
       VAR_31 | VAR_5 | VAR_4, (buf_t)((void*)0), (struct clios *)((void*)0), VAR_25, VAR_26);

 return (VAR_30);
}
