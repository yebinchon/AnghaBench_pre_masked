
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_fileinfo {char* filename; int size; int filetype; } ;
struct callback_data {int output; } ;




 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static long FUNC_2(struct curl_fileinfo *VAR_3,
                           struct callback_data *VAR_4,
                           int VAR_5)
{
  FUNC_1("%3d %40s %10luB ", VAR_5, VAR_3->filename,
         (unsigned long)VAR_3->size);

  switch(VAR_3->filetype) {
  case 129:
    FUNC_1(" DIR\n");
    break;
  case 128:
    FUNC_1("FILE ");
    break;
  default:
    FUNC_1("OTHER\n");
    break;
  }

  if(VAR_3->filetype == 128) {

    if(VAR_3->size > 50) {
      FUNC_1("SKIPPED\n");
      return VAR_2;
    }

    VAR_4->output = FUNC_0(VAR_3->filename, "wb");
    if(!VAR_4->output) {
      return VAR_0;
    }
  }

  return VAR_1;
}
