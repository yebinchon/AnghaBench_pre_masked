
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int events; int fd; } ;
struct connectdata {int * sock; } ;
typedef size_t ssize_t ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (struct pollfd*,int,int) ;
 int FUNC_1 (struct connectdata*,int ,unsigned char*,size_t,size_t*) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (size_t) ;

__attribute__((used)) static CURLcode FUNC_4(struct connectdata *VAR_6,
                                 char *VAR_7, ssize_t VAR_8)
{
  ssize_t VAR_9, VAR_10, VAR_11;
  unsigned char *VAR_12 = ((void*)0);
  CURLcode VAR_13 = VAR_0;
  ssize_t VAR_14, VAR_15;


  VAR_9 = 0;
  for(VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
    if((unsigned char)VAR_7[VAR_10] == VAR_3)
      VAR_9++;
  VAR_11 = VAR_8 + VAR_9;

  if(VAR_11 == VAR_8)
    VAR_12 = (unsigned char *)VAR_7;
  else {
    ssize_t VAR_16;
    VAR_12 = FUNC_3(VAR_8 + VAR_9 + 1);
    if(!VAR_12)
      return VAR_1;

    VAR_16 = 0;
    for(VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
      VAR_12[VAR_16++] = VAR_7[VAR_10];
      if((unsigned char)VAR_7[VAR_10] == VAR_3)
        VAR_12[VAR_16++] = VAR_3;
    }
    VAR_12[VAR_16] = '\0';
  }

  VAR_15 = 0;
  while(!VAR_13 && VAR_15 < VAR_11) {

    struct pollfd VAR_17[1];
    VAR_17[0].fd = VAR_6->sock[VAR_4];
    VAR_17[0].events = VAR_5;
    switch(FUNC_0(VAR_17, 1, -1)) {
      case -1:
      case 0:
        VAR_13 = VAR_2;
        break;
      default:
        VAR_14 = 0;
        VAR_13 = FUNC_1(VAR_6, VAR_6->sock[VAR_4],
                            VAR_12 + VAR_15,
                            VAR_11 - VAR_15,
                            &VAR_14);
        VAR_15 += VAR_14;
        break;
    }
  }


  if(VAR_12 != (unsigned char *)VAR_7)
    FUNC_2(VAR_12);

  return VAR_13;
}
