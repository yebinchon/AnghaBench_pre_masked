
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
 int VAR_5 ;
 scalar_t__ FUNC_1 (unsigned short,TYPE_3__*,int*) ;
 scalar_t__ VAR_6 ;
 void* FUNC_2 (unsigned short) ;
 int VAR_7 ;
 int FUNC_3 (unsigned short,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_3__*,int ,size_t) ;
 unsigned short FUNC_6 (void*) ;
 int FUNC_7 (unsigned short) ;
 int FUNC_8 (unsigned short,int ,int ,void*,int) ;
 int FUNC_9 (int) ;
 int VAR_8 ;
 int FUNC_10 (int) ;

__attribute__((used)) static curl_socket_t FUNC_11(curl_socket_t VAR_9,
                                unsigned short *VAR_10)
{

  srvr_sockaddr_union_t VAR_11;
  int VAR_12;
  int VAR_13;
  int VAR_14 = 0;
  int VAR_15 = 10;
  int VAR_16 = 20;
  int VAR_17 = 0;
  int VAR_18 = 0;

  do {
    VAR_17++;
    VAR_12 = 1;
    VAR_13 = FUNC_8(VAR_9, VAR_3, VAR_4,
         (void *)&VAR_12, sizeof(VAR_12));
    if(VAR_13) {
      VAR_18 = VAR_2;
      FUNC_4("setsockopt(SO_REUSEADDR) failed with error: (%d) %s",
             VAR_18, FUNC_9(VAR_18));
      if(VAR_15) {
        VAR_13 = FUNC_10(VAR_16);
        if(VAR_13) {

          VAR_18 = VAR_5;
          FUNC_4("wait_ms() failed with error: (%d) %s",
                 VAR_18, FUNC_9(VAR_18));
          FUNC_7(VAR_9);
          return VAR_0;
        }
        if(VAR_6) {
          FUNC_4("signalled to die, exiting...");
          FUNC_7(VAR_9);
          return VAR_0;
        }
        VAR_14 += VAR_16;
        VAR_16 *= 2;
      }
    }
  } while(VAR_13 && VAR_15--);

  if(VAR_13) {
    FUNC_4("setsockopt(SO_REUSEADDR) failed %d times in %d ms. Error: (%d) %s",
           VAR_17, VAR_14, VAR_18, FUNC_9(VAR_18));
    FUNC_4("Continuing anyway...");
  }







    FUNC_5(&VAR_11.sa4, 0, sizeof(VAR_11.sa4));
    VAR_11.sa4.sin_family = 129;
    VAR_11.sa4.sin_addr.s_addr = VAR_1;
    VAR_11.sa4.sin_port = FUNC_2(*VAR_10);
    VAR_13 = FUNC_0(VAR_9, &VAR_11.sa, sizeof(VAR_11.sa4));
  if(VAR_13) {
    VAR_18 = VAR_2;
    FUNC_4("Error binding socket on port %hu: (%d) %s",
           *VAR_10, VAR_18, FUNC_9(VAR_18));
    FUNC_7(VAR_9);
    return VAR_0;
  }

  if(!*VAR_10) {


    curl_socklen_t VAR_19;
    srvr_sockaddr_union_t VAR_20;



      VAR_19 = sizeof(VAR_20.sa4);




    FUNC_5(&VAR_20.sa, 0, (size_t)VAR_19);
    if(FUNC_1(VAR_9, &VAR_20.sa, &VAR_19) < 0) {
      VAR_18 = VAR_2;
      FUNC_4("getsockname() failed with error: (%d) %s",
             VAR_18, FUNC_9(VAR_18));
      FUNC_7(VAR_9);
      return VAR_0;
    }
    switch(VAR_20.sa.sa_family) {
    case 129:
      *VAR_10 = FUNC_6(VAR_20.sa4.sin_port);
      break;





    default:
      break;
    }
    if(!*VAR_10) {

      FUNC_4("Apparently getsockname() succeeded, with listener port zero.");
      FUNC_4("A valid reason for this failure is a binary built without");
      FUNC_4("proper network library linkage. This might not be the only");
      FUNC_4("reason, but double check it before anything else.");
      FUNC_7(VAR_9);
      return VAR_0;
    }
  }


  VAR_13 = FUNC_3(VAR_9, 5);
  if(0 != VAR_13) {
    VAR_18 = VAR_2;
    FUNC_4("listen(%d, 5) failed with error: (%d) %s",
           VAR_9, VAR_18, FUNC_9(VAR_18));
    FUNC_7(VAR_9);
    return VAR_0;
  }

  return VAR_9;
}
