
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Size; int Base; } ;
struct TYPE_4__ {int Size; int Base; } ;
struct ipw_dev {int link; int handle_attr_memory; scalar_t__ attr_memory; int handle_common_memory; scalar_t__ common_memory; TYPE_1__ request_attr_memory; TYPE_2__ request_common_memory; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ipw_dev *VAR_0)
{
 FUNC_1(VAR_0->link);

 if (VAR_0->common_memory) {
  FUNC_3(VAR_0->request_common_memory.Base,
    VAR_0->request_common_memory.Size);
  FUNC_0(VAR_0->common_memory);
 }
 if (VAR_0->attr_memory) {
  FUNC_3(VAR_0->request_attr_memory.Base,
    VAR_0->request_attr_memory.Size);
  FUNC_0(VAR_0->attr_memory);
 }
 if (VAR_0->common_memory)
  FUNC_2(VAR_0->handle_common_memory);
 if (VAR_0->attr_memory)
  FUNC_2(VAR_0->handle_attr_memory);


 FUNC_1(VAR_0->link);
}
