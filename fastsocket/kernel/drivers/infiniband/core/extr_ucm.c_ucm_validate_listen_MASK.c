
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(__be64 VAR_5, __be64 VAR_6)
{
 VAR_5 &= VAR_6;

 if (((VAR_5 & VAR_2) == VAR_1) ||
     ((VAR_5 & VAR_4) == VAR_3))
  return -VAR_0;

 return 0;
}
