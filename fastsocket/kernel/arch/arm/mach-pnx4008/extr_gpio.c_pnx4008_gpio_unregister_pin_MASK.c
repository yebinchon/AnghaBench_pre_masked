
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long FUNC_0 (unsigned short) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (unsigned short) ;
 scalar_t__ FUNC_2 (unsigned short) ;
 scalar_t__ FUNC_3 (unsigned short) ;
 scalar_t__ FUNC_4 (unsigned short) ;
 scalar_t__ FUNC_5 (unsigned short) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 unsigned long* VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 () ;

int FUNC_8(unsigned short VAR_6)
{
 unsigned long VAR_7 = FUNC_0(VAR_6);
 int VAR_8 = -VAR_0;

 FUNC_6();

 if (FUNC_1(VAR_6)) {
  if (~VAR_5[VAR_1] & VAR_7)
   goto out;
  VAR_5[VAR_1] &= ~VAR_7;
 } else if (FUNC_5(VAR_6)) {
  if (~VAR_5[VAR_1] & VAR_7)
   goto out;
  VAR_5[VAR_1] &= ~VAR_7;
 } else if (FUNC_3(VAR_6)) {
  if (~VAR_5[VAR_3] & VAR_7)
   goto out;
  VAR_5[VAR_3] &= ~VAR_7;
 } else if (FUNC_4(VAR_6)) {
  if (~VAR_5[VAR_4] & VAR_7)
   goto out;
  VAR_5[VAR_4] &= ~VAR_7;
 } else if (FUNC_2(VAR_6)) {
  if (~VAR_5[VAR_2] & VAR_7)
   goto out;
  VAR_5[VAR_2] &= ~VAR_7;
 } else
  goto out;
 VAR_8 = 0;

out:
 FUNC_7();
 return VAR_8;
}
