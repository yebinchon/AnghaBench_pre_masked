
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {unsigned long nChildren; } ;
typedef TYPE_1__* RealDTEntry ;


 scalar_t__ FUNC_0 (TYPE_1__*,char*,void**,unsigned int*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static RealDTEntry
FUNC_4(RealDTEntry VAR_1, char *VAR_2)
{
 RealDTEntry VAR_3;
 unsigned long VAR_4;
 char * VAR_5;
 unsigned int VAR_6;

 if (VAR_1->nChildren == 0) {
  return ((void*)0);
 }
 VAR_4 = 1;
 VAR_3 = FUNC_1(VAR_1);
 while (1) {
  if (FUNC_0(VAR_3, "name", (void **)&VAR_5, &VAR_6) != VAR_0) {
   break;
  }
  if (FUNC_3(VAR_5, VAR_2) == 0) {
   return VAR_3;
  }
  if (VAR_4 >= VAR_1->nChildren) {
   break;
  }
  VAR_3 = FUNC_2(VAR_3);
  VAR_4++;
 }
 return ((void*)0);
}
