
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tty_struct {struct stliport* driver_data; } ;
struct stliport {size_t brdnr; int state; } ;
struct stlibrd {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct stlibrd*,struct stliport*,int ,unsigned long*,int,int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct stlibrd** VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct tty_struct* VAR_11 ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_12)
{
 struct stliport *VAR_13;
 struct stlibrd *VAR_14;
 unsigned long VAR_15, VAR_16;

 VAR_13 = VAR_12->driver_data;
 if (VAR_13 == ((void*)0))
  return;
 if (VAR_13->brdnr >= VAR_8)
  return;
 VAR_14 = VAR_7[VAR_13->brdnr];
 if (VAR_14 == ((void*)0))
  return;

 FUNC_3(&VAR_6, VAR_16);
 if (VAR_12 == VAR_11) {
  VAR_11 = ((void*)0);
  VAR_10 = 0;
  VAR_9 = 0;
 }
 if (FUNC_5(VAR_3, &VAR_13->state)) {
  FUNC_2(VAR_5, &VAR_13->state);
 } else {
  VAR_15 = VAR_2;
  if (FUNC_5(VAR_4, &VAR_13->state)) {
   VAR_15 |= VAR_1;
   FUNC_1(VAR_4, &VAR_13->state);
  }
  FUNC_0(VAR_14, VAR_13, VAR_0, &VAR_15, sizeof(u32), 0);
 }
 FUNC_4(&VAR_6, VAR_16);
 FUNC_6(VAR_12);
}
