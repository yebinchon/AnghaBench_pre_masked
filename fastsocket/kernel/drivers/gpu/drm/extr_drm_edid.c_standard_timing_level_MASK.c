
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edid {int revision; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct edid*) ;

__attribute__((used)) static int FUNC_1(struct edid *VAR_5)
{
 if (VAR_5->revision >= 2) {
  if (VAR_5->revision >= 4 && (VAR_5->features & VAR_0))
   return VAR_1;
  if (FUNC_0(VAR_5))
   return VAR_4;
  return VAR_3;
 }
 return VAR_2;
}
