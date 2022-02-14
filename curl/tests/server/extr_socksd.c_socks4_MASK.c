
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
typedef int send ;
typedef scalar_t__ curl_socket_t ;
struct TYPE_2__ {unsigned short port; int addr; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (unsigned short,int ) ;

__attribute__((used)) static curl_socket_t FUNC_5(curl_socket_t VAR_4,
                            unsigned char *VAR_5,
                            ssize_t VAR_6)
{
  unsigned char VAR_7[256 + 16];
  curl_socket_t VAR_8;
  unsigned char VAR_9;
  unsigned short VAR_10;

  if(VAR_5[VAR_1] != 1) {
    FUNC_1("SOCKS4 CD is not 1: %d", VAR_5[VAR_1]);
    return VAR_0;
  }
  if(VAR_6 < 9) {
    FUNC_1("SOCKS4 connect message too short: %d", VAR_6);
    return VAR_0;
  }
  if(!VAR_3.port)
    VAR_10 = (unsigned short)((VAR_5[VAR_2]<<8) |
                              (VAR_5[VAR_2 + 1]));
  else
    VAR_10 = VAR_3.port;

  VAR_8 = FUNC_4(VAR_10, VAR_3.addr);
  if(VAR_8 == VAR_0) {

    VAR_9 = 91;
  }
  else {

    VAR_9 = 90;
  }
  VAR_7[0] = 0;
  VAR_7[1] = VAR_9;

  FUNC_2(&VAR_7[2], &VAR_5[VAR_2], 6);
  VAR_6 = (send)(VAR_4, (char *)VAR_7, 8, 0);
  if(VAR_6 != 8) {
    FUNC_1("Sending SOCKS4 response failed!");
    return VAR_0;
  }
  FUNC_1("Sent %d bytes", VAR_6);
  FUNC_0(VAR_7, VAR_6);

  if(VAR_9 == 90)

    return VAR_8;

  if(VAR_8 != VAR_0)
    FUNC_3(VAR_8);

  return VAR_0;
}
