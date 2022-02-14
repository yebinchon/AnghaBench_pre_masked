
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httprequest {char* reqbuf; int checkindex; size_t offset; int cl; void* pipelining; scalar_t__ pipe; scalar_t__ skip; scalar_t__ rtp_buffersize; int * rtp_buffer; scalar_t__ prot_version; int protocol; int rcmd; void* ntlm; void* digest; void* auth; void* auth_req; int open; scalar_t__ partno; int testno; } ;
typedef scalar_t__ ssize_t ;
typedef int curl_socket_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct httprequest*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*,size_t) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,size_t) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(curl_socket_t VAR_8, struct httprequest *VAR_9)
{
  int VAR_10;
  int VAR_11 = 0;
  int VAR_12 = 0;
  char *VAR_13 = VAR_9->reqbuf;
  ssize_t VAR_14 = 0;

  char *VAR_15 = ((void*)0);
  size_t VAR_16 = 0;

  if(VAR_9->pipelining) {
    VAR_15 = VAR_13 + VAR_9->checkindex;
    VAR_16 = VAR_9->offset - VAR_9->checkindex;
  }



  VAR_9->checkindex = 0;
  VAR_9->offset = 0;
  VAR_9->testno = VAR_0;
  VAR_9->partno = 0;
  VAR_9->open = VAR_6;
  VAR_9->auth_req = VAR_1;
  VAR_9->auth = VAR_1;
  VAR_9->cl = 0;
  VAR_9->digest = VAR_1;
  VAR_9->ntlm = VAR_1;
  VAR_9->pipe = 0;
  VAR_9->skip = 0;
  VAR_9->rcmd = VAR_2;
  VAR_9->protocol = VAR_4;
  VAR_9->prot_version = 0;
  VAR_9->pipelining = VAR_1;
  VAR_9->rtp_buffer = ((void*)0);
  VAR_9->rtp_buffersize = 0;



  while(!VAR_12 && (VAR_9->offset < VAR_3-1)) {
    if(VAR_16 && VAR_15) {
      FUNC_3(VAR_13, VAR_15, VAR_16);
      VAR_14 = FUNC_1(VAR_16);
      VAR_16 = 0;
    }
    else {
      if(VAR_9->skip)



        VAR_14 = FUNC_4(VAR_8, VAR_13 + VAR_9->offset, VAR_9->cl);
      else
        VAR_14 = FUNC_4(VAR_8, VAR_13 + VAR_9->offset, VAR_3-1 - VAR_9->offset);
    }
    if(VAR_7)
      return 1;
    if(VAR_14 == 0) {
      FUNC_2("Connection closed by client");
      VAR_11 = 1;
    }
    else if(VAR_14 < 0) {
      VAR_10 = VAR_5;
      FUNC_2("recv() returned error: (%d) %s", VAR_10, FUNC_6(VAR_10));
      VAR_11 = 1;
    }
    if(VAR_11) {

      VAR_13[VAR_9->offset] = '\0';
      FUNC_5(VAR_13, VAR_9->offset);
      return 1;
    }

    FUNC_2("Read %zd bytes", VAR_14);

    VAR_9->offset += (size_t)VAR_14;
    VAR_13[VAR_9->offset] = '\0';

    VAR_12 = FUNC_0(VAR_9);
    if(VAR_7)
      return 1;
    if(VAR_12 && VAR_9->pipe) {
      FUNC_2("Waiting for another piped request");
      VAR_12 = 0;
      VAR_9->pipe--;
    }
  }

  if((VAR_9->offset == VAR_3-1) && (VAR_14 > 0)) {
    FUNC_2("Request would overflow buffer, closing connection");

    VAR_13[VAR_3-1] = '\0';
    VAR_11 = 1;
  }
  else if(VAR_9->offset > VAR_3-1) {
    FUNC_2("Request buffer overflow, closing connection");

    VAR_13[VAR_3-1] = '\0';
    VAR_11 = 1;
  }
  else
    VAR_13[VAR_9->offset] = '\0';


  FUNC_5(VAR_13, VAR_9->pipelining ? VAR_9->checkindex : VAR_9->offset);
  if(VAR_7)
    return 1;

  return VAR_11;
}
