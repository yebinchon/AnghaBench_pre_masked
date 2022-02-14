
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vrc4173_socket_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_char ;
struct pccard_mem_map {int map; int card_start; int sys_start; int sys_stop; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(unsigned int VAR_10, struct pccard_mem_map *VAR_11)
{
 vrc4173_socket_t *VAR_12 = &VAR_9[VAR_10];
 uint32_t VAR_13, VAR_14, VAR_15, VAR_16;
 uint8_t VAR_17;
 u_char VAR_18;

 VAR_18 = VAR_11->map;
 if (VAR_18 > 4)
  return -VAR_1;

 VAR_17 = FUNC_5(VAR_12, VAR_0);
 VAR_11->flags = (VAR_17 & FUNC_1(VAR_18)) ? VAR_3 : 0;

 VAR_13 = FUNC_6(VAR_12, FUNC_3(VAR_18));
 VAR_11->flags |= (VAR_13 & VAR_6) ? VAR_2 : 0;
 VAR_13 = (VAR_13 & 0x0fff) << 12;

 VAR_14 = FUNC_6(VAR_12, FUNC_0(VAR_18));
 VAR_14 = ((VAR_14 & 0x0fff) << 12) + 0x0fff;

 VAR_15 = FUNC_6(VAR_12, FUNC_2(VAR_18));
 VAR_11->flags |= (VAR_15 & VAR_8) ? VAR_5 : 0;
 VAR_11->flags |= (VAR_15 & VAR_7) ? VAR_4 : 0;
 VAR_15 = ((VAR_15 & 0x3fff) << 12) + VAR_13;
 VAR_11->card_start = VAR_15 & 0x03ffffff;

 VAR_16 = FUNC_5(VAR_12, FUNC_4(VAR_18)) << 24;
 VAR_11->sys_start = VAR_13 + VAR_16;
 VAR_11->sys_stop = VAR_13 + VAR_16;

 return 0;
}
