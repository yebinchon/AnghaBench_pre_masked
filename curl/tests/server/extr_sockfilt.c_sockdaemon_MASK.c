
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int s_addr; } ;
struct TYPE_8__ {int sin_family; int sin6_family; int sa_family; void* sin6_port; void* sin_port; int sin6_addr; TYPE_1__ sin_addr; } ;
struct TYPE_7__ {TYPE_3__ sa6; TYPE_3__ sa4; TYPE_3__ sa; } ;
typedef TYPE_2__ srvr_sockaddr_union_t ;
typedef int flag ;
typedef int curl_socklen_t ;
typedef unsigned short curl_socket_t ;




 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned short,TYPE_3__*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (unsigned short,TYPE_3__*,int*) ;
 scalar_t__ VAR_7 ;
 void* FUNC_2 (unsigned short) ;
 int VAR_8 ;
 int FUNC_3 (unsigned short,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_3__*,int ,size_t) ;
 unsigned short FUNC_6 (void*) ;
 int FUNC_7 (unsigned short) ;
 int FUNC_8 (unsigned short,int ,int ,void*,int) ;
 int FUNC_9 (int) ;
 int VAR_9 ;
 int FUNC_10 (int) ;

__attribute__((used)) static curl_socket_t FUNC_11(curl_socket_t VAR_10,
                                unsigned short *VAR_11)
{

  srvr_sockaddr_union_t VAR_12;
  int VAR_13;
  int VAR_14;
  int VAR_15 = 0;
  int VAR_16 = 10;
  int VAR_17 = 20;
  int VAR_18 = 0;
  int VAR_19 = 0;

  do {
    VAR_18++;
    VAR_13 = 1;
    VAR_14 = FUNC_8(VAR_10, VAR_3, VAR_4,
         (void *)&VAR_13, sizeof(VAR_13));
    if(VAR_14) {
      VAR_19 = VAR_2;
      FUNC_4("setsockopt(SO_REUSEADDR) failed with error: (%d) %s",
             VAR_19, FUNC_9(VAR_19));
      if(VAR_16) {
        VAR_14 = FUNC_10(VAR_17);
        if(VAR_14) {

          VAR_19 = VAR_6;
          FUNC_4("wait_ms() failed with error: (%d) %s",
                 VAR_19, FUNC_9(VAR_19));
          FUNC_7(VAR_10);
          return VAR_0;
        }
        if(VAR_7) {
          FUNC_4("signalled to die, exiting...");
          FUNC_7(VAR_10);
          return VAR_0;
        }
        VAR_15 += VAR_17;
        VAR_17 *= 2;
      }
    }
  } while(VAR_14 && VAR_16--);

  if(VAR_14) {
    FUNC_4("setsockopt(SO_REUSEADDR) failed %d times in %d ms. Error: (%d) %s",
           VAR_18, VAR_15, VAR_19, FUNC_9(VAR_19));
    FUNC_4("Continuing anyway...");
  }







    FUNC_5(&VAR_12.sa4, 0, sizeof(VAR_12.sa4));
    VAR_12.sa4.sin_family = 129;
    VAR_12.sa4.sin_addr.s_addr = VAR_1;
    VAR_12.sa4.sin_port = FUNC_2(*VAR_11);
    VAR_14 = FUNC_0(VAR_10, &VAR_12.sa, sizeof(VAR_12.sa4));
  if(VAR_14) {
    VAR_19 = VAR_2;
    FUNC_4("Error binding socket on port %hu: (%d) %s",
           *VAR_11, VAR_19, FUNC_9(VAR_19));
    FUNC_7(VAR_10);
    return VAR_0;
  }

  if(!*VAR_11) {


    curl_socklen_t VAR_20;
    srvr_sockaddr_union_t VAR_21;



      VAR_20 = sizeof(VAR_21.sa4);




    FUNC_5(&VAR_21.sa, 0, (size_t)VAR_20);
    if(FUNC_1(VAR_10, &VAR_21.sa, &VAR_20) < 0) {
      VAR_19 = VAR_2;
      FUNC_4("getsockname() failed with error: (%d) %s",
             VAR_19, FUNC_9(VAR_19));
      FUNC_7(VAR_10);
      return VAR_0;
    }
    switch(VAR_21.sa.sa_family) {
    case 129:
      *VAR_11 = FUNC_6(VAR_21.sa4.sin_port);
      break;





    default:
      break;
    }
    if(!*VAR_11) {

      FUNC_4("Apparently getsockname() succeeded, with listener port zero.");
      FUNC_4("A valid reason for this failure is a binary built without");
      FUNC_4("proper network library linkage. This might not be the only");
      FUNC_4("reason, but double check it before anything else.");
      FUNC_7(VAR_10);
      return VAR_0;
    }
  }


  if(VAR_5) {
    FUNC_4("instructed to bind port without listening");
    return VAR_10;
  }


  VAR_14 = FUNC_3(VAR_10, 5);
  if(0 != VAR_14) {
    VAR_19 = VAR_2;
    FUNC_4("listen(%d, 5) failed with error: (%d) %s",
           VAR_10, VAR_19, FUNC_9(VAR_19));
    FUNC_7(VAR_10);
    return VAR_0;
  }

  return VAR_10;
}
