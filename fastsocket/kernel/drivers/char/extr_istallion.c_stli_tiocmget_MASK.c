
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int flags; struct stliport* driver_data; } ;
struct TYPE_2__ {int sigvalue; } ;
struct stliport {size_t brdnr; TYPE_1__ asig; } ;
struct stlibrd {int dummy; } ;
struct file {int dummy; } ;
typedef int asysigs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct stlibrd** VAR_4 ;
 int FUNC_0 (struct stlibrd*,struct stliport*,int ,TYPE_1__*,int,int) ;
 int FUNC_1 (int ) ;
 size_t VAR_5 ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_6, struct file *VAR_7)
{
 struct stliport *VAR_8 = VAR_6->driver_data;
 struct stlibrd *VAR_9;
 int VAR_10;

 if (VAR_8 == ((void*)0))
  return -VAR_2;
 if (VAR_8->brdnr >= VAR_5)
  return 0;
 VAR_9 = VAR_4[VAR_8->brdnr];
 if (VAR_9 == ((void*)0))
  return 0;
 if (VAR_6->flags & (1 << VAR_3))
  return -VAR_1;

 if ((VAR_10 = FUNC_0(VAR_9, VAR_8, VAR_0,
          &VAR_8->asig, sizeof(asysigs_t), 1)) < 0)
  return VAR_10;

 return FUNC_1(VAR_8->asig.sigvalue);
}
