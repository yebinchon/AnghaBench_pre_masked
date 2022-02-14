
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hw_type; } ;
struct parisc_device {int dev; TYPE_1__ id; } ;


 int FUNC_0 (struct parisc_device*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct parisc_device*) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 (struct parisc_device*) ;
 int FUNC_3 (struct parisc_device*) ;
 int FUNC_4 (unsigned long,unsigned long,int *) ;

void FUNC_5(struct parisc_device *VAR_4)
{
 unsigned long VAR_5, VAR_6;

 if (!FUNC_0(VAR_4) || FUNC_1(VAR_4))
  return;

 if (VAR_4->id.hw_type == VAR_1) {
  VAR_5 = (unsigned long)(signed int)(FUNC_3(VAR_4) << 16);
  VAR_6 = VAR_5 + VAR_2 * VAR_3;
 } else {
  VAR_5 = (FUNC_3(VAR_4) + ~VAR_0) & VAR_0;
  VAR_6 = (FUNC_2(VAR_4)+ ~VAR_0) & VAR_0;
 }

 FUNC_4(VAR_5, VAR_6, &VAR_4->dev);
}
