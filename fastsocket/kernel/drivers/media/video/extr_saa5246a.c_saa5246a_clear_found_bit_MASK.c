
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa5246a_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct saa5246a_device*,int,unsigned char*) ;
 scalar_t__ FUNC_1 (struct saa5246a_device*,int ,unsigned char,int ,int ,unsigned char,...) ;

__attribute__((used)) static int FUNC_2(struct saa5246a_device *VAR_7,
 unsigned char VAR_8)
{
 unsigned char VAR_9;

 if (FUNC_1(VAR_7, VAR_6,

  VAR_8 |
  VAR_3,

  VAR_4,

  VAR_2,

  VAR_0) ||
  FUNC_0(VAR_7, 1, &VAR_9))
 {
  return -VAR_1;
 }
 VAR_9 |= VAR_5;
 if (FUNC_1(VAR_7, VAR_6,

  VAR_8 |
  VAR_3,

  VAR_4,

  VAR_2,

  VAR_9,

  VAR_0))
 {
  return -VAR_1;
 }

 return 0;
}
