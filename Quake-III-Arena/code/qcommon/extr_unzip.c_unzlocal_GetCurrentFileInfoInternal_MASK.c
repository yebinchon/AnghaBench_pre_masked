
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {long pos_in_central_dir; long byte_before_the_zipfile; int file; } ;
typedef TYPE_1__ unz_s ;
struct TYPE_7__ {int offset_curfile; } ;
typedef TYPE_2__ unz_file_info_internal ;
struct TYPE_8__ {int version; int version_needed; int flag; int compression_method; int dosDate; int crc; int compressed_size; int uncompressed_size; int size_filename; int size_file_extra; int size_file_comment; int disk_num_start; int internal_fa; int external_fa; int tmu_date; } ;
typedef TYPE_3__ unz_file_info ;
typedef int * unzFile ;
typedef int uLong ;
typedef int uInt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int,int ) ;
 scalar_t__ FUNC_1 (int ,long,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int*) ;

__attribute__((used)) static int FUNC_5 (unzFile VAR_6,
                                                  unz_file_info *VAR_7,
                                                  unz_file_info_internal
                                                  *VAR_8,
                                                  char *VAR_9,
              uLong VAR_10,
                                                  void *VAR_11,
              uLong VAR_12,
                                                  char *VAR_13,
              uLong VAR_14)
{
 unz_s* VAR_15;
 unz_file_info VAR_16;
 unz_file_info_internal VAR_17;
 int VAR_18=VAR_4;
 uLong VAR_19;
 long VAR_20=0;

 if (VAR_6==((void*)0))
  return VAR_5;
 VAR_15=(unz_s*)VAR_6;
 if (FUNC_1(VAR_15->file,VAR_15->pos_in_central_dir+VAR_15->byte_before_the_zipfile,VAR_1)!=0)
  VAR_18=VAR_3;



 if (VAR_18==VAR_4) {
  if (FUNC_3(VAR_15->file,&VAR_19) != VAR_4)
   VAR_18=VAR_3;
  else if (VAR_19!=0x02014b50)
   VAR_18=VAR_2;
 }
 if (FUNC_4(VAR_15->file,&VAR_16.version) != VAR_4)
  VAR_18=VAR_3;

 if (FUNC_4(VAR_15->file,&VAR_16.version_needed) != VAR_4)
  VAR_18=VAR_3;

 if (FUNC_4(VAR_15->file,&VAR_16.flag) != VAR_4)
  VAR_18=VAR_3;

 if (FUNC_4(VAR_15->file,&VAR_16.compression_method) != VAR_4)
  VAR_18=VAR_3;

 if (FUNC_3(VAR_15->file,&VAR_16.dosDate) != VAR_4)
  VAR_18=VAR_3;

    FUNC_2(VAR_16.dosDate,&VAR_16.tmu_date);

 if (FUNC_3(VAR_15->file,&VAR_16.crc) != VAR_4)
  VAR_18=VAR_3;

 if (FUNC_3(VAR_15->file,&VAR_16.compressed_size) != VAR_4)
  VAR_18=VAR_3;

 if (FUNC_3(VAR_15->file,&VAR_16.uncompressed_size) != VAR_4)
  VAR_18=VAR_3;

 if (FUNC_4(VAR_15->file,&VAR_16.size_filename) != VAR_4)
  VAR_18=VAR_3;

 if (FUNC_4(VAR_15->file,&VAR_16.size_file_extra) != VAR_4)
  VAR_18=VAR_3;

 if (FUNC_4(VAR_15->file,&VAR_16.size_file_comment) != VAR_4)
  VAR_18=VAR_3;

 if (FUNC_4(VAR_15->file,&VAR_16.disk_num_start) != VAR_4)
  VAR_18=VAR_3;

 if (FUNC_4(VAR_15->file,&VAR_16.internal_fa) != VAR_4)
  VAR_18=VAR_3;

 if (FUNC_3(VAR_15->file,&VAR_16.external_fa) != VAR_4)
  VAR_18=VAR_3;

 if (FUNC_3(VAR_15->file,&VAR_17.offset_curfile) != VAR_4)
  VAR_18=VAR_3;

 VAR_20+=VAR_16.size_filename;
 if ((VAR_18==VAR_4) && (VAR_9!=((void*)0)))
 {
  uLong VAR_21 ;
  if (VAR_16.size_filename<VAR_10)
  {
   *(VAR_9+VAR_16.size_filename)='\0';
   VAR_21 = VAR_16.size_filename;
  }
  else
   VAR_21 = VAR_10;

  if ((VAR_16.size_filename>0) && (VAR_10>0))
   if (FUNC_0(VAR_9,(uInt)VAR_21,1,VAR_15->file)!=1)
    VAR_18=VAR_3;
  VAR_20 -= VAR_21;
 }


 if ((VAR_18==VAR_4) && (VAR_11!=((void*)0)))
 {
  uLong VAR_22 ;
  if (VAR_16.size_file_extra<VAR_12)
   VAR_22 = VAR_16.size_file_extra;
  else
   VAR_22 = VAR_12;

  if (VAR_20!=0) {
   if (FUNC_1(VAR_15->file,VAR_20,VAR_0)==0)
    VAR_20=0;
   else
    VAR_18=VAR_3;
  }
  if ((VAR_16.size_file_extra>0) && (VAR_12>0)) {
   if (FUNC_0(VAR_11,(uInt)VAR_22,1,VAR_15->file)!=1)
    VAR_18=VAR_3;
  }
  VAR_20 += VAR_16.size_file_extra - VAR_22;
 }
 else
  VAR_20+=VAR_16.size_file_extra;


 if ((VAR_18==VAR_4) && (VAR_13!=((void*)0)))
 {
  uLong VAR_23 ;
  if (VAR_16.size_file_comment<VAR_14)
  {
   *(VAR_13+VAR_16.size_file_comment)='\0';
   VAR_23 = VAR_16.size_file_comment;
  }
  else
   VAR_23 = VAR_14;

  if (VAR_20!=0) {
   if (FUNC_1(VAR_15->file,VAR_20,VAR_0)==0)
    VAR_20=0;
   else
    VAR_18=VAR_3;
  }
  if ((VAR_16.size_file_comment>0) && (VAR_14>0)) {
   if (FUNC_0(VAR_13,(uInt)VAR_23,1,VAR_15->file)!=1)
    VAR_18=VAR_3;
  }
  VAR_20+=VAR_16.size_file_comment - VAR_23;
 }
 else
  VAR_20+=VAR_16.size_file_comment;

 if ((VAR_18==VAR_4) && (VAR_7!=((void*)0)))
  *VAR_7=VAR_16;

 if ((VAR_18==VAR_4) && (VAR_8!=((void*)0)))
  *VAR_8=VAR_17;

 return VAR_18;
}
