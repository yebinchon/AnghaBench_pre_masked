
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146 {scalar_t__ user; } ;
struct file {struct saa7146* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1)
{
 struct saa7146 *VAR_2 = VAR_1->private_data;
 VAR_2->user--;

 if (VAR_2->user > 0)
  return 0;
 FUNC_0(0x007f0000, VAR_0);
 return 0;
}
