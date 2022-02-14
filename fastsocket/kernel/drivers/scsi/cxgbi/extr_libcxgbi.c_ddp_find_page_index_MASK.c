
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long* VAR_1 ;
 int FUNC_0 (char*,unsigned long) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2 == (1UL << VAR_1[VAR_3]))
   return VAR_3;
 }
 FUNC_0("ddp page size %lu not supported.\n", VAR_2);
 return VAR_0;
}
