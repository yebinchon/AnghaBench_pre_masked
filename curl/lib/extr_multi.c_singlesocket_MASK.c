
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_sh_entry {unsigned int action; int transfers; int socketp; int users; scalar_t__ readers; scalar_t__ writers; } ;
struct Curl_multi {int sockhash; int socket_userp; int (* socket_cb ) (struct Curl_easy*,scalar_t__,unsigned int,int ,int ) ;} ;
struct Curl_easy {int numsocks; scalar_t__* sockets; unsigned int* actions; } ;
typedef scalar_t__ curl_socket_t ;
typedef int CURLMcode ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*,int,struct Curl_easy*) ;
 scalar_t__ FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int*,...) ;
 unsigned int FUNC_6 (struct Curl_easy*,scalar_t__*) ;
 struct Curl_sh_entry* FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (struct Curl_sh_entry*,int *,scalar_t__) ;
 struct Curl_sh_entry* FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (struct Curl_easy*,scalar_t__,unsigned int,int ,int ) ;
 int FUNC_11 (struct Curl_easy*,scalar_t__,unsigned int,int ,int ) ;

__attribute__((used)) static CURLMcode FUNC_12(struct Curl_multi *VAR_10,
                              struct Curl_easy *VAR_11)
{
  curl_socket_t VAR_12[VAR_8];
  int VAR_13;
  struct Curl_sh_entry *VAR_14;
  curl_socket_t VAR_15;
  int VAR_16;
  unsigned int VAR_17;
  int VAR_18[VAR_8];

  for(VAR_13 = 0; VAR_13< VAR_8; VAR_13++)
    VAR_12[VAR_13] = VAR_6;



  VAR_17 = FUNC_6(VAR_11, VAR_12);






  for(VAR_13 = 0; (VAR_13< VAR_8) &&
        (VAR_17 & (FUNC_3(VAR_13) | FUNC_4(VAR_13)));
      VAR_13++) {
    unsigned int VAR_19 = VAR_3;
    unsigned int VAR_20 = 0;
    unsigned int VAR_21;
    bool VAR_22 = VAR_7;

    VAR_15 = VAR_12[VAR_13];


    VAR_14 = FUNC_9(&VAR_10->sockhash, VAR_15);

    if(VAR_17 & FUNC_3(VAR_13))
      VAR_19 |= VAR_2;
    if(VAR_17 & FUNC_4(VAR_13))
      VAR_19 |= VAR_4;

    VAR_18[VAR_13] = VAR_19;
    if(VAR_14) {

      int VAR_23;
      for(VAR_23 = 0; VAR_23< VAR_11->numsocks; VAR_23++) {
        if(VAR_15 == VAR_11->sockets[VAR_23]) {
          VAR_20 = VAR_11->actions[VAR_23];
          VAR_22 = VAR_9;
          break;
        }
      }
    }
    else {

      VAR_14 = FUNC_7(&VAR_10->sockhash, VAR_15);
      if(!VAR_14)

        return VAR_1;
    }
    if(VAR_22 && (VAR_20 != VAR_19)) {

      if(VAR_20 & VAR_2)
        VAR_14->readers--;
      if(VAR_20 & VAR_4)
        VAR_14->writers--;
      if(VAR_19 & VAR_2)
        VAR_14->readers++;
      if(VAR_19 & VAR_4)
        VAR_14->writers++;
    }
    else if(!VAR_22) {

      VAR_14->users++;
      if(VAR_19 & VAR_2)
        VAR_14->readers++;
      if(VAR_19 & VAR_4)
        VAR_14->writers++;


      if(!FUNC_0(&VAR_14->transfers, (char *)&VAR_11,
                        sizeof(struct Curl_easy *), VAR_11))
        return VAR_1;
    }

    VAR_21 = (VAR_14->writers? VAR_4 : 0) |
      (VAR_14->readers ? VAR_2 : 0);


    if(VAR_22 && (VAR_14->action == VAR_21))

      continue;

    if(VAR_10->socket_cb)
      VAR_10->socket_cb(VAR_11, VAR_15, VAR_21, VAR_10->socket_userp,
                       VAR_14->socketp);

    VAR_14->action = VAR_21;
  }

  VAR_16 = VAR_13;



  for(VAR_13 = 0; VAR_13< VAR_11->numsocks; VAR_13++) {
    int VAR_24;
    bool VAR_25 = VAR_7;
    VAR_15 = VAR_11->sockets[VAR_13];
    for(VAR_24 = 0; VAR_24 < VAR_16; VAR_24++) {
      if(VAR_15 == VAR_12[VAR_24]) {

        VAR_25 = VAR_9;
        break;
      }
    }
    if(VAR_25)
      continue;

    VAR_14 = FUNC_9(&VAR_10->sockhash, VAR_15);


    if(VAR_14) {
      int VAR_26 = VAR_11->actions[VAR_13];

      VAR_14->users--;
      if(VAR_26 & VAR_4)
        VAR_14->writers--;
      if(VAR_26 & VAR_2)
        VAR_14->readers--;
      if(!VAR_14->users) {
        if(VAR_10->socket_cb)
          VAR_10->socket_cb(VAR_11, VAR_15, VAR_5,
                           VAR_10->socket_userp,
                           VAR_14->socketp);
        FUNC_8(VAR_14, &VAR_10->sockhash, VAR_15);
      }
      else {

        if(FUNC_1(&VAR_14->transfers, (char *)&VAR_11,
                            sizeof(struct Curl_easy *))) {
          FUNC_2(((void*)0));
        }
      }
    }
  }

  FUNC_5(VAR_11->sockets, VAR_12, VAR_16*sizeof(curl_socket_t));
  FUNC_5(VAR_11->actions, VAR_18, VAR_16*sizeof(int));
  VAR_11->numsocks = VAR_16;
  return VAR_0;
}
