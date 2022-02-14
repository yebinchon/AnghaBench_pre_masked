
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct ipath_devdata {unsigned int ipath_ibcctrl; TYPE_1__* ipath_kregs; } ;
struct TYPE_2__ {int kr_ibcctrl; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct ipath_devdata*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct ipath_devdata *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4;

 VAR_4 = (VAR_2->ipath_ibcctrl >> VAR_1) &
  VAR_0;
 if (VAR_4 != VAR_3) {
  VAR_2->ipath_ibcctrl &=
   ~(VAR_0 <<
     VAR_1);
  VAR_2->ipath_ibcctrl |=
   (u64) VAR_3 << VAR_1;
  FUNC_0(VAR_2, VAR_2->ipath_kregs->kr_ibcctrl,
     VAR_2->ipath_ibcctrl);
 }
 return 0;
}
