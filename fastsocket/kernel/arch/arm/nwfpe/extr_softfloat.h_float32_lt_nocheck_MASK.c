
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float32 ;
typedef int flag ;
typedef scalar_t__ bits32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline flag FUNC_1(float32 VAR_0, float32 VAR_1)
{
 flag VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_2 != VAR_3)
  return VAR_2 && ((bits32) ((VAR_0 | VAR_1) << 1) != 0);
 return (VAR_0 != VAR_1) && (VAR_2 ^ (VAR_0 < VAR_1));
}
