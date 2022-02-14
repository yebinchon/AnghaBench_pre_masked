
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {struct Curl_easy* data; int * sock; } ;
struct Curl_easy {int dummy; } ;
typedef scalar_t__ ssize_t ;


 unsigned char VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct Curl_easy*,char*,int) ;
 int FUNC_1 (struct Curl_easy*,char*,int,int) ;
 scalar_t__ FUNC_2 (int ,unsigned char*,int) ;

__attribute__((used)) static void FUNC_3(struct connectdata *VAR_3, int VAR_4, int VAR_5)
{
   unsigned char VAR_6[3];
   ssize_t VAR_7;
   struct Curl_easy *VAR_8 = VAR_3->data;

   VAR_6[0] = VAR_0;
   VAR_6[1] = (unsigned char)VAR_4;
   VAR_6[2] = (unsigned char)VAR_5;

   VAR_7 = FUNC_2(VAR_3->sock[VAR_1], VAR_6, 3);
   if(VAR_7 < 0) {
     int VAR_9 = VAR_2;
     FUNC_0(VAR_8,"Sending data failed (%d)",VAR_9);
   }

   FUNC_1(VAR_3->data, "SENT", VAR_4, VAR_5);
}
