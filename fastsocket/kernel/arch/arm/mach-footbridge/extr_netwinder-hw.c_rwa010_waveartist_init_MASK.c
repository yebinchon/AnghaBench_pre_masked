
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(int VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(7, 0);

 FUNC_1("WaveArtist base: ");
 FUNC_0(0x61, VAR_0 & 255);
 VAR_3 = FUNC_2(0x203);

 FUNC_0(0x60, VAR_0 >> 8);
 FUNC_1("%02X%02X (%X),", FUNC_2(0x203), VAR_3, VAR_0);

 FUNC_0(0x70, VAR_1);
 FUNC_1(" irq: %d (%d),", FUNC_2(0x203), VAR_1);

 FUNC_0(0x74, VAR_2);
 FUNC_1(" dma: %d (%d)\n", FUNC_2(0x203), VAR_2);

 FUNC_0(0x30, 1);
}
