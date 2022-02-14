
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int,int,char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void *
FUNC_7(void * VAR_0)
{
 int VAR_1 = FUNC_1(FUNC_2());
 int VAR_2;
 int VAR_3;
 int VAR_4;
 uint64_t VAR_5;
 int VAR_6 = (int)VAR_0;

 FUNC_3(((void*)0), &VAR_5);

 FUNC_0(VAR_1, 37, "thread(%llu) priority before acquiring the lock is %d\n", VAR_5, VAR_1);


 FUNC_5(VAR_6);

 VAR_2 = FUNC_1(FUNC_2());
 FUNC_0(VAR_2, 37, "thread(%llu) priority after acquiring the lock (uncontended) is %d\n", VAR_5, VAR_2);

 FUNC_4(8);


 VAR_3 = FUNC_1(FUNC_2());
 FUNC_0(VAR_3, 47, "thread(%llu) priority after contention by 47 thread is %d\n", VAR_5, VAR_3);


 FUNC_6(VAR_6);


 VAR_4 = FUNC_1(FUNC_2());
 FUNC_0(VAR_4, 37, "thread(%llu) priority after dropping lock is %d\n", VAR_5, VAR_4);

 return ((void*)0);
}
