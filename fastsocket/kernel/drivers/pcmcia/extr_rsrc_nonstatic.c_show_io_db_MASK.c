
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_map {scalar_t__ num; scalar_t__ base; struct resource_map* next; } ;
struct socket_data {struct resource_map io_db; } ;
struct pcmcia_socket {struct socket_data* resource_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct pcmcia_socket* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*,int,char*,unsigned long,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 struct pcmcia_socket *VAR_5 = FUNC_0(VAR_2);
 struct socket_data *VAR_6;
 struct resource_map *VAR_7;
 ssize_t VAR_8 = 0;

 FUNC_1(&VAR_1);
 VAR_6 = VAR_5->resource_data;

 for (VAR_7 = VAR_6->io_db.next; VAR_7 != &VAR_6->io_db; VAR_7 = VAR_7->next) {
  if (VAR_8 > (VAR_0 - 10))
   continue;
  VAR_8 += FUNC_3 (&VAR_4[VAR_8], (VAR_0 - VAR_8 - 1),
     "0x%08lx - 0x%08lx\n",
     ((unsigned long) VAR_7->base),
     ((unsigned long) VAR_7->base + VAR_7->num - 1));
 }

 FUNC_2(&VAR_1);
 return (VAR_8);
}
