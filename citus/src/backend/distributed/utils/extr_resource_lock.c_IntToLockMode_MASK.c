
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LOCKMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static LOCKMODE
FUNC_1(int VAR_5)
{
 if (VAR_5 == VAR_2)
 {
  return VAR_2;
 }
 else if (VAR_5 == VAR_4)
 {
  return VAR_4;
 }
 else if (VAR_5 == VAR_0)
 {
  return VAR_0;
 }
 else if (VAR_5 == VAR_3)
 {
  return VAR_3;
 }
 else
 {
  FUNC_0(VAR_1, "unsupported lockmode %d", VAR_5);
 }
}
