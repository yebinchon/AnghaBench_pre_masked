
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ st_size; } ;
typedef TYPE_2__ struct_stat ;
struct TYPE_8__ {int sockets; } ;
struct TYPE_6__ {int member_2; int member_1; int * member_0; } ;
struct timeval {int member_0; int tv_sec; int tv_usec; TYPE_3__ write; TYPE_3__ read; TYPE_1__ member_1; } ;
struct ReadWriteSockets {int member_0; int tv_sec; int tv_usec; TYPE_3__ write; TYPE_3__ read; TYPE_1__ member_1; } ;
typedef int fd_set ;
typedef scalar_t__ curl_socket_t ;
typedef long curl_off_t ;
typedef int FILE ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,TYPE_3__*,int *,int ,char*) ;
 int FUNC_3 (int *,int*) ;
 struct timeval* VAR_21 ;
 struct timeval* VAR_22 ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,...) ;
 int VAR_23 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (char*,char*) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,TYPE_2__*) ;
 int FUNC_16 (struct timeval*) ;
 char* VAR_24 ;
 long VAR_25 ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ,struct timeval*) ;
 int FUNC_20 (int *,int ,int ,char*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_23 () ;
 int VAR_26 ;
 char* FUNC_24 (int) ;
 int FUNC_25 (TYPE_3__*,int *,scalar_t__*) ;

int FUNC_26(char *VAR_27)
{
  int VAR_28 = 0;
  CURL *VAR_29 = ((void*)0);
  FILE *VAR_30 = ((void*)0);
  int VAR_31;
  struct_stat VAR_32;
  CURLM *VAR_33 = ((void*)0);
  struct ReadWriteSockets VAR_34 = {{((void*)0), 0, 0}, {((void*)0), 0, 0}};
  struct timeval VAR_35 = {-1, 0};
  int VAR_36 = 0;

  FUNC_23();

  if(!VAR_25) {
    FUNC_13(VAR_26, "Usage: lib582 [url] [filename] [username]\n");
    return VAR_20;
  }

  VAR_30 = FUNC_12(VAR_24, "rb");
  if(((void*)0) == VAR_30) {
    FUNC_13(VAR_26, "fopen() failed with error: %d (%s)\n",
            VAR_23, FUNC_24(VAR_23));
    FUNC_13(VAR_26, "Error opening file: (%s)\n", VAR_24);
    return VAR_17;
  }


  VAR_31 = FUNC_15(FUNC_11(VAR_30), &VAR_32);
  if(VAR_31 == -1) {

    FUNC_13(VAR_26, "fstat() failed with error: %d (%s)\n",
            VAR_23, FUNC_24(VAR_23));
    FUNC_13(VAR_26, "ERROR: cannot open file (%s)\n", VAR_24);
    FUNC_10(VAR_30);
    return VAR_18;
  }
  FUNC_13(VAR_26, "Set to upload %d bytes\n", (int)VAR_32.st_size);

  FUNC_21(VAR_15);
  if(VAR_28) {
    FUNC_10(VAR_30);
    return VAR_28;
  }

  FUNC_8(VAR_29);


  FUNC_9(VAR_29, VAR_9, 1L);


  FUNC_9(VAR_29, VAR_10, VAR_27);


  FUNC_9(VAR_29, VAR_12, 1L);


  FUNC_9(VAR_29, VAR_5, VAR_30);

  FUNC_9(VAR_29, VAR_11, VAR_25);
  FUNC_9(VAR_29, VAR_7, "curl_client_key.pub");
  FUNC_9(VAR_29, VAR_6, "curl_client_key");
  FUNC_9(VAR_29, VAR_8, 0L);

  FUNC_9(VAR_29, VAR_4, (curl_off_t)VAR_32.st_size);

  FUNC_18(VAR_33);

  FUNC_19(VAR_33, VAR_1, VAR_21);
  FUNC_19(VAR_33, VAR_0, &VAR_34);

  FUNC_19(VAR_33, VAR_3, VAR_22);
  FUNC_19(VAR_33, VAR_2, &VAR_35);

  FUNC_17(VAR_33, VAR_29);

  while(!FUNC_3(VAR_33, &VAR_36)) {
    fd_set VAR_37, VAR_38;
    curl_socket_t VAR_39 = 0;
    struct timeval VAR_40 = {10, 0};

    FUNC_0(&VAR_37);
    FUNC_0(&VAR_38);
    FUNC_25(&VAR_34.read, &VAR_37, &VAR_39);
    FUNC_25(&VAR_34.write, &VAR_38, &VAR_39);

    if(VAR_35.tv_sec != -1) {
      int VAR_41 = FUNC_16(&VAR_35);
      VAR_40.tv_sec = VAR_41 / 1000000;
      VAR_40.tv_usec = VAR_41 % 1000000;
    }
    else if(VAR_39 <= 0) {
      VAR_40.tv_sec = 0;
      VAR_40.tv_usec = 100000;
    }

    FUNC_22((int)VAR_39, &VAR_37, &VAR_38, ((void*)0), &VAR_40);


    FUNC_2(VAR_33, &VAR_34.read, &VAR_37, VAR_13, "read");
    FUNC_2(VAR_33, &VAR_34.write, &VAR_38, VAR_14, "write");

    if(VAR_35.tv_sec != -1 && FUNC_16(&VAR_35) == 0) {

      FUNC_20(VAR_33, VAR_16, 0, "timeout");
    }

    FUNC_1();
  }

  if(!VAR_36) {
    FUNC_13(VAR_26, "Error uploading file.\n");
    VAR_28 = VAR_19;
  }

test_cleanup:



  FUNC_7(VAR_33, VAR_29);
  FUNC_4(VAR_29);
  FUNC_6(VAR_33);
  FUNC_5();


  FUNC_10(VAR_30);


  FUNC_14(VAR_34.read.sockets);
  FUNC_14(VAR_34.write.sockets);

  return VAR_28;
}
