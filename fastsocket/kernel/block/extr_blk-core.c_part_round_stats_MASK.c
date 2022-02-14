
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hd_struct {scalar_t__ partno; } ;
struct TYPE_2__ {struct hd_struct part0; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int,struct hd_struct*,unsigned long) ;
 TYPE_1__* FUNC_1 (struct hd_struct*) ;

void FUNC_2(int VAR_1, struct hd_struct *VAR_2)
{
 unsigned long VAR_3 = VAR_0;

 if (VAR_2->partno)
  FUNC_0(VAR_1, &FUNC_1(VAR_2)->part0, VAR_3);
 FUNC_0(VAR_1, VAR_2, VAR_3);
}
