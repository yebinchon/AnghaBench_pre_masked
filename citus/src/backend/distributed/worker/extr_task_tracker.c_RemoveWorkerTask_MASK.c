
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WorkerTask ;
typedef int HTAB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,void*,int ,int *) ;

__attribute__((used)) static void
FUNC_3(WorkerTask *VAR_2, HTAB *VAR_3)
{
 void *VAR_4 = (void *) VAR_2;

 WorkerTask *VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_1, ((void*)0));
 if (VAR_5 == ((void*)0))
 {
  FUNC_0(VAR_0, (FUNC_1("worker task hash corrupted")));
 }
}
