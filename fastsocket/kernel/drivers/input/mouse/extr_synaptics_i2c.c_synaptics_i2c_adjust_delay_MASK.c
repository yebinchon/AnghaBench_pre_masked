
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synaptics_i2c {unsigned long scan_ms; unsigned long no_data_count; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (unsigned long) ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_1 (unsigned long) ;

unsigned long FUNC_2(struct synaptics_i2c *VAR_4,
      bool VAR_5)
{
 unsigned long VAR_6, VAR_7;

 if (VAR_3) {
  VAR_6 = VAR_4->scan_ms;
  if (VAR_5) {
   VAR_4->no_data_count = 0;
  } else {
   VAR_7 = VAR_1 / VAR_4->scan_ms;
   if (VAR_4->no_data_count < VAR_7)
    VAR_4->no_data_count++;
   else
    VAR_6 = VAR_0;
  }
  return FUNC_0(VAR_6);
 } else {
  VAR_6 = FUNC_0(VAR_2);
  return FUNC_1(VAR_6);
 }
}
