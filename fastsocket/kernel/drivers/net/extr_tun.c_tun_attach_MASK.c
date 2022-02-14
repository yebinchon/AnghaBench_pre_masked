
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sk; struct file* file; } ;
struct tun_struct {int dev; TYPE_1__ socket; struct tun_file* tfile; } ;
struct tun_file {int count; struct tun_struct* tun; } ;
struct file {struct tun_file* private_data; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct tun_struct *VAR_2, struct file *VAR_3)
{
 struct tun_file *VAR_4 = VAR_3->private_data;
 int VAR_5;

 FUNC_0();

 FUNC_3(VAR_2->dev);

 VAR_5 = -VAR_1;
 if (VAR_4->tun)
  goto out;

 VAR_5 = -VAR_0;
 if (VAR_2->tfile)
  goto out;

 VAR_5 = 0;
 VAR_4->tun = VAR_2;
 VAR_2->tfile = VAR_4;
 VAR_2->socket.file = VAR_3;
 FUNC_2(VAR_2->dev);
 FUNC_5(VAR_2->socket.sk);
 FUNC_1(&VAR_4->count);

out:
 FUNC_4(VAR_2->dev);
 return VAR_5;
}
