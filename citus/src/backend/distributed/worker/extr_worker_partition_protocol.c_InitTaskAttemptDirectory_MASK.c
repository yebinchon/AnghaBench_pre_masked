
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
struct TYPE_7__ {int data; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int ,int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static StringInfo
FUNC_5(uint64 VAR_1, uint32 VAR_2)
{
 StringInfo VAR_3 = FUNC_1(VAR_1, VAR_2);
 uint32 VAR_4 = (uint32) FUNC_4();





 StringInfo VAR_5 = FUNC_3();
 FUNC_2(VAR_5, "%s_%0*u",
      VAR_3->data, VAR_0, VAR_4);





 FUNC_0(VAR_5);

 return VAR_5;
}
