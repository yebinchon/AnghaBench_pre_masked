
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;


 int FFMAX (int,void* const) ;
 void* FFMIN (int ,int) ;

__attribute__((used)) static void inflate(uint8_t *dst, const uint8_t *p1, int width,
                    int threshold, const uint8_t *coordinates[], int coord,
                    int maxc)
{
    int x, i;

    for (x = 0; x < width; x++) {
        int sum = 0;
        int limit = FFMIN(p1[x] + threshold, 255);

        for (i = 0; i < 8; sum += *(coordinates[i++] + x));

        dst[x] = FFMIN(FFMAX(sum / 8, p1[x]), limit);
    }
}
