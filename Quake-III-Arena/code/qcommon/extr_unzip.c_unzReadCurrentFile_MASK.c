
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ compressed_size; } ;
struct TYPE_6__ {TYPE_1__ cur_file_info; TYPE_3__* pfile_in_zip_read; } ;
typedef TYPE_2__ unz_s ;
typedef int * unzFile ;
typedef scalar_t__ uLong ;
typedef scalar_t__ uInt ;
struct TYPE_8__ {scalar_t__ avail_out; scalar_t__ avail_in; scalar_t__ total_out; int * next_out; int * next_in; } ;
struct TYPE_7__ {unsigned int rest_read_uncompressed; scalar_t__ rest_read_compressed; scalar_t__ pos_in_zipfile; scalar_t__ byte_before_the_zipfile; scalar_t__ compression_method; TYPE_4__ stream; int * read_buffer; int file; } ;
typedef TYPE_3__ file_in_zip_read_info_s ;
typedef int Byte ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,scalar_t__,int,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (TYPE_4__*,int) ;

extern int FUNC_3 (unzFile VAR_10, void *VAR_11, unsigned VAR_12)
{
 int VAR_13=VAR_5;
 uInt VAR_14 = 0;
 unz_s* VAR_15;
 file_in_zip_read_info_s* VAR_16;
 if (VAR_10==((void*)0))
  return VAR_6;
 VAR_15=(unz_s*)VAR_10;
    VAR_16=VAR_15->pfile_in_zip_read;

 if (VAR_16==((void*)0))
  return VAR_6;


 if (VAR_16->read_buffer == ((void*)0))
  return VAR_2;
 if (VAR_12==0)
  return 0;

 VAR_16->stream.next_out = (Byte*)VAR_11;

 VAR_16->stream.avail_out = (uInt)VAR_12;

 if (VAR_12>VAR_16->rest_read_uncompressed)
  VAR_16->stream.avail_out =
    (uInt)VAR_16->rest_read_uncompressed;

 while (VAR_16->stream.avail_out>0)
 {
  if ((VAR_16->stream.avail_in==0) &&
            (VAR_16->rest_read_compressed>0))
  {
   uInt VAR_17 = VAR_1;
   if (VAR_16->rest_read_compressed<VAR_17)
    VAR_17 = (uInt)VAR_16->rest_read_compressed;
   if (VAR_17 == 0)
    return VAR_3;
   if (VAR_15->cur_file_info.compressed_size == VAR_16->rest_read_compressed)
    if (FUNC_1(VAR_16->file,
        VAR_16->pos_in_zipfile +
        VAR_16->byte_before_the_zipfile,VAR_0)!=0)
     return VAR_4;
   if (FUNC_0(VAR_16->read_buffer,VAR_17,1,
                         VAR_16->file)!=1)
    return VAR_4;
   VAR_16->pos_in_zipfile += VAR_17;

   VAR_16->rest_read_compressed-=VAR_17;

   VAR_16->stream.next_in =
                (Byte*)VAR_16->read_buffer;
   VAR_16->stream.avail_in = (uInt)VAR_17;
  }

  if (VAR_16->compression_method==0)
  {
   uInt VAR_18,VAR_19 ;
   if (VAR_16->stream.avail_out <
                            VAR_16->stream.avail_in)
    VAR_18 = VAR_16->stream.avail_out ;
   else
    VAR_18 = VAR_16->stream.avail_in ;

   for (VAR_19=0;VAR_19<VAR_18;VAR_19++)
    *(VAR_16->stream.next_out+VAR_19) =
                        *(VAR_16->stream.next_in+VAR_19);




   VAR_16->rest_read_uncompressed-=VAR_18;
   VAR_16->stream.avail_in -= VAR_18;
   VAR_16->stream.avail_out -= VAR_18;
   VAR_16->stream.next_out += VAR_18;
   VAR_16->stream.next_in += VAR_18;
            VAR_16->stream.total_out += VAR_18;
   VAR_14 += VAR_18;
  }
  else
  {
   uLong VAR_20,VAR_21;
   const Byte *VAR_22;
   uLong VAR_23;
   int VAR_24=VAR_9;

   VAR_20 = VAR_16->stream.total_out;
   VAR_22 = VAR_16->stream.next_out;







   VAR_13=FUNC_2(&VAR_16->stream,VAR_24);

   VAR_21 = VAR_16->stream.total_out;
   VAR_23 = VAR_21-VAR_20;





   VAR_16->rest_read_uncompressed -=
                VAR_23;

   VAR_14 += (uInt)(VAR_21 - VAR_20);

   if (VAR_13==VAR_8)
    return (VAR_14==0) ? VAR_3 : VAR_14;
   if (VAR_13!=VAR_7)
    break;
  }
 }

 if (VAR_13==VAR_7)
  return VAR_14;
 return VAR_13;
}
