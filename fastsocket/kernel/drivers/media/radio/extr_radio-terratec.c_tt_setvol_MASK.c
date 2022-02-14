
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct terratec {int curvol; scalar_t__ muted; } ;


 int FUNC_0 (struct terratec*,int) ;

__attribute__((used)) static int FUNC_1(struct terratec *VAR_0, int VAR_1)
{
 if (VAR_1 == VAR_0->curvol) {
  if (VAR_0->muted) {
   VAR_0->muted = 0;
   FUNC_0(VAR_0, VAR_1);
  }
  return 0;
 }

 if (VAR_1 == 0) {
  FUNC_0(VAR_0, 0);
  VAR_0->curvol = VAR_1;
  return 0;
 }

 VAR_0->muted = 0;
 FUNC_0(VAR_0, VAR_1);
 VAR_0->curvol = VAR_1;
 return 0;
}
