
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_certinfo {int num_of_certs; int * certinfo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

void
FUNC_2(struct curl_certinfo *VAR_0)

{

  if(VAR_0) {
    if(VAR_0->certinfo) {
      int VAR_1;

      for(VAR_1 = 0; VAR_1 < VAR_0->num_of_certs; VAR_1++)
        FUNC_0(VAR_0->certinfo[VAR_1]);
      FUNC_1((char *) VAR_0->certinfo);
    }
    FUNC_1((char *) VAR_0);
  }
}
