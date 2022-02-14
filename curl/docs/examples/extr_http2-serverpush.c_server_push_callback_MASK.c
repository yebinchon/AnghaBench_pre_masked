
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_pushheaders {int dummy; } ;
typedef int FILE ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *) ;
 char* FUNC_1 (struct curl_pushheaders*,char*) ;
 char* FUNC_2 (struct curl_pushheaders*,size_t) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*,int,char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(CURL *VAR_4,
                                CURL *VAR_5,
                                size_t VAR_6,
                                struct curl_pushheaders *VAR_7,
                                void *VAR_8)
{
  char *VAR_9;
  size_t VAR_10;
  int *VAR_11 = (int *)VAR_8;
  char VAR_12[128];
  FILE *VAR_13;
  static unsigned int VAR_14 = 0;

  (void)VAR_4;

  FUNC_5(VAR_12, 128, "push%u", VAR_14++);


  VAR_13 = FUNC_3(VAR_12, "wb");
  if(!VAR_13) {

    FUNC_4(VAR_3, "Failed to create output file for push\n");
    return VAR_1;
  }


  FUNC_0(VAR_5, VAR_0, VAR_13);

  FUNC_4(VAR_3, "**** push callback approves stream %u, got %lu headers!\n",
          VAR_14, (unsigned long)VAR_6);

  for(VAR_10 = 0; VAR_10<VAR_6; VAR_10++) {
    VAR_9 = FUNC_2(VAR_7, VAR_10);
    FUNC_4(VAR_3, "**** header %lu: %s\n", (unsigned long)VAR_10, VAR_9);
  }

  VAR_9 = FUNC_1(VAR_7, ":path");
  if(VAR_9) {
    FUNC_4(VAR_3, "**** The PATH is %s\n", VAR_9 );
  }

  (*VAR_11)++;
  return VAR_2;
}
