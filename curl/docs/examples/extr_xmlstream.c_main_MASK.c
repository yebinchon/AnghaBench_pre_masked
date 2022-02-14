
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int memory; } ;
struct ParserStruct {int ok; TYPE_1__ characters; int tags; } ;
typedef scalar_t__ XML_Parser ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int ,int) ;
 scalar_t__ FUNC_3 (int *,char) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (scalar_t__,struct ParserStruct*) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 () ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,void*) ;
 char* FUNC_12 (scalar_t__) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int VAR_6 ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct ParserStruct*,int ,int) ;
 void* VAR_7 ;
 int FUNC_18 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_19(void)
{
  CURL *VAR_10;
  CURLcode VAR_11;
  XML_Parser VAR_12;
  struct ParserStruct VAR_13;


  FUNC_17(&VAR_13, 0, sizeof(struct ParserStruct));
  VAR_13.ok = 1;


  VAR_12 = FUNC_3(((void*)0), '\0');
  FUNC_7(VAR_12, &VAR_13);
  FUNC_6(VAR_12, VAR_8, VAR_6);
  FUNC_5(VAR_12, VAR_5);


  FUNC_14(VAR_4);
  VAR_10 = FUNC_9();
  FUNC_11(VAR_10, VAR_1,
                   "https://www.w3schools.com/xml/simple.xml");
  FUNC_11(VAR_10, VAR_3, VAR_7);
  FUNC_11(VAR_10, VAR_2, (void *)VAR_12);

  FUNC_18("Depth   Characters   Closing Tag\n");


  VAR_11 = FUNC_10(VAR_10);
  if(VAR_11 != VAR_0) {
    FUNC_15(VAR_9, "curl_easy_perform() failed: %s\n",
            FUNC_12(VAR_11));
  }
  else if(VAR_13.ok) {

    if(FUNC_2(VAR_12, ((void*)0), 0, 1) == 0) {
      int VAR_14 = FUNC_1(VAR_12);
      FUNC_15(VAR_9, "Finalizing parsing failed with error code %d (%s).\n",
              VAR_14, FUNC_0(VAR_14));
    }
    else {
      FUNC_18("                     --------------\n");
      FUNC_18("                     %lu tags total\n", VAR_13.tags);
    }
  }


  FUNC_16(VAR_13.characters.memory);
  FUNC_4(VAR_12);
  FUNC_8(VAR_10);
  FUNC_13();

  return 0;
}
