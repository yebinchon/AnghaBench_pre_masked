
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; int type; } ;
struct gemtek_pci {int current_frequency; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct gemtek_pci* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
     struct v4l2_frequency *VAR_3)
{
 struct gemtek_pci *VAR_4 = FUNC_0(VAR_1);

 VAR_3->type = VAR_0;
 VAR_3->frequency = VAR_4->current_frequency;
 return 0;
}
