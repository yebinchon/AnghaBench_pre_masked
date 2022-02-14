
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* data; } ;
typedef TYPE_1__ tftp_packet_t ;



__attribute__((used)) static unsigned short FUNC_0(const tftp_packet_t *VAR_0)
{
  return (unsigned short)((VAR_0->data[0] << 8) | VAR_0->data[1]);
}
