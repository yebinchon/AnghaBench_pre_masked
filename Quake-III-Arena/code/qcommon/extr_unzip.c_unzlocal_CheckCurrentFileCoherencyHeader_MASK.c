
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int offset_curfile; } ;
struct TYPE_5__ {int compression_method; int crc; int compressed_size; int uncompressed_size; int size_filename; } ;
struct TYPE_7__ {int byte_before_the_zipfile; TYPE_2__ cur_file_info_internal; int file; TYPE_1__ cur_file_info; } ;
typedef TYPE_3__ unz_s ;
typedef int uLong ;
typedef scalar_t__ uInt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static int FUNC_3 (unz_s* VAR_6, uInt* VAR_7,
             uLong *VAR_8,
             uInt *VAR_9)
{
 uLong VAR_10,VAR_11,VAR_12;
 uLong VAR_13;
 uLong VAR_14;
 int VAR_15=VAR_4;

 *VAR_7 = 0;
 *VAR_8 = 0;
 *VAR_9 = 0;

 if (FUNC_0(VAR_6->file,VAR_6->cur_file_info_internal.offset_curfile +
        VAR_6->byte_before_the_zipfile,VAR_0)!=0)
  return VAR_3;


 if (VAR_15==VAR_4) {
  if (FUNC_1(VAR_6->file,&VAR_10) != VAR_4)
   VAR_15=VAR_3;
  else if (VAR_10!=0x04034b50)
   VAR_15=VAR_2;
 }
 if (FUNC_2(VAR_6->file,&VAR_11) != VAR_4)
  VAR_15=VAR_3;




 if (FUNC_2(VAR_6->file,&VAR_12) != VAR_4)
  VAR_15=VAR_3;

 if (FUNC_2(VAR_6->file,&VAR_11) != VAR_4)
  VAR_15=VAR_3;
 else if ((VAR_15==VAR_4) && (VAR_11!=VAR_6->cur_file_info.compression_method))
  VAR_15=VAR_2;

    if ((VAR_15==VAR_4) && (VAR_6->cur_file_info.compression_method!=0) &&
                         (VAR_6->cur_file_info.compression_method!=VAR_5))
        VAR_15=VAR_2;

 if (FUNC_1(VAR_6->file,&VAR_11) != VAR_4)
  VAR_15=VAR_3;

 if (FUNC_1(VAR_6->file,&VAR_11) != VAR_4)
  VAR_15=VAR_3;
 else if ((VAR_15==VAR_4) && (VAR_11!=VAR_6->cur_file_info.crc) &&
                        ((VAR_12 & 8)==0))
  VAR_15=VAR_2;

 if (FUNC_1(VAR_6->file,&VAR_11) != VAR_4)
  VAR_15=VAR_3;
 else if ((VAR_15==VAR_4) && (VAR_11!=VAR_6->cur_file_info.compressed_size) &&
         ((VAR_12 & 8)==0))
  VAR_15=VAR_2;

 if (FUNC_1(VAR_6->file,&VAR_11) != VAR_4)
  VAR_15=VAR_3;
 else if ((VAR_15==VAR_4) && (VAR_11!=VAR_6->cur_file_info.uncompressed_size) &&
         ((VAR_12 & 8)==0))
  VAR_15=VAR_2;


 if (FUNC_2(VAR_6->file,&VAR_13) != VAR_4)
  VAR_15=VAR_3;
 else if ((VAR_15==VAR_4) && (VAR_13!=VAR_6->cur_file_info.size_filename))
  VAR_15=VAR_2;

 *VAR_7 += (uInt)VAR_13;

 if (FUNC_2(VAR_6->file,&VAR_14) != VAR_4)
  VAR_15=VAR_3;
 *VAR_8= VAR_6->cur_file_info_internal.offset_curfile +
         VAR_1 + VAR_13;
 *VAR_9 = (uInt)VAR_14;

 *VAR_7 += (uInt)VAR_14;

 return VAR_15;
}
