
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxu_hcd {int dummy; } ;
struct ehci_qh {scalar_t__ c_usecs; int usecs; int period; } ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int FUNC_0 (struct oxu_hcd*,unsigned int,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct oxu_hcd *VAR_1,
    unsigned VAR_2, unsigned VAR_3,
    const struct ehci_qh *VAR_4, __le32 *VAR_5)
{
 int VAR_6 = -VAR_0;

 if (VAR_4->c_usecs && VAR_3 >= 6)
  goto done;

 if (!FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4->period, VAR_4->usecs))
  goto done;
 if (!VAR_4->c_usecs) {
  VAR_6 = 0;
  *VAR_5 = 0;
  goto done;
 }

done:
 return VAR_6;
}
