
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int termios; struct stliport* driver_data; } ;
struct stliport {size_t brdnr; } ;
struct stlibrd {int dummy; } ;
typedef int asyport_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct stlibrd** VAR_2 ;
 int FUNC_0 (struct stlibrd*,struct stliport*,int ,int *,int,int ) ;
 int FUNC_1 (struct tty_struct*,struct stliport*,int *,int ) ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_4)
{
 struct stliport *VAR_5 = VAR_4->driver_data;
 struct stlibrd *VAR_6;
 asyport_t VAR_7;

 if (VAR_5 == ((void*)0))
  return -VAR_1;
 if (VAR_5->brdnr >= VAR_3)
  return -VAR_1;
 VAR_6 = VAR_2[VAR_5->brdnr];
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 FUNC_1(VAR_4, VAR_5, &VAR_7, VAR_4->termios);
 return(FUNC_0(VAR_6, VAR_5, VAR_0, &VAR_7, sizeof(asyport_t), 0));
}
