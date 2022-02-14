
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct find_data {int mask; int id; scalar_t__ parent; struct amba_device* dev; scalar_t__ busid; } ;
struct device {scalar_t__ parent; } ;
struct amba_device {int periphid; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 struct amba_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, void *VAR_1)
{
 struct find_data *VAR_2 = VAR_1;
 struct amba_device *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;

 VAR_4 = (VAR_3->periphid & VAR_2->mask) == VAR_2->id;
 if (VAR_2->parent)
  VAR_4 &= VAR_2->parent == VAR_0->parent;
 if (VAR_2->busid)
  VAR_4 &= FUNC_2(FUNC_0(VAR_0), VAR_2->busid) == 0;

 if (VAR_4) {
  FUNC_1(VAR_0);
  VAR_2->dev = VAR_3;
 }

 return VAR_4;
}
