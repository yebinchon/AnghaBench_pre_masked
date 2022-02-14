
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket_data {int io_db; } ;
struct resource {int dummy; } ;
struct pcmcia_socket {TYPE_1__* cb_dev; struct socket_data* resource_data; int dev; } ;
struct pcmcia_align_data {unsigned long mask; unsigned long offset; int * map; } ;
struct TYPE_2__ {int bus; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct resource*,int,unsigned long,unsigned long,int,int ,struct pcmcia_align_data*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct resource*) ;
 struct resource* FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct resource*,int,int,unsigned long,int ,int ,struct pcmcia_align_data*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct resource *FUNC_7(unsigned long VAR_4, int VAR_5,
     unsigned long VAR_6, struct pcmcia_socket *VAR_7)
{
 struct resource *VAR_8 = FUNC_3(0, VAR_5, VAR_0, FUNC_1(&VAR_7->dev));
 struct socket_data *VAR_9 = VAR_7->resource_data;
 struct pcmcia_align_data VAR_10;
 unsigned long VAR_11 = VAR_4;
 int VAR_12;

 if (VAR_6 == 0)
  VAR_6 = 0x10000;

 VAR_10.mask = VAR_6 - 1;
 VAR_10.offset = VAR_4 & VAR_10.mask;
 VAR_10.map = &VAR_9->io_db;

 FUNC_4(&VAR_3);






  VAR_12 = FUNC_0(&VAR_1, VAR_8, VAR_5, VAR_11, ~0UL,
     1, VAR_2, &VAR_10);
 FUNC_5(&VAR_3);

 if (VAR_12 != 0) {
  FUNC_2(VAR_8);
  VAR_8 = ((void*)0);
 }
 return VAR_8;
}
