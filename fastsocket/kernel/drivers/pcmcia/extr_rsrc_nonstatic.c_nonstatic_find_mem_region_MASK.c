
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u_long ;
struct socket_data {int mem_db; } ;
struct resource {int dummy; } ;
struct pcmcia_socket {int features; TYPE_1__* cb_dev; struct socket_data* resource_data; int dev; } ;
struct pcmcia_align_data {unsigned long mask; unsigned long offset; int * map; } ;
struct TYPE_2__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct resource*,unsigned long,unsigned long,unsigned long,int,int ,struct pcmcia_align_data*) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct resource*) ;
 struct resource* FUNC_3 (int ,unsigned long,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct resource*,unsigned long,int,unsigned long,int ,int ,struct pcmcia_align_data*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct resource * FUNC_7(u_long VAR_5, u_long VAR_6,
  u_long VAR_7, int VAR_8, struct pcmcia_socket *VAR_9)
{
 struct resource *VAR_10 = FUNC_3(0, VAR_6, VAR_0, FUNC_1(&VAR_9->dev));
 struct socket_data *VAR_11 = VAR_9->resource_data;
 struct pcmcia_align_data VAR_12;
 unsigned long VAR_13, VAR_14;
 int VAR_15, VAR_16;

 VAR_8 = VAR_8 || !(VAR_9->features & VAR_1);

 VAR_12.mask = VAR_7 - 1;
 VAR_12.offset = VAR_5 & VAR_12.mask;
 VAR_12.map = &VAR_11->mem_db;

 for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {
  if (VAR_8) {
   VAR_14 = 0x100000UL;
   VAR_13 = VAR_5 < VAR_14 ? VAR_5 : 0;
  } else {
   VAR_14 = ~0UL;
   VAR_13 = 0x100000UL + VAR_5;
  }

  FUNC_4(&VAR_4);







   VAR_15 = FUNC_0(&VAR_2, VAR_10, VAR_6, VAR_13,
      VAR_14, 1, VAR_3, &VAR_12);
  FUNC_5(&VAR_4);
  if (VAR_15 == 0 || VAR_8)
   break;
  VAR_8 = 1;
 }

 if (VAR_15 != 0) {
  FUNC_2(VAR_10);
  VAR_10 = ((void*)0);
 }
 return VAR_10;
}
