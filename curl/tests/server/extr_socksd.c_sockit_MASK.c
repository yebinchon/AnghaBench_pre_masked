
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char ssize_t ;
typedef int socksport ;
typedef unsigned char send ;
typedef scalar_t__ curl_socket_t ;
typedef int buffer ;
struct TYPE_2__ {unsigned char version; unsigned char nmethods_min; unsigned char nmethods_max; unsigned char responseversion; unsigned char responsemethod; unsigned char reqcmd; unsigned short port; unsigned char connectrep; int addr; int password; int user; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned char*,unsigned char) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (unsigned char*,int ,unsigned char) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 unsigned char FUNC_5 (scalar_t__,char*,int,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,unsigned char*,unsigned char) ;
 scalar_t__ FUNC_8 (unsigned short,int ) ;
 unsigned char FUNC_9 (int ) ;

__attribute__((used)) static curl_socket_t FUNC_10(curl_socket_t VAR_14)
{
  unsigned char VAR_15[256 + 16];
  unsigned char VAR_16[256 + 16];
  ssize_t VAR_17;
  unsigned char VAR_18;
  unsigned char VAR_19;
  unsigned char VAR_20 = 0;
  unsigned char *VAR_21;
  unsigned short VAR_22;
  curl_socket_t VAR_23 = VAR_0;
  unsigned short VAR_24;

  FUNC_0();

  VAR_17 = FUNC_5(VAR_14, (char *)VAR_15, sizeof(VAR_15), 0);

  FUNC_2("READ %d bytes", VAR_17);
  FUNC_1(VAR_15, VAR_17);

  if(VAR_15[VAR_11] == 4)
    return FUNC_7(VAR_14, VAR_15, VAR_17);

  if(VAR_15[VAR_11] != VAR_13.version) {
    FUNC_2("VERSION byte not %d", VAR_13.version);
    return VAR_0;
  }
  if((VAR_15[VAR_5] < VAR_13.nmethods_min) ||
     (VAR_15[VAR_5] > VAR_13.nmethods_max)) {
    FUNC_2("NMETHODS byte not within %d - %d ",
           VAR_13.nmethods_min, VAR_13.nmethods_max);
    return VAR_0;
  }


  if(VAR_17 != (VAR_15[VAR_5] + 2)) {
    FUNC_2("Expected %d bytes, got %d", VAR_15[VAR_5] + 2, VAR_17);
    return VAR_0;
  }
  FUNC_2("Incoming request deemed fine!");


  VAR_16[0] = VAR_13.responseversion;
  VAR_16[1] = VAR_13.responsemethod;
  VAR_17 = (send)(VAR_14, (char *)VAR_16, 2, 0);
  if(VAR_17 != 2) {
    FUNC_2("Sending response failed!");
    return VAR_0;
  }
  FUNC_2("Sent %d bytes", VAR_17);
  FUNC_1(VAR_16, VAR_17);


  VAR_17 = FUNC_5(VAR_14, (char *)VAR_15, sizeof(VAR_15), 0);

  FUNC_2("READ %d bytes", VAR_17);
  FUNC_1(VAR_15, VAR_17);

  if(VAR_13.responsemethod == 2) {







    unsigned char VAR_25;
    unsigned char VAR_26;
    bool VAR_27 = VAR_12;
    if(VAR_17 < 5) {
      FUNC_2("Too short auth input: %d", VAR_17);
      return VAR_0;
    }
    if(VAR_15[VAR_11] != 1) {
      FUNC_2("Auth VERSION byte not 1, got %d", VAR_15[VAR_11]);
      return VAR_0;
    }
    VAR_25 = VAR_15[VAR_9];
    if(VAR_17 < 4 + VAR_25) {
      FUNC_2("Too short packet for username: %d", VAR_17);
      return VAR_0;
    }
    VAR_26 = VAR_15[VAR_9 + VAR_25 + 1];
    if(VAR_17 < 3 + VAR_25 + VAR_26) {
      FUNC_2("Too short packet for ulen %d plen %d: %d", VAR_25, VAR_26, VAR_17);
      return VAR_0;
    }
    if((VAR_25 != FUNC_9(VAR_13.user)) ||
       (VAR_26 != FUNC_9(VAR_13.password)) ||
       FUNC_3(&VAR_15[VAR_10], VAR_13.user, VAR_25) ||
       FUNC_3(&VAR_15[VAR_10 + VAR_25 + 1], VAR_13.password, VAR_26)) {

      FUNC_2("mismatched credentials!");
      VAR_27 = VAR_1;
    }
    VAR_16[0] = 1;
    VAR_16[1] = VAR_27 ? 0 : 1;
    VAR_17 = (send)(VAR_14, (char *)VAR_16, 2, 0);
    if(VAR_17 != 2) {
      FUNC_2("Sending auth response failed!");
      return VAR_0;
    }
    FUNC_2("Sent %d bytes", VAR_17);
    FUNC_1(VAR_16, VAR_17);
    if(!VAR_27)
      return VAR_0;


    VAR_17 = FUNC_5(VAR_14, (char *)VAR_15, sizeof(VAR_15), 0);

    FUNC_2("READ %d bytes", VAR_17);
    FUNC_1(VAR_15, VAR_17);
  }
  if(VAR_17 < 6) {
    FUNC_2("Too short for request: %d", VAR_17);
    return VAR_0;
  }

  if(VAR_15[VAR_11] != VAR_13.version) {
    FUNC_2("Request VERSION byte not %d", VAR_13.version);
    return VAR_0;
  }

  if(VAR_15[VAR_7] != VAR_13.reqcmd) {
    FUNC_2("Request COMMAND byte not %d", VAR_13.reqcmd);
    return VAR_0;
  }

  if(VAR_15[VAR_8] != 0) {
    FUNC_2("Request COMMAND byte not %d", VAR_13.reqcmd);
    return VAR_0;
  }





  VAR_19 = VAR_15[VAR_2];
  VAR_21 = &VAR_15[VAR_4];
  switch(VAR_19) {
  case 1:

    VAR_18 = 4;
    break;
  case 3:


    VAR_18 = VAR_15[VAR_4];
    VAR_18++;
    break;
  case 4:

    VAR_18 = 16;
    break;
  default:
    FUNC_2("Unknown ATYP %d", VAR_19);
    return VAR_0;
  }
  if(VAR_17 < (4 + VAR_18 + 2)) {
    FUNC_2("Request too short: %d, expected %d", VAR_17, 4 + VAR_18 + 2);
    return VAR_0;
  }

  if(!VAR_13.port) {
    unsigned char *VAR_28 = &VAR_15[VAR_4 + VAR_18];
    VAR_24 = (unsigned short)((VAR_28[0]<<8) | (VAR_28[1]));
  }
  else
    VAR_24 = VAR_13.port;

  if(!VAR_13.connectrep)
    VAR_23 = FUNC_8(VAR_24, VAR_13.addr);

  if(VAR_23 == VAR_0) {

    VAR_20 = 1;
  }
  else {
    VAR_20 = VAR_13.connectrep;
  }


  VAR_16[VAR_11] = VAR_13.responseversion;
  VAR_16[VAR_6] = VAR_20;
  VAR_16[VAR_8] = 0;
  VAR_16[VAR_2] = VAR_19;




  FUNC_4(&VAR_16[VAR_3], VAR_21, VAR_18);


  FUNC_4(&VAR_16[VAR_3 + VAR_18],
         &VAR_15[VAR_4 + VAR_18], sizeof(VAR_22));

  VAR_17 = (send)(VAR_14, (char *)VAR_16, VAR_18 + 6, 0);
  if(VAR_17 != (VAR_18 + 6)) {
    FUNC_2("Sending connect response failed!");
    return VAR_0;
  }
  FUNC_2("Sent %d bytes", VAR_17);
  FUNC_1(VAR_16, VAR_17);

  if(!VAR_20)
    return VAR_23;

  if(VAR_23 != VAR_0)
    FUNC_6(VAR_23);

  return VAR_0;
}
