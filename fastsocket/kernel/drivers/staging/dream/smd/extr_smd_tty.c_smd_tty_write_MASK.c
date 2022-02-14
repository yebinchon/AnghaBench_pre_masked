
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct smd_tty_info* driver_data; } ;
struct smd_tty_info {int ch; } ;


 int FUNC_0 (int ,unsigned char const*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
 struct smd_tty_info *VAR_3 = VAR_0->driver_data;
 int VAR_4;





 VAR_4 = FUNC_1(VAR_3->ch);
 if (VAR_2 > VAR_4)
  VAR_2 = VAR_4;

 return FUNC_0(VAR_3->ch, VAR_1, VAR_2);
}
