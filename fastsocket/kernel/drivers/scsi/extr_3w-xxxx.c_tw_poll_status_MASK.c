
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int TW_Device_Extension ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 unsigned long VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int,int ) ;

__attribute__((used)) static int FUNC_6(TW_Device_Extension *VAR_2, u32 VAR_3, int VAR_4)
{
 u32 VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 1;

 VAR_5 = FUNC_1(FUNC_0(VAR_2));
 VAR_6 = VAR_1;

 if (FUNC_4(VAR_5))
  FUNC_5(VAR_2, VAR_5, 0);

 while ((VAR_5 & VAR_3) != VAR_3) {
  VAR_5 = FUNC_1(FUNC_0(VAR_2));

  if (FUNC_4(VAR_5))
   FUNC_5(VAR_2, VAR_5, 0);

  if (FUNC_3(VAR_1, VAR_6 + VAR_0 * VAR_4))
   goto out;

  FUNC_2(50);
 }
 VAR_7 = 0;
out:
 return VAR_7;
}
