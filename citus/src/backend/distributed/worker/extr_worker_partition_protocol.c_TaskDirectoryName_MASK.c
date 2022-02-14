
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
struct TYPE_6__ {int data; } ;
typedef TYPE_1__* StringInfo ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_2 () ;

StringInfo
FUNC_3(uint64 VAR_2, uint32 VAR_3)
{
 StringInfo VAR_4 = FUNC_0(VAR_2);

 StringInfo VAR_5 = FUNC_2();
 FUNC_1(VAR_5, "%s/%s%0*u",
      VAR_4->data,
      VAR_1, VAR_0, VAR_3);

 return VAR_5;
}
