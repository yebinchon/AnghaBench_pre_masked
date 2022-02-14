
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* zone_t ;
typedef int uint64_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (void*,int *) ;
 int FUNC_2 (char*,int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (void*,void*) ;
 void* FUNC_5 (int,int,int,char*) ;
 int FUNC_6 (void*) ;

kern_return_t
FUNC_7()
{
 zone_t VAR_4;
 void * VAR_5;

 VAR_1;
 VAR_4 = FUNC_5(sizeof(uint64_t), 100 * sizeof(uint64_t), sizeof(uint64_t), "test_uint64_zone");
 FUNC_1(VAR_4, ((void*)0));

 FUNC_0(FUNC_6(VAR_4), 0, ((void*)0));
 VAR_2;

 FUNC_1(VAR_5 = FUNC_3(VAR_4), ((void*)0));

 FUNC_4(VAR_4, VAR_5);


 FUNC_2("num_threads_at_ktest", VAR_3, "count", "# of threads in system at zalloc_test");

 return VAR_0;
}
