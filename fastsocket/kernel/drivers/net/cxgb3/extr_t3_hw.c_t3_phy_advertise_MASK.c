
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct cphy*,int ,int ,unsigned int*) ;
 int FUNC_1 (struct cphy*,int ,int ,unsigned int) ;

int FUNC_2(struct cphy *VAR_19, unsigned int VAR_20)
{
 int VAR_21;
 unsigned int VAR_22 = 0;

 VAR_21 = FUNC_0(VAR_19, VAR_16, VAR_18, &VAR_22);
 if (VAR_21)
  return VAR_21;

 VAR_22 &= ~(VAR_9 | VAR_8);
 if (VAR_20 & VAR_1)
  VAR_22 |= VAR_9;
 if (VAR_20 & VAR_0)
  VAR_22 |= VAR_8;

 VAR_21 = FUNC_1(VAR_19, VAR_16, VAR_18, VAR_22);
 if (VAR_21)
  return VAR_21;

 VAR_22 = 1;
 if (VAR_20 & VAR_5)
  VAR_22 |= VAR_13;
 if (VAR_20 & VAR_4)
  VAR_22 |= VAR_12;
 if (VAR_20 & VAR_3)
  VAR_22 |= VAR_11;
 if (VAR_20 & VAR_2)
  VAR_22 |= VAR_10;
 if (VAR_20 & VAR_7)
  VAR_22 |= VAR_15;
 if (VAR_20 & VAR_6)
  VAR_22 |= VAR_14;
 return FUNC_1(VAR_19, VAR_16, VAR_17, VAR_22);
}
