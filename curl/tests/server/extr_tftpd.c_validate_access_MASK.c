
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int weare ;
struct testcase {size_t bufsize; size_t rcount; long testno; scalar_t__ buffer; scalar_t__ rptr; } ;
typedef int partbuf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (scalar_t__*,size_t*,char*,char*,int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 size_t FUNC_6 (char*,int,char*,long) ;
 int FUNC_7 (struct testcase*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,char const*,int) ;
 char* FUNC_11 (char const*,char) ;
 long FUNC_12 (char*,char**,int) ;
 char* FUNC_13 (long) ;

__attribute__((used)) static int FUNC_14(struct testcase *VAR_2,
                           const char *VAR_3, int VAR_4)
{
  char *VAR_5;

  FUNC_5("trying to get file: %s mode %x", VAR_3, VAR_4);

  if(!FUNC_10("verifiedserver", VAR_3, 14)) {
    char VAR_6[128];
    size_t VAR_7 = FUNC_6(VAR_6, sizeof(VAR_6),
                             "WE ROOLZ: %ld\r\n", (long)FUNC_4());

    FUNC_5("Are-we-friendly question received");
    VAR_2->buffer = FUNC_8(VAR_6);
    VAR_2->rptr = VAR_2->buffer;
    VAR_2->bufsize = VAR_7;
    VAR_2->rcount = VAR_7;
    return 0;
  }


  VAR_5 = FUNC_11(VAR_3, '/');

  if(VAR_5) {
    char VAR_8[80]="data";
    long VAR_9;
    long VAR_10;
    char *VAR_11;

    VAR_5++;


    while(*VAR_5 && !FUNC_0(*VAR_5))
      VAR_5++;


    VAR_10 = FUNC_12(VAR_5, &VAR_5, 10);

    if(VAR_10 > 10000) {
      VAR_9 = VAR_10 % 10000;
      VAR_10 /= 10000;
    }
    else
      VAR_9 = 0;


    FUNC_5("requested test number %ld part %ld", VAR_10, VAR_9);

    VAR_2->testno = VAR_10;

    (void)FUNC_7(VAR_2);

    VAR_11 = FUNC_13(VAR_10);

    if(0 != VAR_9)
      FUNC_6(VAR_8, sizeof(VAR_8), "data%ld", VAR_9);

    if(VAR_11) {
      FILE *VAR_12 = FUNC_2(VAR_11, "rb");
      if(!VAR_12) {
        int VAR_13 = VAR_1;
        FUNC_5("fopen() failed with error: %d %s", VAR_13, FUNC_9(VAR_13));
        FUNC_5("Error opening file: %s", VAR_11);
        FUNC_5("Couldn't open test file: %s", VAR_11);
        return VAR_0;
      }
      else {
        size_t VAR_14;
        int VAR_15 = FUNC_3(&VAR_2->buffer, &VAR_14, "reply", VAR_8, VAR_12);
        FUNC_1(VAR_12);
        if(VAR_15) {
          FUNC_5("getpart() failed with error: %d", VAR_15);
          return VAR_0;
        }
        if(VAR_2->buffer) {
          VAR_2->rptr = VAR_2->buffer;
          VAR_2->bufsize = VAR_14;
          VAR_2->rcount = VAR_14;
        }
        else
          return VAR_0;
      }

    }
    else
      return VAR_0;
  }
  else {
    FUNC_5("no slash found in path");
    return VAR_0;
  }

  FUNC_5("file opened and all is good");
  return 0;
}
