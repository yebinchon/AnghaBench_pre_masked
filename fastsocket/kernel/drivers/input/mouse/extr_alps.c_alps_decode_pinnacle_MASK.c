
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alps_fields {int first_mp; int is_mp; unsigned char x; unsigned char y; unsigned char z; } ;


 int FUNC_0 (struct alps_fields*,unsigned char*) ;

__attribute__((used)) static void FUNC_1(struct alps_fields *VAR_0, unsigned char *VAR_1)
{
 VAR_0->first_mp = !!(VAR_1[4] & 0x40);
 VAR_0->is_mp = !!(VAR_1[0] & 0x40);

 VAR_0->x = ((VAR_1[1] & 0x7f) << 4) | ((VAR_1[4] & 0x30) >> 2) |
        ((VAR_1[0] & 0x30) >> 4);
 VAR_0->y = ((VAR_1[2] & 0x7f) << 4) | (VAR_1[4] & 0x0f);
 VAR_0->z = VAR_1[5] & 0x7f;

 FUNC_0(VAR_0, VAR_1);
}
