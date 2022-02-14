
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int flag ;
typedef scalar_t__ curl_socket_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int *) ;
 scalar_t__* VAR_11 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (char*,...) ;
 size_t VAR_13 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ,void*,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int) ;

__attribute__((used)) static curl_socket_t FUNC_8(curl_socket_t VAR_15)
{
  curl_socket_t VAR_16 = VAR_0;
  int VAR_17;
  int VAR_18 = 1;

  if(VAR_4 == VAR_13) {
    FUNC_2("Too many open sockets!");
    return VAR_0;
  }

  VAR_16 = FUNC_0(VAR_15, ((void*)0), ((void*)0));

  if(VAR_12) {
    if(VAR_0 != VAR_16)
      FUNC_3(VAR_16);
    return VAR_0;
  }

  if(VAR_0 == VAR_16) {
    VAR_17 = VAR_6;
    if(VAR_1 == VAR_17 || VAR_2 == VAR_17) {

      return 0;
    }
    FUNC_2("MAJOR ERROR: accept() failed with error: (%d) %s",
           VAR_17, FUNC_7(VAR_17));
    return VAR_0;
  }

  if(0 != FUNC_1(VAR_16, VAR_10)) {
    VAR_17 = VAR_6;
    FUNC_2("curlx_nonblock failed with error: (%d) %s",
           VAR_17, FUNC_7(VAR_17));
    FUNC_3(VAR_16);
    return VAR_0;
  }

  if(0 != FUNC_5(VAR_16, VAR_7, VAR_8,
                     (void *)&VAR_18, sizeof(VAR_18))) {
    VAR_17 = VAR_6;
    FUNC_2("setsockopt(SO_KEEPALIVE) failed with error: (%d) %s",
           VAR_17, FUNC_7(VAR_17));
    FUNC_3(VAR_16);
    return VAR_0;
  }







  if(!VAR_14)
    FUNC_4(VAR_5);
  VAR_14 += 1;

  FUNC_2("====> Client connect");

  VAR_11[VAR_13] = VAR_16;
  VAR_13 += 1;
  return VAR_16;
}
