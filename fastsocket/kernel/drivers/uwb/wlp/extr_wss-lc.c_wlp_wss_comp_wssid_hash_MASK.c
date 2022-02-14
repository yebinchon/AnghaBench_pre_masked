
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wlp_uuid {int* data; } ;



__attribute__((used)) static
u8 FUNC_0(struct wlp_uuid *VAR_0)
{
 return VAR_0->data[0] ^ VAR_0->data[1] ^ VAR_0->data[2]
        ^ VAR_0->data[3] ^ VAR_0->data[4] ^ VAR_0->data[5]
        ^ VAR_0->data[6] ^ VAR_0->data[7] ^ VAR_0->data[8]
        ^ VAR_0->data[9] ^ VAR_0->data[10] ^ VAR_0->data[11]
        ^ VAR_0->data[12] ^ VAR_0->data[13] ^ VAR_0->data[14]
        ^ VAR_0->data[15];
}
