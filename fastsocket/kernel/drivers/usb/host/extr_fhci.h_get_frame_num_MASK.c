
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct fhci_hcd {TYPE_1__* pram; } ;
struct TYPE_2__ {int frame_num; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline u16 FUNC_1(struct fhci_hcd *VAR_0)
{
 return FUNC_0(&VAR_0->pram->frame_num) & 0x07ff;
}
