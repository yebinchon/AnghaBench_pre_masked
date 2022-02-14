
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (struct pcmcia_socket*) ;
 size_t FUNC_1 (struct pcmcia_socket*) ;
 int FUNC_2 (char const*,char*,int) ;
 struct pcmcia_socket* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
       struct device_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 ssize_t VAR_7 = -VAR_0;
 struct pcmcia_socket *VAR_8 = FUNC_3(VAR_3);

 if (!VAR_6)
  return -VAR_0;

 if (!(VAR_8->state & VAR_2) && !FUNC_2(VAR_5, "off", 3))
  VAR_7 = FUNC_1(VAR_8);
 else if ((VAR_8->state & VAR_2) && !FUNC_2(VAR_5, "on", 2))
  VAR_7 = FUNC_0(VAR_8);

 return VAR_7 ? -VAR_1 : VAR_6;
}
