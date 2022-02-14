
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int word ;
struct TYPE_6__ {scalar_t__ length; int * info; } ;
typedef int PLCI ;
typedef TYPE_1__ API_PARSE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int,char*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(PLCI *VAR_3, API_PARSE *VAR_4)
{
  word VAR_5;
    API_PARSE VAR_6[5];

  for(VAR_5=0;VAR_5<5;VAR_5++) VAR_6[VAR_5].length = 0;

  if(!VAR_4->length)
    return;
  if(FUNC_2(&VAR_4->info[1], (word)VAR_4->length, "ssss", VAR_6))
    return;

  FUNC_0 (VAR_3,VAR_1,&VAR_6[1]);
  FUNC_0 (VAR_3,VAR_2,&VAR_6[2]);
  FUNC_1(VAR_3,VAR_0,&VAR_6[3]);
}
