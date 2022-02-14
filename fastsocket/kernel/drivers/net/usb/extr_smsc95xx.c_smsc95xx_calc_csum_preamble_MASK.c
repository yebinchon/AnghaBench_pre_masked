
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int data; int head; scalar_t__ csum_start; scalar_t__ csum_offset; } ;



__attribute__((used)) static u32 FUNC_0(struct sk_buff *VAR_0)
{
 int VAR_1 = VAR_0->data - VAR_0->head;
 u16 VAR_2 = (u16)(VAR_0->csum_offset + VAR_0->csum_start - VAR_1);
 u16 VAR_3 = (u16)(VAR_0->csum_start - VAR_1);
 return (VAR_2 << 16) | VAR_3;
}
