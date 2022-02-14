
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(u32 VAR_2, int VAR_3)
{
 u32 VAR_4, VAR_5;
 int VAR_6 = -VAR_0;

 if (VAR_3 < 0)
  goto out;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4) {
  VAR_5 = FUNC_1(VAR_1 + VAR_2);
  VAR_6 = (VAR_5 & VAR_4) ? 1 : 0;
 }
out:
 return VAR_6;
}
