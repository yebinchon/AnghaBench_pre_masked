
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned char* res_owner; int res_spinlock; } ;


 unsigned int VAR_0 ;
 unsigned char VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_3, unsigned int VAR_4,
     unsigned char VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned long VAR_8;

 FUNC_0(&VAR_2->res_spinlock, VAR_8);
 for (VAR_7 = 1, VAR_6 = 0; (VAR_6 < VAR_0)
      && (VAR_4 != 0); VAR_7 <<= 1, VAR_6++) {
  if ((VAR_4 & VAR_7) != 0) {
   VAR_4 &= ~VAR_7;
   if (VAR_2->res_owner[VAR_6] == VAR_5) {
    VAR_2->res_owner[VAR_6] = VAR_1;
   }
  }
 }
 FUNC_1(&VAR_2->res_spinlock, VAR_8);
}
