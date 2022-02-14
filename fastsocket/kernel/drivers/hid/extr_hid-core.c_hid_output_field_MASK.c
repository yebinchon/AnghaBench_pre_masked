
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_field {unsigned int report_count; unsigned int report_offset; unsigned int report_size; scalar_t__ logical_minimum; int * value; } ;
typedef int __u8 ;


 int FUNC_0 (int*,unsigned int,unsigned int,int ) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hid_field *VAR_0, __u8 *VAR_1)
{
 unsigned VAR_2 = VAR_0->report_count;
 unsigned VAR_3 = VAR_0->report_offset;
 unsigned VAR_4 = VAR_0->report_size;
 unsigned VAR_5 = VAR_3 + VAR_2 * VAR_4;
 unsigned VAR_6;


 if (VAR_2 > 0 && VAR_4 > 0 && (VAR_5 % 8) != 0)
  VAR_1[(VAR_5-1)/8] &= (1 << (VAR_5 % 8)) - 1;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_0->logical_minimum < 0)
   FUNC_0(VAR_1, VAR_3 + VAR_6 * VAR_4, VAR_4, FUNC_1(VAR_0->value[VAR_6], VAR_4));
  else
   FUNC_0(VAR_1, VAR_3 + VAR_6 * VAR_4, VAR_4, VAR_0->value[VAR_6]);
 }
}
