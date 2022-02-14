
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,unsigned char*,size_t) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static ssize_t FUNC_3(int VAR_5, void *VAR_6, size_t VAR_7)
{
  int VAR_8;
  ssize_t VAR_9 = 0;

  do {
    ssize_t VAR_10 = FUNC_1(VAR_5,
                      (unsigned char *)VAR_6 + VAR_9, VAR_7 - VAR_9);

    if(VAR_3) {
      FUNC_0("signalled to die");
      return -1;
    }

    if(VAR_10 < 0) {
      VAR_8 = VAR_2;
      if((VAR_8 == VAR_1) || (VAR_8 == VAR_0))
        continue;
      FUNC_0("reading from file descriptor: %d,", VAR_5);
      FUNC_0("unrecoverable read() failure: (%d) %s",
             VAR_8, FUNC_2(VAR_8));
      return -1;
    }

    if(VAR_10 == 0) {
      FUNC_0("got 0 reading from stdin");
      return 0;
    }

    VAR_9 += VAR_10;

  } while((size_t)VAR_9 < VAR_7);

  if(VAR_4)
    FUNC_0("read %zd bytes", VAR_9);

  return VAR_9;
}
