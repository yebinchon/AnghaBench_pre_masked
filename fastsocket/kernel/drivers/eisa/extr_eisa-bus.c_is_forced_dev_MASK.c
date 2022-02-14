
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eisa_root_device {int bus_nr; } ;
struct eisa_device {int slot; } ;



__attribute__((used)) static int FUNC_0 (int *VAR_0,
     int VAR_1,
     struct eisa_root_device *VAR_2,
     struct eisa_device *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = (VAR_2->bus_nr << 8) | VAR_3->slot;
  if (VAR_0[VAR_4] == VAR_5)
   return 1;
 }

 return 0;
}
