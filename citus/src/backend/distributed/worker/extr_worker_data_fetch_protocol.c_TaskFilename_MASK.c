
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int data; } ;
typedef TYPE_1__* StringInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_1 () ;

StringInfo
FUNC_2(StringInfo VAR_2, uint32 VAR_3)
{
 StringInfo VAR_4 = FUNC_1();
 FUNC_0(VAR_4, "%s/%s%0*u",
      VAR_2->data,
      VAR_1, VAR_0, VAR_3);

 return VAR_4;
}
