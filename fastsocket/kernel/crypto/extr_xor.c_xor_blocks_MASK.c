
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* do_5 ) (unsigned int,void*,unsigned long*,unsigned long*,unsigned long*,unsigned long*) ;int (* do_4 ) (unsigned int,void*,unsigned long*,unsigned long*,unsigned long*) ;int (* do_3 ) (unsigned int,void*,unsigned long*,unsigned long*) ;int (* do_2 ) (unsigned int,void*,unsigned long*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (unsigned int,void*,unsigned long*) ;
 int FUNC_1 (unsigned int,void*,unsigned long*,unsigned long*) ;
 int FUNC_2 (unsigned int,void*,unsigned long*,unsigned long*,unsigned long*) ;
 int FUNC_3 (unsigned int,void*,unsigned long*,unsigned long*,unsigned long*,unsigned long*) ;

void
FUNC_4(unsigned int VAR_1, unsigned int VAR_2, void *VAR_3, void **VAR_4)
{
 unsigned long *VAR_5, *VAR_6, *VAR_7, *VAR_8;

 VAR_5 = (unsigned long *) VAR_4[0];
 if (VAR_1 == 1) {
  VAR_0->do_2(VAR_2, VAR_3, VAR_5);
  return;
 }

 VAR_6 = (unsigned long *) VAR_4[1];
 if (VAR_1 == 2) {
  VAR_0->do_3(VAR_2, VAR_3, VAR_5, VAR_6);
  return;
 }

 VAR_7 = (unsigned long *) VAR_4[2];
 if (VAR_1 == 3) {
  VAR_0->do_4(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7);
  return;
 }

 VAR_8 = (unsigned long *) VAR_4[3];
 VAR_0->do_5(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8);
}
