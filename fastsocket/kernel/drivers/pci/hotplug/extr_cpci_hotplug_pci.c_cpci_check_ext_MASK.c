
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct slot {int devfn; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int,int*) ;

int FUNC_2(struct slot* VAR_2)
{
 int VAR_3;
 u16 VAR_4;
 int VAR_5 = 0;

 VAR_3 = FUNC_0(VAR_2->bus,
      VAR_2->devfn,
      VAR_1);
 if (!VAR_3)
  return 0;
 if (FUNC_1(VAR_2->bus,
         VAR_2->devfn,
         VAR_3 + 2,
         &VAR_4))
  return 0;
 if (VAR_4 & VAR_0)
  VAR_5 = 1;
 return VAR_5;
}
