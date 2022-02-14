
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa5246a_device {int in_use; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct saa5246a_device*,int ,int,int ) ;
 struct saa5246a_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_8)
{
 struct saa5246a_device *VAR_9 = FUNC_2(VAR_8);


 FUNC_1(VAR_9, VAR_7,

  VAR_5 |
  VAR_3 |
  VAR_4 |
  VAR_2 |
  VAR_1 |
  VAR_6,

  VAR_0);
 FUNC_0(0, &VAR_9->in_use);
 return 0;
}
