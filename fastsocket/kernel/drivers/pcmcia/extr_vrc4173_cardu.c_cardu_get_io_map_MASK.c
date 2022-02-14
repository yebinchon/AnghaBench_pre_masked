
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vrc4173_socket_t ;
typedef int uint8_t ;
typedef int u_char ;
struct pccard_io_map {int map; int flags; void* stop; void* start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_5 (int *,int ) ;
 void* FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(unsigned int VAR_7, struct pccard_io_map *VAR_8)
{
 vrc4173_socket_t *VAR_9 = &VAR_6[VAR_7];
 uint8_t VAR_10, VAR_11;
 u_char VAR_12;

 VAR_12 = VAR_8->map;
 if (VAR_12 > 1)
  return -VAR_1;

 VAR_8->start = FUNC_6(VAR_9, FUNC_4(VAR_12));
 VAR_8->stop = FUNC_6(VAR_9, FUNC_2(VAR_12));

 VAR_10 = FUNC_5(VAR_9, VAR_2);
 VAR_11 = FUNC_5(VAR_9, VAR_0);
 VAR_8->flags = (VAR_11 & FUNC_3(VAR_12)) ? VAR_4 : 0;
 if (VAR_10 & FUNC_1(VAR_12))
  VAR_8->flags |= VAR_5;
 else if (VAR_10 & FUNC_0(VAR_12))
  VAR_8->flags |= VAR_3;

 return 0;
}
