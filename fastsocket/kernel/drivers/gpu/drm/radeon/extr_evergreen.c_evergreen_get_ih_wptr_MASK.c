
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int rptr; int ptr_mask; } ;
struct TYPE_4__ {int * wb; scalar_t__ enabled; } ;
struct radeon_device {TYPE_1__ ih; int dev; TYPE_2__ wb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u32 FUNC_4(struct radeon_device *VAR_5)
{
 u32 VAR_6, VAR_7;

 if (VAR_5->wb.enabled)
  VAR_6 = FUNC_3(VAR_5->wb.wb[VAR_3/4]);
 else
  VAR_6 = FUNC_0(VAR_1);

 if (VAR_6 & VAR_4) {




  FUNC_2(VAR_5->dev, "IH ring buffer overflow (0x%08X, %d, %d)\n",
   VAR_6, VAR_5->ih.rptr, (VAR_6 + 16) + VAR_5->ih.ptr_mask);
  VAR_5->ih.rptr = (VAR_6 + 16) & VAR_5->ih.ptr_mask;
  VAR_7 = FUNC_0(VAR_0);
  VAR_7 |= VAR_2;
  FUNC_1(VAR_0, VAR_7);
 }
 return (VAR_6 & VAR_5->ih.ptr_mask);
}
