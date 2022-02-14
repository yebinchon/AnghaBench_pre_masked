
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* data; } ;
typedef TYPE_1__ tftp_packet_t ;



__attribute__((used)) static void FUNC_0(tftp_packet_t *VAR_0, unsigned short VAR_1)
{
  VAR_0->data[0] = (unsigned char)(VAR_1 >> 8);
  VAR_0->data[1] = (unsigned char)(VAR_1 & 0xff);
}
