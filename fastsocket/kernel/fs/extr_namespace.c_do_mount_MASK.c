
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;
 unsigned long VAR_24 ;
 unsigned long VAR_25 ;
 unsigned long VAR_26 ;
 unsigned long VAR_27 ;
 unsigned long VAR_28 ;
 unsigned long VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct path*,unsigned long) ;
 int FUNC_1 (struct path*,char*,unsigned long) ;
 int FUNC_2 (struct path*,char*) ;
 int FUNC_3 (struct path*,char*,unsigned long,int,char*,void*) ;
 int FUNC_4 (struct path*,unsigned long,int,void*) ;
 int FUNC_5 (char const*,int ,struct path*) ;
 int FUNC_6 (char const*,int ,int) ;
 int FUNC_7 (struct path*) ;
 int FUNC_8 (char*,struct path*,char*,unsigned long,void*) ;

long FUNC_9(char *VAR_31, const char *VAR_32, char *VAR_33,
    unsigned long VAR_34, void *VAR_35)
{
 struct path VAR_36;
 int VAR_37 = 0;
 int VAR_38 = 0;


 if ((VAR_34 & VAR_13) == VAR_14)
  VAR_34 &= ~VAR_13;



 if (!VAR_32 || !*VAR_32 || !FUNC_6(VAR_32, 0, VAR_30))
  return -VAR_0;

 if (VAR_35)
  ((char *)VAR_35)[VAR_30 - 1] = 0;


 if (!(VAR_34 & VAR_16))
  VAR_38 |= VAR_8;


 if (VAR_34 & VAR_20)
  VAR_38 |= VAR_6;
 if (VAR_34 & VAR_17)
  VAR_38 |= VAR_3;
 if (VAR_34 & VAR_19)
  VAR_38 |= VAR_5;
 if (VAR_34 & VAR_16)
  VAR_38 |= VAR_2;
 if (VAR_34 & VAR_18)
  VAR_38 |= VAR_4;
 if (VAR_34 & VAR_28)
  VAR_38 &= ~(VAR_8 | VAR_2);
 if (VAR_34 & VAR_22)
  VAR_38 |= VAR_7;

 VAR_34 &= ~(VAR_20 | VAR_19 | VAR_17 | VAR_9 | VAR_11 |
     VAR_16 | VAR_18 | VAR_24| VAR_12 |
     VAR_28);


 VAR_37 = FUNC_5(VAR_32, VAR_1, &VAR_36);
 if (VAR_37)
  return VAR_37;

 VAR_37 = FUNC_8(VAR_31, &VAR_36,
       VAR_33, VAR_34, VAR_35);
 if (VAR_37)
  goto dput_out;

 if (VAR_34 & VAR_25)
  VAR_37 = FUNC_4(&VAR_36, VAR_34 & ~VAR_25, VAR_38,
        VAR_35);
 else if (VAR_34 & VAR_10)
  VAR_37 = FUNC_1(&VAR_36, VAR_31, VAR_34 & VAR_23);
 else if (VAR_34 & (VAR_26 | VAR_21 | VAR_27 | VAR_29))
  VAR_37 = FUNC_0(&VAR_36, VAR_34);
 else if (VAR_34 & VAR_15)
  VAR_37 = FUNC_2(&VAR_36, VAR_31);
 else
  VAR_37 = FUNC_3(&VAR_36, VAR_33, VAR_34, VAR_38,
          VAR_31, VAR_35);
dput_out:
 FUNC_7(&VAR_36);
 return VAR_37;
}
