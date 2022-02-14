
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ch_t {int head; scalar_t__ cyl; } ;
typedef int __u8 ;
typedef int __u32 ;
typedef scalar_t__ __u16 ;



__attribute__((used)) static void FUNC_0(struct ch_t *VAR_0, __u32 VAR_1, __u8 VAR_2)
{
 VAR_0->cyl = (__u16) VAR_1;
 VAR_0->head = VAR_1 >> 16;
 VAR_0->head <<= 4;
 VAR_0->head |= VAR_2;
}
