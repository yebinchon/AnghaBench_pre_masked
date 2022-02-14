
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* mime_type; scalar_t__* description; } ;
typedef scalar_t__ FLAC__byte ;
typedef int FLAC__bool ;
typedef TYPE_1__ FLAC__StreamMetadata_Picture ;


 unsigned int FUNC_0 (scalar_t__*) ;

FLAC__bool FUNC_1(const FLAC__StreamMetadata_Picture *VAR_0, const char **VAR_1)
{
 char *VAR_2;
 FLAC__byte *VAR_3;

 for(VAR_2 = VAR_0->mime_type; *VAR_2; VAR_2++) {
  if(*VAR_2 < 0x20 || *VAR_2 > 0x7e) {
   if(VAR_1) *VAR_1 = "MIME type string must contain only printable ASCII characters (0x20-0x7e)";
   return 0;
  }
 }

 for(VAR_3 = VAR_0->description; *VAR_3; ) {
  unsigned VAR_4 = FUNC_0(VAR_3);
  if(VAR_4 == 0) {
   if(VAR_1) *VAR_1 = "description string must be valid UTF-8";
   return 0;
  }
  VAR_3 += VAR_4;
 }

 return 1;
}
