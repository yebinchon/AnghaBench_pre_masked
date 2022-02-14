
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct ProgressData {scalar_t__ initial_size; scalar_t__ prev; int width; struct timeval prevtime; int out; scalar_t__ calls; } ;
typedef int format ;
typedef scalar_t__ curl_off_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ProgressData*,int) ;
 int FUNC_2 (int ,char*,char*,double) ;
 int FUNC_3 (char*,char,int) ;
 int FUNC_4 (char*,int,char*,int) ;
 long FUNC_5 (struct timeval,struct timeval) ;
 struct timeval FUNC_6 () ;

int FUNC_7(void *VAR_2,
                     curl_off_t VAR_3, curl_off_t VAR_4,
                     curl_off_t VAR_5, curl_off_t VAR_6)
{



  struct timeval VAR_7 = FUNC_6();
  struct ProgressData *VAR_8 = (struct ProgressData *)VAR_2;
  curl_off_t VAR_9;
  curl_off_t VAR_10;




  if(VAR_8->initial_size < 0 ||
     ((VAR_0 - VAR_8->initial_size) < (VAR_3 + VAR_5)))
    VAR_9 = VAR_0;
  else
    VAR_9 = VAR_3 + VAR_5 + VAR_8->initial_size;



  if(VAR_8->initial_size < 0 ||
     ((VAR_0 - VAR_8->initial_size) < (VAR_4 + VAR_6)))
    VAR_10 = VAR_0;
  else
    VAR_10 = VAR_4 + VAR_6 + VAR_8->initial_size;

  if(VAR_8->calls) {

    if(VAR_9) {

      if(VAR_8->prev == VAR_10)

        return 0;
      else if((FUNC_5(VAR_7, VAR_8->prevtime) < 100L) && VAR_10 < VAR_9)

        return 0;
    }
    else {

      if(FUNC_5(VAR_7, VAR_8->prevtime) < 100L)

        return 0;
      FUNC_1(VAR_8, VAR_10 != VAR_8->prev);
    }
  }


  VAR_8->calls++;

  if((VAR_9 > 0) && (VAR_10 != VAR_8->prev)) {
    char VAR_11[VAR_1 + 1];
    char VAR_12[40];
    double VAR_13;
    double VAR_14;
    int VAR_15;
    int VAR_16;
    if(VAR_10 > VAR_9)

      VAR_9 = VAR_10;

    VAR_13 = (double)VAR_10 / (double)VAR_9;
    VAR_14 = VAR_13 * 100.0;
    VAR_15 = VAR_8->width - 7;
    VAR_16 = (int) (((double)VAR_15) * VAR_13);
    if(VAR_16 > VAR_1)
      VAR_16 = VAR_1;
    FUNC_3(VAR_11, '#', VAR_16);
    VAR_11[VAR_16] = '\0';
    FUNC_4(VAR_12, sizeof(VAR_12), "\r%%-%ds %%5.1f%%%%", VAR_15);
    FUNC_2(VAR_8->out, VAR_12, VAR_11, VAR_14);
  }
  FUNC_0(VAR_8->out);
  VAR_8->prev = VAR_10;
  VAR_8->prevtime = VAR_7;

  return 0;
}
