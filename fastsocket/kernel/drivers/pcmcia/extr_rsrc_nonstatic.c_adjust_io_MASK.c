
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_data {int io_db; } ;
struct pcmcia_socket {struct socket_data* resource_data; } ;



 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;

 int FUNC_0 (int *,unsigned long,unsigned long) ;
 int FUNC_1 (struct pcmcia_socket*,unsigned long,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_socket *VAR_5, unsigned int VAR_6, unsigned long VAR_7, unsigned long VAR_8)
{
 struct socket_data *VAR_9 = VAR_5->resource_data;
 unsigned long VAR_10 = VAR_8 - VAR_7 + 1;
 int VAR_11 = 0;

 if (VAR_8 < VAR_7)
  return -VAR_1;

 if (VAR_8 > VAR_2)
  return -VAR_1;

 FUNC_2(&VAR_4);
 switch (VAR_6) {
 case 129:
  if (FUNC_0(&VAR_9->io_db, VAR_7, VAR_10) != 0) {
   VAR_11 = -VAR_0;
   break;
  }




  break;
 case 128:
  FUNC_4(&VAR_9->io_db, VAR_7, VAR_10);
  break;
 default:
  VAR_11 = -VAR_1;
  break;
 }
 FUNC_3(&VAR_4);

 return VAR_11;
}
