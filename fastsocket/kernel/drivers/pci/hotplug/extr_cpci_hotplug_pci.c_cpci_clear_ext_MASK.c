
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct slot {int devfn; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int,int*) ;
 scalar_t__ FUNC_2 (int ,int ,int,int) ;

int FUNC_3(struct slot* VAR_3)
{
 int VAR_4;
 u16 VAR_5;

 VAR_4 = FUNC_0(VAR_3->bus,
      VAR_3->devfn,
      VAR_2);
 if (!VAR_4)
  return -VAR_0;
 if (FUNC_1(VAR_3->bus,
         VAR_3->devfn,
         VAR_4 + 2,
         &VAR_5))
  return -VAR_0;
 if (VAR_5 & VAR_1) {

  if (FUNC_2(VAR_3->bus,
           VAR_3->devfn,
           VAR_4 + 2,
           VAR_5))
   return -VAR_0;
 }
 return 0;
}
