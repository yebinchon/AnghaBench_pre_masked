
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,size_t) ;

kern_return_t
FUNC_4()
{
 uint64_t * VAR_1;
 size_t VAR_2;

 FUNC_1("Running kalloc test.\n");

 VAR_2 = sizeof(uint64_t);
 VAR_1 = FUNC_2(VAR_2);
 FUNC_0(VAR_1, "kalloc sizeof(uint64_t) return not null");
 FUNC_3(VAR_1, VAR_2);

 VAR_2 = 3544;
 VAR_1 = FUNC_2(VAR_2);
 FUNC_0(VAR_1, "kalloc 3544 return not null");
 FUNC_3(VAR_1, VAR_2);

 return VAR_0;
}
