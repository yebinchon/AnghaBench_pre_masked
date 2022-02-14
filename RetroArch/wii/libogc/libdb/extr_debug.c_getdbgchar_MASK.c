
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ s32 ;
struct TYPE_3__ {scalar_t__ (* read ) (TYPE_1__*,char*,int) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*,int) ;

__attribute__((used)) static char FUNC_1()
{
 char VAR_1 = 0;
 s32 VAR_2 = 0;

 VAR_2 = VAR_0->read(VAR_0,&VAR_1,1);

 return (VAR_2>0)?VAR_1:0;
}
