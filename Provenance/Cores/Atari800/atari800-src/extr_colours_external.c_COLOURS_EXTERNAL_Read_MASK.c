
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int loaded; unsigned char* palette; int filename; } ;
typedef int FILE ;
typedef TYPE_1__ COLOURS_EXTERNAL_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;

int FUNC_3(COLOURS_EXTERNAL_t *VAR_3)
{
 FILE *VAR_4;
 int VAR_5;
 unsigned char *VAR_6;

 VAR_4 = FUNC_2(VAR_3->filename, "rb");
 if (VAR_4 == ((void*)0)) {
  VAR_3->loaded = VAR_1;
  return VAR_1;
 }
 for (VAR_5 = 0, VAR_6 = VAR_3->palette; VAR_5 < 768; VAR_5++) {
  int VAR_7 = FUNC_1(VAR_4);
  if (VAR_7 == VAR_0) {
   FUNC_0(VAR_4);
   VAR_3->loaded = VAR_1;
   return VAR_1;
  }
  *VAR_6++ = VAR_7;
 }
 FUNC_0(VAR_4);
 VAR_3->loaded = VAR_2;
 return VAR_2;
}
