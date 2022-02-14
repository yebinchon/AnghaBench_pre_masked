
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httprequest {char* reqbuf; int offset; int cl; scalar_t__ done_processing; scalar_t__ skip; } ;
typedef scalar_t__ ssize_t ;
typedef int curl_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct httprequest*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(curl_socket_t VAR_5, struct httprequest *VAR_6)
{
  int VAR_7 = 0;
  char *VAR_8 = VAR_6->reqbuf;
  ssize_t VAR_9 = 0;
  int VAR_10 = 0;

  if(VAR_6->offset >= VAR_2-1) {

    VAR_10 = 1;
  }
  else {
    if(VAR_6->skip)



      VAR_9 = FUNC_2(VAR_5, VAR_8 + VAR_6->offset, VAR_6->cl);
    else
      VAR_9 = FUNC_2(VAR_5, VAR_8 + VAR_6->offset, VAR_2-1 - VAR_6->offset);

    if(VAR_4)
      return -1;
    if(VAR_9 == 0) {
      FUNC_1("Connection closed by client");
      VAR_7 = 1;
    }
    else if(VAR_9 < 0) {
      int VAR_11 = VAR_3;
      if(VAR_0 == VAR_11 || VAR_1 == VAR_11) {

        return 0;
      }
      FUNC_1("recv() returned error: (%d) %s", VAR_11, FUNC_4(VAR_11));
      VAR_7 = 1;
    }
    if(VAR_7) {

      VAR_8[VAR_6->offset] = '\0';
      FUNC_3(VAR_8, VAR_6->offset);
      return -1;
    }

    FUNC_1("Read %zd bytes", VAR_9);

    VAR_6->offset += (size_t)VAR_9;
    VAR_8[VAR_6->offset] = '\0';

    VAR_6->done_processing = FUNC_0(VAR_6);
    if(VAR_4)
      return -1;
  }

  if(VAR_10 || (VAR_6->offset == VAR_2-1 && VAR_9 > 0)) {
    FUNC_1("Request would overflow buffer, closing connection");

    VAR_8[VAR_2-1] = '\0';
    VAR_7 = 1;
  }
  else if(VAR_6->offset > VAR_2-1) {
    FUNC_1("Request buffer overflow, closing connection");

    VAR_8[VAR_2-1] = '\0';
    VAR_7 = 1;
  }
  else
    VAR_8[VAR_6->offset] = '\0';


  if(VAR_7 || VAR_6->done_processing)
    FUNC_3(VAR_8, VAR_6->offset);
  if(VAR_4)
    return -1;

  return VAR_7 ? -1 : 1;
}
