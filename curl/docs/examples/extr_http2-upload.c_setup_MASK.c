
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {long st_size; } ;
struct input {int num; void* in; int * hnd; } ;
typedef long curl_off_t ;
typedef int FILE ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 long VAR_13 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,int ,...) ;
 void* FUNC_2 (char const*,char*) ;
 long VAR_14 ;
 long VAR_15 ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (char const*,struct stat*) ;

__attribute__((used)) static void FUNC_5(struct input *VAR_16, int VAR_17, const char *VAR_18)
{
  FILE *VAR_19;
  char VAR_20[256];
  char VAR_21[128];
  struct stat VAR_22;
  curl_off_t VAR_23;
  CURL *VAR_24;

  VAR_24 = VAR_16->hnd = FUNC_0();
  VAR_16->num = VAR_17;
  FUNC_3(VAR_21, 128, "dl-%d", VAR_17);
  VAR_19 = FUNC_2(VAR_21, "wb");

  FUNC_3(VAR_20, 256, "https://localhost:8443/upload-%d", VAR_17);


  FUNC_4(VAR_18, &VAR_22);
  VAR_23 = VAR_22.st_size;

  VAR_16->in = FUNC_2(VAR_18, "rb");


  FUNC_1(VAR_24, VAR_12, VAR_19);


  FUNC_1(VAR_24, VAR_6, VAR_15);

  FUNC_1(VAR_24, VAR_5, VAR_16);

  FUNC_1(VAR_24, VAR_3, VAR_23);


  FUNC_1(VAR_24, VAR_10, VAR_20);


  FUNC_1(VAR_24, VAR_9, 1L);


  FUNC_1(VAR_24, VAR_11, 1L);
  FUNC_1(VAR_24, VAR_1, VAR_14);
  FUNC_1(VAR_24, VAR_0, VAR_16);


  FUNC_1(VAR_24, VAR_2, VAR_13);


  FUNC_1(VAR_24, VAR_8, 0L);
  FUNC_1(VAR_24, VAR_7, 0L);





}
