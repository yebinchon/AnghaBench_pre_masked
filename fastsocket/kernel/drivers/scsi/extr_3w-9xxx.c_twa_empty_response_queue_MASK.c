
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int TW_Device_Extension ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(TW_Device_Extension *VAR_2)
{
 u32 VAR_3, VAR_4;
 int VAR_5 = 0, VAR_6 = 1;

 VAR_3 = FUNC_2(FUNC_1(VAR_2));

 while (((VAR_3 & VAR_1) == 0) && (VAR_5 < VAR_0)) {
  VAR_4 = FUNC_2(FUNC_0(VAR_2));
  VAR_3 = FUNC_2(FUNC_1(VAR_2));
  VAR_5++;
 }
 if (VAR_5 == VAR_0)
  goto out;

 VAR_6 = 0;
out:
 return VAR_6;
}
