
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int protocol; unsigned int address; int packet_rank; } ;
union nl_packet {unsigned char* rawpkt; TYPE_1__ hdr; } ;
struct ipw_hardware {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct ipw_hardware*,unsigned int,unsigned char const*,unsigned int,int) ;
 int FUNC_1 (struct ipw_hardware*,unsigned int,unsigned int,unsigned char const*,unsigned int,int) ;

__attribute__((used)) static void FUNC_2(struct ipw_hardware *VAR_4,
       const union nl_packet *VAR_5,
       unsigned short VAR_6)
{
 unsigned int VAR_7 = VAR_5->hdr.protocol;
 unsigned int VAR_8 = VAR_5->hdr.address;
 unsigned int VAR_9;
 const unsigned char *VAR_10;
 unsigned int VAR_11;
 int VAR_12 = VAR_5->hdr.packet_rank & VAR_3;

 if (VAR_5->hdr.packet_rank & VAR_0)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_2;

 VAR_10 = VAR_5->rawpkt + VAR_9;
 VAR_11 = VAR_6 - VAR_9;
 switch (VAR_7) {
 case 129:
 case 130:
  FUNC_1(VAR_4, VAR_7, VAR_8, VAR_10, VAR_11,
    VAR_12);
  break;
 case 128:
  FUNC_0(VAR_4, VAR_8, VAR_10, VAR_11,
    VAR_12);
  break;
 }
}
