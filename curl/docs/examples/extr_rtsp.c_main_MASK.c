
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* version; } ;
typedef TYPE_1__ curl_version_info_data ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char const*,char*,scalar_t__) ;
 char* FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *,int ,...) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int *,char*,char*) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int *,char*,char const*) ;
 int FUNC_16 (int *,char*,char const*) ;
 int FUNC_17 (int *,char*) ;
 int FUNC_18 (char*,scalar_t__,char*,char const*,...) ;
 int VAR_10 ;
 char const* VAR_11 ;
 scalar_t__ FUNC_19 (char const*) ;
 char* FUNC_20 (char* const,char) ;

int FUNC_21(int VAR_12, char * const VAR_13[])
{

  const char *VAR_14 = "RTP/AVP;unicast;client_port=1234-1235";




  const char *VAR_15 = "0.000-";
  int VAR_16 = VAR_8;
  char *VAR_17 = ((void*)0);

  FUNC_12("\nRTSP request %s\n", VAR_9);
  FUNC_12("    Project web site: "
    "https://github.com/BackupGGCode/rtsprequest\n");
  FUNC_12("    Requires curl V7.20 or greater\n\n");


  if((VAR_12 != 2) && (VAR_12 != 3)) {
    VAR_17 = FUNC_20(VAR_13[0], '/');
    if(VAR_17 == ((void*)0)) {
      VAR_17 = FUNC_20(VAR_13[0], '\\');
    }
    if(VAR_17 == ((void*)0)) {
      VAR_17 = VAR_13[0];
    }
    else {
      VAR_17++;
    }
    FUNC_12("Usage:   %s url [transport]\n", VAR_17);
    FUNC_12("         url of video server\n");
    FUNC_12("         transport (optional) specifier for media stream"
           " protocol\n");
    FUNC_12("         default transport: %s\n", VAR_14);
    FUNC_12("Example: %s rtsp://192.168.0.2/media/video1\n\n", VAR_17);
    VAR_16 = VAR_7;
  }
  else {
    const char *VAR_18 = VAR_13[1];
    char *VAR_19 = FUNC_10(FUNC_19(VAR_18) + 32);
    char *VAR_20 = FUNC_10(FUNC_19(VAR_18) + 32);
    char *VAR_21 = FUNC_10(FUNC_19(VAR_18) + 32);
    CURLcode VAR_22;
    FUNC_9(VAR_18, VAR_20, FUNC_19(VAR_18) + 32);
    if(VAR_12 == 3) {
      VAR_14 = VAR_13[2];
    }


    VAR_22 = FUNC_4(VAR_6);
    if(VAR_22 == VAR_0) {
      curl_version_info_data *VAR_23 = FUNC_5(VAR_5);
      CURL *VAR_24;
      FUNC_6(VAR_10, "    curl V%s loaded\n", VAR_23->version);


      VAR_24 = FUNC_2();
      if(VAR_24 != ((void*)0)) {
        FUNC_11(VAR_24, VAR_4, 0L);
        FUNC_11(VAR_24, VAR_2, 1L);
        FUNC_11(VAR_24, VAR_1, VAR_11);
        FUNC_11(VAR_24, VAR_3, VAR_18);


        FUNC_18(VAR_19, FUNC_19(VAR_18) + 32, "%s", VAR_18);
        FUNC_14(VAR_24, VAR_19);


        FUNC_13(VAR_24, VAR_19, VAR_20);


        FUNC_8(VAR_20, VAR_21);


        FUNC_18(VAR_19, FUNC_19(VAR_18) + 32, "%s/%s", VAR_18, VAR_21);
        FUNC_16(VAR_24, VAR_19, VAR_14);


        FUNC_18(VAR_19, FUNC_19(VAR_18) + 32, "%s/", VAR_18);
        FUNC_15(VAR_24, VAR_19, VAR_15);
        FUNC_12("Playing video, press any key to stop ...");
        FUNC_0();
        FUNC_12("\n");


        FUNC_17(VAR_24, VAR_19);


        FUNC_1(VAR_24);
        VAR_24 = ((void*)0);
      }
      else {
        FUNC_6(VAR_10, "curl_easy_init() failed\n");
      }
      FUNC_3();
    }
    else {
      FUNC_6(VAR_10, "curl_global_init(%s) failed: %ld\n",
              "CURL_GLOBAL_ALL", VAR_22);
    }
    FUNC_7(VAR_21);
    FUNC_7(VAR_20);
    FUNC_7(VAR_19);
  }

  return VAR_16;
}
