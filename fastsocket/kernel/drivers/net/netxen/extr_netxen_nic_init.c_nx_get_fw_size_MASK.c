
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct netxen_adapter {scalar_t__ fw_type; TYPE_1__* fw; } ;
typedef int __le32 ;
struct TYPE_4__ {int size; } ;
struct TYPE_3__ {int * data; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct netxen_adapter*,int ,int ) ;

__attribute__((used)) static __le32
FUNC_2(struct netxen_adapter *VAR_4)
{
 if (VAR_4->fw_type == VAR_1)
  return FUNC_0((FUNC_1(VAR_4,
     VAR_2,
     VAR_3))->size);
 else
  return FUNC_0(
    *(u32 *)&VAR_4->fw->data[VAR_0]);
}
