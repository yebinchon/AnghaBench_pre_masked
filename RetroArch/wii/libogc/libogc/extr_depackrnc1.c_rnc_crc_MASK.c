
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static long FUNC_0 (void *VAR_0, long VAR_1) {
    unsigned short VAR_2[256];
    unsigned short VAR_3;
    int VAR_4, VAR_5;
    unsigned char *VAR_6 = VAR_0;

    for (VAR_4=0; VAR_4<256; VAR_4++) {
 VAR_3 = VAR_4;

 for (VAR_5=0; VAR_5<8; VAR_5++) {
     if (VAR_3 & 1)
  VAR_3 = (VAR_3 >> 1) ^ 0xA001;
     else
  VAR_3 = (VAR_3 >> 1);
 }
 VAR_2[VAR_4] = VAR_3;
    }

    VAR_3 = 0;
    while (VAR_1--) {
 VAR_3 ^= *VAR_6++;
 VAR_3 = (VAR_3 >> 8) ^ VAR_2[VAR_3 & 0xFF];
    }

    return VAR_3;
}
