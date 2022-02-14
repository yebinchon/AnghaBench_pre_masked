
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_hdr {int WordCount; } ;



__attribute__((used)) static inline void *
FUNC_0(struct smb_hdr *VAR_0)
{
 return (void *)VAR_0 + sizeof(*VAR_0) + 2 * VAR_0->WordCount;
}
