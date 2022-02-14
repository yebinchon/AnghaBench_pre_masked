
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uv_IO_APIC_route_entry {int mask; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(int VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;
 struct uv_IO_APIC_route_entry *VAR_3;

 FUNC_0(sizeof(struct uv_IO_APIC_route_entry) !=
   sizeof(unsigned long));

 VAR_2 = 0;
 VAR_3 = (struct uv_IO_APIC_route_entry *)&VAR_2;
 VAR_3->mask = 1;

 FUNC_1(VAR_0, VAR_1, VAR_2);
}
