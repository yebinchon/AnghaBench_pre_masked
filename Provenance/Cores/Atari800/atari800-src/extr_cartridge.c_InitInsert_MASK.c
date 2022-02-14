
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; int filename; } ;
typedef TYPE_1__ CARTRIDGE_image_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (char*,int ,char*) ;

__attribute__((used)) static void FUNC_3(CARTRIDGE_image_t *VAR_5)
{
 if (VAR_5->type != VAR_2) {
  int VAR_6 = VAR_5->type;
  int VAR_7 = FUNC_1(VAR_5->filename, VAR_5);
  if (VAR_7 < 0) {
   FUNC_2("Error inserting cartridge \"%s\": %s", VAR_5->filename,
   VAR_7 == VAR_1 ? "Can't open file" :
   VAR_7 == VAR_0 ? "Bad format" :
                                            "Bad checksum");
   VAR_5->type = VAR_2;
  }
  if (VAR_5->type == VAR_3 && VAR_4[VAR_6] == VAR_7)
   FUNC_0(VAR_5, VAR_6);
 }
}
