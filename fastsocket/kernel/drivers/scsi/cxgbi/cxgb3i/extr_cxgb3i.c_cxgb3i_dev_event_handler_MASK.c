
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct t3cdev {int dummy; } ;
struct cxgbi_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct cxgbi_device* FUNC_0 (struct t3cdev*) ;
 int FUNC_1 (int,char*,struct t3cdev*,struct cxgbi_device*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct t3cdev *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct cxgbi_device *VAR_5 = FUNC_0(VAR_2);

 FUNC_1(1 << VAR_0,
  "0x%p, cdev 0x%p, event 0x%x, port 0x%x.\n",
  VAR_2, VAR_5, VAR_3, VAR_4);
 if (!VAR_5)
  return;

 switch (VAR_3) {
 case 129:
  VAR_5->flags |= VAR_1;
  break;
 case 128:
  VAR_5->flags &= ~VAR_1;
  break;
 }
}
