
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_vpd {unsigned char protocol_identifier; int protocol_identifier_set; } ;


 int FUNC_0 (struct t10_vpd*,int *,int ) ;

void
FUNC_1(struct t10_vpd *VAR_0, unsigned char *VAR_1)
{





  if (VAR_1[1] & 0x80) {
  VAR_0->protocol_identifier = (VAR_1[0] & 0xf0);
  VAR_0->protocol_identifier_set = 1;
  FUNC_0(VAR_0, ((void*)0), 0);
 }
}
