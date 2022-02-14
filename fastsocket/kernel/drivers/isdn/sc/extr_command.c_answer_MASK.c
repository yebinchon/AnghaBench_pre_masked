
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devicename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (int,int ,unsigned long,int *) ;
 int FUNC_3 (char*,int,...) ;
 TYPE_1__** VAR_3 ;
 scalar_t__ FUNC_4 (int,unsigned long) ;

__attribute__((used)) static int FUNC_5(int VAR_4, unsigned long VAR_5)
{
 if(!FUNC_0(VAR_4)) {
  FUNC_3("Invalid param: %d is not a valid card id\n", VAR_4);
  return -VAR_1;
 }

 if(FUNC_4(VAR_4, VAR_5+1)) {
  FUNC_1(VAR_4, VAR_5+1);
  return -VAR_0;
 }

 FUNC_2(VAR_4, VAR_2,VAR_5,((void*)0));
 FUNC_3("%s: Answered incoming call on channel %lu\n",
  VAR_3[VAR_4]->devicename, VAR_5+1);
 return 0;
}
