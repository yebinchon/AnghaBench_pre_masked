
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_6,
          bool VAR_7,
          bool VAR_8,
          bool VAR_9,
          bool VAR_10,
          bool VAR_11)
{
 int VAR_12 = 0;

 if (VAR_7)
  VAR_12 |= VAR_1;
 if (VAR_8)
  VAR_12 |= VAR_0;
 if (VAR_9)
  VAR_12 |= VAR_3;
 if (VAR_10)
  VAR_12 |= VAR_2;

 if (VAR_11)
  VAR_12 |= VAR_4;

 FUNC_0(VAR_12, VAR_6 + VAR_5);
}
