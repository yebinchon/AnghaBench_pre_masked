
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alps_fields {int left; int right; int middle; int ts_left; int ts_right; int ts_middle; } ;



__attribute__((used)) static void FUNC_0(struct alps_fields *VAR_0, unsigned char *VAR_1)
{
 VAR_0->left = !!(VAR_1[3] & 0x01);
 VAR_0->right = !!(VAR_1[3] & 0x02);
 VAR_0->middle = !!(VAR_1[3] & 0x04);

 VAR_0->ts_left = !!(VAR_1[3] & 0x10);
 VAR_0->ts_right = !!(VAR_1[3] & 0x20);
 VAR_0->ts_middle = !!(VAR_1[3] & 0x40);
}
