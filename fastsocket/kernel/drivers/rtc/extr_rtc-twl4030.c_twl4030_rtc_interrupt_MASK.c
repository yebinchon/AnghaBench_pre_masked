
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (void*,int,unsigned long) ;
 int FUNC_2 (int ,int*,int ) ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_9, void *VAR_10)
{
 unsigned long VAR_11 = 0;
 int VAR_12 = VAR_2;
 int VAR_13;
 u8 VAR_14;
 VAR_13 = FUNC_3(&VAR_14, VAR_3);
 if (VAR_13)
  goto out;






 if (VAR_14 & VAR_0)
  VAR_11 |= VAR_5 | VAR_4;
 else
  VAR_11 |= VAR_5 | VAR_6;

 VAR_13 = FUNC_4(VAR_14 | VAR_0,
       VAR_3);
 if (VAR_13)
  goto out;
 VAR_13 = FUNC_2(VAR_8,
   &VAR_14, VAR_7);
 if (VAR_13)
  goto out;


 FUNC_1(VAR_10, 1, VAR_11);

 VAR_12 = VAR_1;
out:
 return VAR_12;
}
