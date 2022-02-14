
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_4__ {int dependedJobList; int jobId; } ;
typedef int List ;
typedef TYPE_1__ Job ;


 int * VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static List *
FUNC_7(Job *VAR_1)
{
 List *VAR_2 = VAR_0;
 List *VAR_3 = VAR_0;





 VAR_3 = FUNC_5(VAR_1);
 while (VAR_3 != VAR_0)
 {
  uint64 *VAR_4 = (uint64 *) FUNC_6(sizeof(uint64));
  List *VAR_5 = VAR_0;

  Job *VAR_6 = (Job *) FUNC_1(VAR_3);
  VAR_3 = FUNC_4(VAR_3);

  (*VAR_4) = VAR_6->jobId;
  VAR_2 = FUNC_0(VAR_2, VAR_4);


  VAR_5 = FUNC_3(VAR_6->dependedJobList);
  if (VAR_5 != VAR_0)
  {
   VAR_3 = FUNC_2(VAR_3, VAR_5);
  }
 }

 return VAR_2;
}
