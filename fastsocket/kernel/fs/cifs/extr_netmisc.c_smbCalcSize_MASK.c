
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_hdr {int WordCount; } ;


 unsigned int FUNC_0 (struct smb_hdr*) ;

unsigned int
FUNC_1(struct smb_hdr *VAR_0)
{
 return (sizeof(struct smb_hdr) + (2 * VAR_0->WordCount) +
  2 + FUNC_0(VAR_0));
}
