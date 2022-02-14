
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_6(int VAR_13, int VAR_14)
{
 unsigned long VAR_15;
 unsigned int VAR_16;
 int VAR_17 = 0;
 int VAR_18 = 0;

 if (!VAR_11 || !VAR_12 || !VAR_9)
  return -VAR_0;


 FUNC_4(&VAR_10, VAR_15);
 VAR_16 = FUNC_0(VAR_12);
 VAR_16 |= (VAR_8 | VAR_7);
 FUNC_1(VAR_16, VAR_12);
 FUNC_5(&VAR_10, VAR_15);

 VAR_17 = FUNC_2(VAR_9);
 if (VAR_17 < 0)
  return VAR_17;

 if (VAR_13 == 1)
  VAR_17 &= ~0x40;
 else
  VAR_17 |= 0x40;

 VAR_18 = FUNC_3(VAR_9, VAR_17);
 if (VAR_18)
  return VAR_18;

 VAR_16 = FUNC_0(VAR_11);
 VAR_16 &= ~(VAR_2);
 VAR_16 &= ~(VAR_5);

 if (VAR_14 >= 1)
  VAR_16 |= (VAR_3 | VAR_6);
 else
  VAR_16 |= (VAR_1 | VAR_4);

 FUNC_1(VAR_16, VAR_11);

 FUNC_4(&VAR_10, VAR_15);
 VAR_16 = FUNC_0(VAR_12);

 VAR_16 &= ~(VAR_8 | VAR_7);
 FUNC_1(VAR_16, VAR_12);
 FUNC_5(&VAR_10, VAR_15);

 return 0;
}
