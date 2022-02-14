
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct saa5246a_device*,int ,int,int,...) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 struct saa5246a_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_19)
{
 struct saa5246a_device *VAR_20 = FUNC_3(VAR_19);

 if (FUNC_2(0, &VAR_20->in_use))
  return -VAR_1;

 if (FUNC_1(VAR_20, VAR_17,
  VAR_9 |
  VAR_8 |
  VAR_5 |
  VAR_4 |
  VAR_3 |
  VAR_7 |
  VAR_6,

  VAR_14 |
  VAR_12 |
  VAR_13 |
  VAR_11 |
  VAR_10 |
  VAR_15,

  VAR_0) ||
  FUNC_1(VAR_20, VAR_18,




  VAR_16,

  VAR_0))
 {
  FUNC_0(0, &VAR_20->in_use);
  return -VAR_2;
 }
 return 0;
}
