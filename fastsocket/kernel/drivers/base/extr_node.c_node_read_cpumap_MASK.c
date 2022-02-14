
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sys_device {int dummy; } ;
struct TYPE_2__ {int id; } ;
struct node {TYPE_1__ sysdev; } ;
struct cpumask {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,struct cpumask const*) ;
 struct cpumask* FUNC_2 (int ) ;
 int FUNC_3 (char*,int,struct cpumask const*) ;
 struct node* FUNC_4 (struct sys_device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct sys_device *VAR_2, int VAR_3, char *VAR_4)
{
 struct node *VAR_5 = FUNC_4(VAR_2);
 const struct cpumask *VAR_6 = FUNC_2(VAR_5->sysdev.id);
 int VAR_7;


 FUNC_0((VAR_0/32 * 9) > (VAR_1-1));

 VAR_7 = VAR_3?
  FUNC_1(VAR_4, VAR_1-2, VAR_6) :
  FUNC_3(VAR_4, VAR_1-2, VAR_6);
  VAR_4[VAR_7++] = '\n';
  VAR_4[VAR_7] = '\0';
 return VAR_7;
}
