
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct stliport* driver_data; } ;
struct stliport {size_t brdnr; } ;
struct stlibrd {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 struct stlibrd** VAR_4 ;
 int FUNC_0 (struct stlibrd*,struct stliport*,int ,long*,int,int ) ;
 size_t VAR_5 ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_6, int VAR_7)
{
 struct stlibrd *VAR_8;
 struct stliport *VAR_9;
 long VAR_10;

 VAR_9 = VAR_6->driver_data;
 if (VAR_9 == ((void*)0))
  return -VAR_3;
 if (VAR_9->brdnr >= VAR_5)
  return -VAR_3;
 VAR_8 = VAR_4[VAR_9->brdnr];
 if (VAR_8 == ((void*)0))
  return -VAR_3;

 VAR_10 = (VAR_7 == -1) ? VAR_2 : VAR_1;
 FUNC_0(VAR_8, VAR_9, VAR_0, &VAR_10, sizeof(long), 0);
 return 0;
}
