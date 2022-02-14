
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untd_hdr {int type; } ;



__attribute__((used)) static inline int FUNC_0(const struct untd_hdr *VAR_0)
{
 return (VAR_0->type >> 2) & 0x01;
}
