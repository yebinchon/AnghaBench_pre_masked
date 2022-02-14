
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int dummy; } ;


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
 int FUNC_0 (struct wm8350*,int ) ;

__attribute__((used)) static int FUNC_1(struct wm8350 *VAR_15)
{
 u16 VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20 = 0;

 VAR_16 = FUNC_0(VAR_15, VAR_6);
 VAR_17 = FUNC_0(VAR_15, VAR_5);
 VAR_18 = FUNC_0(VAR_15, VAR_3);
 VAR_19 = FUNC_0(VAR_15, VAR_0);


 VAR_16 = (VAR_16 & VAR_10) >> VAR_11;


 VAR_19 &= VAR_2;



 if (((VAR_16 == VAR_8) ||
      (VAR_16 == VAR_9) ||
      (VAR_16 == VAR_12))
     && !(VAR_17 & VAR_7))
  VAR_20 = VAR_13;
 else if (((VAR_16 == VAR_8) ||
    (VAR_16 == VAR_9) ||
    (VAR_16 == VAR_12))
   && (VAR_17 & VAR_7) && (VAR_19 == 0))
  VAR_20 = VAR_13 | VAR_1;
 else if (VAR_18 & VAR_14)
  VAR_20 = VAR_4;
 else
  VAR_20 = VAR_1;

 return VAR_20;
}
