
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_packet_header {int packet_rank; int protocol; } ;


 int VAR_0 ;




__attribute__((used)) static char *FUNC_0(const unsigned char *VAR_1, unsigned VAR_2)
{
 struct nl_packet_header *VAR_3 = (struct nl_packet_header *) VAR_1;

 if (VAR_2 == 0)
  return "     ";

 if (VAR_3->packet_rank & VAR_0) {
  switch (VAR_3->protocol) {
  case 129: return "DATA ";
  case 130: return "CTRL ";
  case 128: return "SETUP";
  default: return "???? ";
  }
 } else
  return "     ";
}
