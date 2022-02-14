
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flags; struct stliport* driver_data; } ;
struct stliport {size_t brdnr; int asig; } ;
struct stlibrd {int dummy; } ;
struct file {int dummy; } ;
typedef int asysigs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 struct stlibrd** VAR_6 ;
 int FUNC_0 (struct stlibrd*,struct stliport*,int ,int *,int,int ) ;
 int FUNC_1 (int *,int,int) ;
 size_t VAR_7 ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_8, struct file *VAR_9,
    unsigned int VAR_10, unsigned int VAR_11)
{
 struct stliport *VAR_12 = VAR_8->driver_data;
 struct stlibrd *VAR_13;
 int VAR_14 = -1, VAR_15 = -1;

 if (VAR_12 == ((void*)0))
  return -VAR_2;
 if (VAR_12->brdnr >= VAR_7)
  return 0;
 VAR_13 = VAR_6[VAR_12->brdnr];
 if (VAR_13 == ((void*)0))
  return 0;
 if (VAR_8->flags & (1 << VAR_5))
  return -VAR_1;

 if (VAR_10 & VAR_4)
  VAR_14 = 1;
 if (VAR_10 & VAR_3)
  VAR_15 = 1;
 if (VAR_11 & VAR_4)
  VAR_14 = 0;
 if (VAR_11 & VAR_3)
  VAR_15 = 0;

 FUNC_1(&VAR_12->asig, VAR_15, VAR_14);

 return FUNC_0(VAR_13, VAR_12, VAR_0, &VAR_12->asig,
       sizeof(asysigs_t), 0);
}
