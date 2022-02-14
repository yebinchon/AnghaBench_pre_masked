
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct moxa_port* driver_data; } ;
struct moxa_port {int statusflags; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty_struct*,unsigned char const*,int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_2,
        const unsigned char *VAR_3, int VAR_4)
{
 struct moxa_port *VAR_5 = VAR_2->driver_data;
 int VAR_6;

 if (VAR_5 == ((void*)0))
  return 0;

 FUNC_1(&VAR_1);
 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_1);

 VAR_5->statusflags |= VAR_0;
 return VAR_6;
}
