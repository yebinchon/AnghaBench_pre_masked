
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int ct1 ;
typedef int c ;
typedef int UINT ;
struct TYPE_9__ {int num; int a; int lock; int * wait_thread; } ;
typedef int THREAD ;
typedef TYPE_1__ EVENT ;
typedef TYPE_1__ CHECK_THREAD_3 ;
typedef TYPE_1__ CHECK_THREAD_1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int **) ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int ** FUNC_11 (int) ;

bool FUNC_12()
{
 bool VAR_5 = 1;
 CHECK_THREAD_1 VAR_6;
 UINT VAR_7 = 32;
 UINT VAR_8;
 THREAD **VAR_9;
 EVENT *VAR_10;
 THREAD *VAR_11;
 THREAD *VAR_12;
 CHECK_THREAD_3 VAR_13;

 VAR_10 = FUNC_2();

 FUNC_10(&VAR_6, sizeof(VAR_6));
 VAR_6 = FUNC_3();

 VAR_11 = FUNC_4(VAR_2, VAR_10);
 VAR_6 = VAR_11;

 VAR_9 = FUNC_11(sizeof(THREAD *) * VAR_7);
 for (VAR_8 = 0;VAR_8 < VAR_7;VAR_8++)
 {
  VAR_9[VAR_8] = FUNC_4(VAR_1, &VAR_6);
  if (VAR_9[VAR_8] == ((void*)0))
  {
   FUNC_5("Thread %u Create Failed.\n", VAR_8);
   VAR_5 = 0;
  }
 }

 FUNC_8(VAR_10);

 for (VAR_8 = 0;VAR_8 < VAR_7;VAR_8++)
 {
  FUNC_9(VAR_9[VAR_8], VAR_4);
  FUNC_7(VAR_9[VAR_8]);
 }

 FUNC_1(VAR_9);

 if (VAR_6 != (VAR_7 * VAR_0))
 {
  FUNC_5("Threading: %u != %u\n", VAR_6, VAR_7 * VAR_0);
  VAR_5 = 0;
 }

 FUNC_0(VAR_6);

 FUNC_9(VAR_11, VAR_4);
 FUNC_7(VAR_11);

 FUNC_6(VAR_10);

 VAR_7 = 32;

 FUNC_10(&VAR_13, sizeof(VAR_13));
 VAR_13.num = VAR_7;
 VAR_12 = FUNC_4(VAR_3, &VAR_13);
 FUNC_9(VAR_12, VAR_4);
 FUNC_7(VAR_12);

 if (VAR_13.a != VAR_7)
 {
  FUNC_5("Threading: %u != %u\n", VAR_13.a, VAR_7);
  VAR_5 = 0;
 }

 return VAR_5;
}
