
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {unsigned int events; unsigned int revents; scalar_t__ fd; } ;
struct curl_waitfd {int events; unsigned short revents; scalar_t__ fd; } ;
struct Curl_multi {struct Curl_easy* easyp; scalar_t__ in_callback; } ;
struct Curl_easy {struct Curl_easy* next; } ;
typedef scalar_t__ curl_socket_t ;
typedef int CURLMcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pollfd*,unsigned int,int) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct Curl_multi*) ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct Curl_multi*,long*) ;
 int FUNC_6 (struct pollfd*) ;
 struct pollfd* FUNC_7 (unsigned int) ;
 int FUNC_8 (struct Curl_easy*,scalar_t__*) ;
 int FUNC_9 (struct Curl_multi*,long*) ;

__attribute__((used)) static CURLMcode FUNC_10(struct Curl_multi *VAR_15,
                                 struct curl_waitfd VAR_16[],
                                 unsigned int VAR_17,
                                 int VAR_18,
                                 int *VAR_19,
                                 bool VAR_20)
{
  struct Curl_easy *VAR_21;
  curl_socket_t VAR_22[VAR_9];
  int VAR_23;
  unsigned int VAR_24;
  unsigned int VAR_25 = 0;
  unsigned int VAR_26;
  bool VAR_27 = VAR_8;
  long VAR_28;
  int VAR_29 = 0;
  struct pollfd VAR_30[VAR_10];
  struct pollfd *VAR_31 = &VAR_30[0];

  if(!FUNC_4(VAR_15))
    return VAR_0;

  if(VAR_15->in_callback)
    return VAR_3;


  VAR_21 = VAR_15->easyp;
  while(VAR_21) {
    VAR_23 = FUNC_8(VAR_21, VAR_22);

    for(VAR_24 = 0; VAR_24< VAR_9; VAR_24++) {
      curl_socket_t VAR_32 = VAR_4;

      if(VAR_23 & FUNC_2(VAR_24)) {
        ++VAR_25;
        VAR_32 = VAR_22[VAR_24];
      }
      if(VAR_23 & FUNC_3(VAR_24)) {
        ++VAR_25;
        VAR_32 = VAR_22[VAR_24];
      }
      if(VAR_32 == VAR_4) {
        break;
      }
    }

    VAR_21 = VAR_21->next;
  }




  (void)FUNC_9(VAR_15, &VAR_28);
  if((VAR_28 >= 0) && (VAR_28 < (long)VAR_18))
    VAR_18 = (int)VAR_28;

  VAR_26 = VAR_25;
  VAR_25 += VAR_17;

  if(VAR_25 > VAR_10) {




    VAR_31 = FUNC_7(VAR_25 * sizeof(struct pollfd));
    if(!VAR_31)
      return VAR_2;
    VAR_27 = VAR_14;
  }
  VAR_25 = 0;




  if(VAR_26) {

    VAR_21 = VAR_15->easyp;
    while(VAR_21) {
      VAR_23 = FUNC_8(VAR_21, VAR_22);

      for(VAR_24 = 0; VAR_24< VAR_9; VAR_24++) {
        curl_socket_t VAR_33 = VAR_4;

        if(VAR_23 & FUNC_2(VAR_24)) {
          VAR_31[VAR_25].fd = VAR_22[VAR_24];
          VAR_31[VAR_25].events = VAR_11;
          ++VAR_25;
          VAR_33 = VAR_22[VAR_24];
        }
        if(VAR_23 & FUNC_3(VAR_24)) {
          VAR_31[VAR_25].fd = VAR_22[VAR_24];
          VAR_31[VAR_25].events = VAR_12;
          ++VAR_25;
          VAR_33 = VAR_22[VAR_24];
        }
        if(VAR_33 == VAR_4) {
          break;
        }
      }

      VAR_21 = VAR_21->next;
    }
  }


  for(VAR_24 = 0; VAR_24 < VAR_17; VAR_24++) {
    VAR_31[VAR_25].fd = VAR_16[VAR_24].fd;
    VAR_31[VAR_25].events = 0;
    if(VAR_16[VAR_24].events & VAR_5)
      VAR_31[VAR_25].events |= VAR_11;
    if(VAR_16[VAR_24].events & VAR_7)
      VAR_31[VAR_25].events |= VAR_13;
    if(VAR_16[VAR_24].events & VAR_6)
      VAR_31[VAR_25].events |= VAR_12;
    ++VAR_25;
  }

  if(VAR_25) {
    int VAR_34;

    VAR_34 = FUNC_0(VAR_31, VAR_25, VAR_18);

    if(VAR_34 > 0) {
      VAR_29 = VAR_34;



      for(VAR_24 = 0; VAR_24 < VAR_17; VAR_24++) {
        unsigned short VAR_35 = 0;
        unsigned VAR_36 = VAR_31[VAR_26 + VAR_24].revents;

        if(VAR_36 & VAR_11)
          VAR_35 |= VAR_5;
        if(VAR_36 & VAR_12)
          VAR_35 |= VAR_6;
        if(VAR_36 & VAR_13)
          VAR_35 |= VAR_7;

        VAR_16[VAR_24].revents = VAR_35;
      }
    }
  }

  if(VAR_27)
    FUNC_6(VAR_31);
  if(VAR_19)
    *VAR_19 = VAR_29;
  if(!VAR_20 || VAR_16 || VAR_26)

    ;
  else {
    long VAR_37 = 0;


    if(!FUNC_5(VAR_15, &VAR_37) && VAR_37) {
      if(VAR_37 > VAR_18)
        VAR_37 = VAR_18;
      FUNC_1((int)VAR_37);
    }
  }

  return VAR_1;
}
