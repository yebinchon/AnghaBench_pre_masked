
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gfar_private {int device_flags; int bd_stash_en; int rxlock; TYPE_1__* regs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct gfar_private* FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct gfar_private *VAR_6 = FUNC_2(FUNC_6(VAR_2));
 int VAR_7 = 0;
 u32 VAR_8;
 unsigned long VAR_9;

 if (!(VAR_6->device_flags & VAR_1))
  return VAR_5;


 if (!FUNC_5("on", VAR_4, VAR_5 - 1) || !FUNC_5("1", VAR_4, VAR_5 - 1))
  VAR_7 = 1;
 else if (!FUNC_5("off", VAR_4, VAR_5 - 1)
   || !FUNC_5("0", VAR_4, VAR_5 - 1))
  VAR_7 = 0;
 else
  return VAR_5;

 FUNC_3(&VAR_6->rxlock, VAR_9);


 VAR_6->bd_stash_en = VAR_7;

 VAR_8 = FUNC_0(&VAR_6->regs->attr);

 if (VAR_7)
  VAR_8 |= VAR_0;
 else
  VAR_8 &= ~(VAR_0);

 FUNC_1(&VAR_6->regs->attr, VAR_8);

 FUNC_4(&VAR_6->rxlock, VAR_9);

 return VAR_5;
}
