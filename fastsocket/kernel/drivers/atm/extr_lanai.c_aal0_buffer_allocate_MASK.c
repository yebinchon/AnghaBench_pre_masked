
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * start; } ;
struct lanai_dev {TYPE_1__ aal0buf; int pci; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int,int ) ;

__attribute__((used)) static inline int FUNC_2(struct lanai_dev *VAR_2)
{
 FUNC_0("aal0_buffer_allocate: allocating AAL0 RX buffer\n");
 FUNC_1(&VAR_2->aal0buf, VAR_0, 80,
      VAR_2->pci);
 return (VAR_2->aal0buf.start == ((void*)0)) ? -VAR_1 : 0;
}
