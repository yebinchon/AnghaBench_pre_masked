
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etr_eacr {int dp; scalar_t__ p1; scalar_t__ p0; int es; int e1; int e0; } ;
struct TYPE_2__ {scalar_t__ q; } ;
struct etr_aib {TYPE_1__ esw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct etr_aib VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct etr_aib VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct etr_aib*,int ) ;

__attribute__((used)) static struct etr_eacr FUNC_2(struct etr_aib *VAR_8,
      struct etr_eacr VAR_9)
{

 if (!VAR_9.e0 && !VAR_9.e1)
  return VAR_9;


 if (VAR_8->esw.q == 0) {

  if (VAR_9.p0 && !VAR_4) {
   VAR_2 = *VAR_8;
   if (VAR_3)
    VAR_4 = 1;
  }
 } else {

  if (VAR_9.p1 && !VAR_6) {
   VAR_5 = *VAR_8;
   if (VAR_3)
    VAR_6 = 1;
  }
 }





 if (!VAR_9.es || !FUNC_0())
  return VAR_9;






 if (VAR_7) {
  if (VAR_9.p0 && !VAR_4) {
   FUNC_1(&VAR_2, VAR_0);
   VAR_4 = 1;
  }
  if (VAR_9.p1 && !VAR_6) {
   FUNC_1(&VAR_5, VAR_1);
   VAR_6 = 1;
  }
 } else {




  if ((VAR_9.p0 && !VAR_4) ||
      (VAR_9.p1 && !VAR_6))
   VAR_9.dp ^= 1;
  else
   VAR_9.dp = 0;
 }
 return VAR_9;
}
