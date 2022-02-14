
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_device {int id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long*,unsigned long,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_3(struct sys_device *VAR_6,
     char *VAR_7, int VAR_8)
{
 int VAR_9;
 unsigned long VAR_10[VAR_5];
 unsigned long VAR_11 = 0;

 VAR_11 = VAR_2;
 if (VAR_8)
  VAR_11 |= VAR_1;

 VAR_9 = FUNC_1(VAR_3, VAR_10, VAR_11,
    FUNC_0(VAR_6->id),
    0, 0, 0, 0, 0, 0, 0);

 if (VAR_9 != VAR_4)
  return -VAR_0;

 return FUNC_2(VAR_7, "%lu\n", VAR_10[1] >> 32);
}
