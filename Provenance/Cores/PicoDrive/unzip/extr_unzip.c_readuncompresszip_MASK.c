
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct zipent {int compression_method; scalar_t__ compressed_size; scalar_t__ uncompressed_size; int version_needed_to_extract; int os_needed_to_extract; scalar_t__ disk_number_start; } ;
struct TYPE_5__ {scalar_t__ number_of_this_disk; int zip; int fp; } ;
typedef TYPE_1__ ZIP ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,unsigned char*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,struct zipent*,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,struct zipent*) ;

int FUNC_4(ZIP* VAR_2, struct zipent* VAR_3, char* VAR_4) {
 if (VAR_3->compression_method == 0x0000) {



  if (VAR_3->compressed_size != VAR_3->uncompressed_size) {
   FUNC_0("Wrong uncompressed size in store compression", VAR_0,VAR_2->zip);
   return -3;
  }

  return FUNC_2(VAR_2,VAR_3,VAR_4);
 } else if (VAR_3->compression_method == 0x0008) {

  if (VAR_3->version_needed_to_extract > 0x14) {
   FUNC_0("Version too new", VAR_1,VAR_2->zip);
   return -2;
  }

  if (VAR_3->os_needed_to_extract != 0x00) {
   FUNC_0("OS not supported", VAR_1,VAR_2->zip);
   return -2;
  }

  if (VAR_3->disk_number_start != VAR_2->number_of_this_disk) {
   FUNC_0("Cannot span disks", VAR_1,VAR_2->zip);
   return -2;
  }


  if (FUNC_3(VAR_2,VAR_3)!=0) {
   return -1;
  }


  if (FUNC_1( VAR_2->fp, VAR_3->compressed_size, (unsigned char*)VAR_4, VAR_3->uncompressed_size))
  {
   FUNC_0("Inflating compressed data", VAR_0, VAR_2->zip);
   return -3;
  }

  return 0;
 } else {
  FUNC_0("Compression method unsupported", VAR_1, VAR_2->zip);
  return -2;
 }
}
