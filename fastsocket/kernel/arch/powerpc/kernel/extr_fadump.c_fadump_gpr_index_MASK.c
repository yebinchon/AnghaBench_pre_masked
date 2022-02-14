
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int*) ;

__attribute__((used)) static inline int FUNC_2(u64 VAR_1)
{
 int VAR_2 = -1;
 char VAR_3[3];

 if ((VAR_1 & VAR_0) == FUNC_0("GPR")) {

  VAR_1 &= ~VAR_0;
  VAR_1 >>= 24;
  VAR_3[2] = '\0';
  VAR_3[1] = VAR_1 & 0xff;
  VAR_3[0] = (VAR_1 >> 8) & 0xff;
  FUNC_1(VAR_3, "%d", &VAR_2);
  if (VAR_2 > 31)
   VAR_2 = -1;
 }
 return VAR_2;
}
