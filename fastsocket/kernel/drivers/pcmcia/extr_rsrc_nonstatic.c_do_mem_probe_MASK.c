
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct socket_data {int mem_db; } ;
struct pcmcia_socket {int map_size; int dev; struct socket_data* resource_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pcmcia_socket*,int,int) ;
 scalar_t__ FUNC_1 (struct pcmcia_socket*,int,int) ;
 int FUNC_2 (int ,int *,char*,int,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static int FUNC_5(u_long VAR_1, u_long VAR_2, struct pcmcia_socket *VAR_3)
{
    struct socket_data *VAR_4 = VAR_3->resource_data;
    u_long VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    FUNC_2(VAR_0, &VAR_3->dev, "cs: memory probe 0x%06lx-0x%06lx:",
        VAR_1, VAR_1+VAR_2-1);
    VAR_7 = VAR_8 = 0;
    VAR_9 = (VAR_2 < 0x20000) ? 0x2000 : ((VAR_2>>4) & ~0x1fff);

    if (VAR_9 > 0x800000)
 VAR_9 = 0x800000;

    if (VAR_9 < 2 * VAR_3->map_size)
 VAR_9 = 2 * VAR_3->map_size;
    for (VAR_5 = VAR_6 = VAR_1; VAR_5 < VAR_1+VAR_2; VAR_5 = VAR_6 + VAR_9) {
 if (!VAR_8) {
     for (VAR_6 = VAR_5; VAR_6 < VAR_1+VAR_2; VAR_6 += VAR_9) {
  if (FUNC_1(VAR_3, VAR_6, VAR_9))
      break;
     }
     VAR_8 = ((VAR_5 == VAR_1) && (VAR_6 == VAR_1+VAR_2));
 }
 if (VAR_8) {
     for (VAR_6 = VAR_5; VAR_6 < VAR_1+VAR_2; VAR_6 += 2*VAR_9)
  if (FUNC_0(VAR_3, VAR_6, VAR_9) &&
      FUNC_0(VAR_3, VAR_6 + VAR_9, VAR_9))
      break;
 }
 if (VAR_5 != VAR_6) {
     if (!VAR_7) FUNC_3(" excluding");
     FUNC_3(" %#05lx-%#05lx", VAR_5, VAR_6-1);
     FUNC_4(&VAR_4->mem_db, VAR_5, VAR_6-VAR_5);
     VAR_7 += VAR_6-VAR_5;
 }
    }
    FUNC_3(VAR_7 ? "\n" : " clean.\n");
    return (VAR_2 - VAR_7);
}
