
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tftphdr {char* th_data; } ;
struct testcase {int* rptr; scalar_t__ rcount; } ;
struct TYPE_2__ {struct tftphdr hdr; } ;
struct bf {int counter; TYPE_1__ buf; } ;


 int VAR_0 ;
 size_t FUNC_0 (int,scalar_t__) ;
 int VAR_1 ;
 struct bf* VAR_2 ;
 int FUNC_1 (char*,int*,size_t) ;
 int VAR_3 ;
 size_t VAR_4 ;
 char VAR_5 ;

__attribute__((used)) static void FUNC_2(struct testcase *VAR_6,
                       int VAR_7 )
{
  int VAR_8;
  char *VAR_9;
  int VAR_10;
  struct bf *VAR_11;
  struct tftphdr *VAR_12;

  VAR_11 = &VAR_2[VAR_4];
  if(VAR_11->counter != VAR_0)
    return;
  VAR_4 = !VAR_4;

  VAR_12 = &VAR_11->buf.hdr;

  if(VAR_7 == 0) {


    size_t VAR_13 = FUNC_0(VAR_1, VAR_6->rcount);
    FUNC_1(VAR_12->th_data, VAR_6->rptr, VAR_13);


    VAR_6->rcount -= VAR_13;
    VAR_6->rptr += VAR_13;
    VAR_11->counter = (int)VAR_13;
    return;
  }

  VAR_9 = VAR_12->th_data;
  for(VAR_8 = 0 ; VAR_8 < VAR_1; VAR_8++) {
    if(VAR_3) {
      if(VAR_5 == '\n')
        VAR_10 = '\n';
      else
        VAR_10 = '\0';
      VAR_3 = 0;
    }
    else {
      if(VAR_6->rcount) {
        VAR_10 = VAR_6->rptr[0];
        VAR_6->rptr++;
        VAR_6->rcount--;
      }
      else
        break;
      if(VAR_10 == '\n' || VAR_10 == '\r') {
        VAR_5 = VAR_10;
        VAR_10 = '\r';
        VAR_3 = 1;
      }
    }
    *VAR_9++ = (char)VAR_10;
  }
  VAR_11->counter = (int)(VAR_9 - VAR_12->th_data);
}
