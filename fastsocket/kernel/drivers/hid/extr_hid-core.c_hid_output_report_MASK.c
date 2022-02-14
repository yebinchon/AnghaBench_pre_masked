
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_report {scalar_t__ id; unsigned int maxfield; int * field; } ;
typedef int __u8 ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(struct hid_report *VAR_0, __u8 *VAR_1)
{
 unsigned VAR_2;

 if (VAR_0->id > 0)
  *VAR_1++ = VAR_0->id;

 for (VAR_2 = 0; VAR_2 < VAR_0->maxfield; VAR_2++)
  FUNC_0(VAR_0->field[VAR_2], VAR_1);
}
