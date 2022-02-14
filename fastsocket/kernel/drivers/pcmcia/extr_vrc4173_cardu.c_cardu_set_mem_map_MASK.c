
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vrc4173_socket_t ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_long ;
typedef int u_char ;
struct pccard_mem_map {int map; int sys_start; int sys_stop; int card_start; int flags; } ;


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
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static int FUNC_8(unsigned int VAR_10, struct pccard_mem_map *VAR_11)
{
 vrc4173_socket_t *VAR_12 = &VAR_9[VAR_10];
 uint16_t VAR_13;
 uint8_t VAR_14, VAR_15;
 u_long VAR_16, VAR_17, VAR_18;
 u_char VAR_19;

 VAR_19 = VAR_11->map;
 VAR_16 = VAR_11->sys_start;
 VAR_17 = VAR_11->sys_stop;
 VAR_18 = VAR_11->card_start;

 if (VAR_19 > 4 || VAR_16 > VAR_17 || ((VAR_16 ^ VAR_17) >> 24) ||
     (VAR_18 >> 26))
  return -VAR_1;

 VAR_14 = FUNC_5(VAR_12, VAR_0);
 VAR_15 = FUNC_1(VAR_19);
 if (VAR_14 & VAR_15) {
  VAR_14 &= ~VAR_15;
  FUNC_6(VAR_12, VAR_0, VAR_14);
 }

 FUNC_6(VAR_12, FUNC_4(VAR_19), VAR_16 >> 24);

 VAR_13 = (VAR_16 >> 12) & 0x0fff;
 if (VAR_11->flags & VAR_2) VAR_13 |= VAR_6;
 FUNC_7(VAR_12, FUNC_3(VAR_19), VAR_13);

 VAR_13 = (VAR_17 >> 12) & 0x0fff;
 FUNC_7(VAR_12, FUNC_0(VAR_19), VAR_13);

 VAR_13 = ((VAR_18 - VAR_16) >> 12) & 0x3fff;
 if (VAR_11->flags & VAR_5) VAR_13 |= VAR_8;
 if (VAR_11->flags & VAR_4) VAR_13 |= VAR_7;
 FUNC_7(VAR_12, FUNC_2(VAR_19), VAR_13);

 if (VAR_11->flags & VAR_3)
  FUNC_6(VAR_12, VAR_0, VAR_14 | VAR_15);

 return 0;
}
