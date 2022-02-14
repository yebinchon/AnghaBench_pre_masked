
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sysdev_attribute {int dummy; } ;
struct sys_device {unsigned int id; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {int mm; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int,int ,int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int * VAR_3 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char const*,int *,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct sys_device *VAR_4, struct sysdev_attribute *VAR_5,
   const char *VAR_6, size_t VAR_7)
{
 unsigned int VAR_8=VAR_4->id;
 u64 VAR_9=FUNC_3(VAR_6, ((void*)0), 16);
 int VAR_10;

        VAR_10 = FUNC_0(VAR_2, VAR_2->mm, VAR_9,
                        1, VAR_1, 0, ((void*)0), ((void*)0));
 if (VAR_10<=0) {



  return -VAR_0;
 }

 VAR_3[VAR_8] = FUNC_1(VAR_9);
 return VAR_7;
}
