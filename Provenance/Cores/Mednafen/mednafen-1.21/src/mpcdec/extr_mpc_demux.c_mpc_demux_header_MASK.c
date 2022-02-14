
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ mpc_uint64_t ;
typedef int mpc_uint32_t ;
typedef scalar_t__ mpc_status ;
struct TYPE_23__ {int pns; char* profile_name; scalar_t__ header_position; char stream_version; int total_file_length; int tag_offset; } ;
struct TYPE_24__ {int buff; } ;
struct TYPE_20__ {TYPE_4__ si; TYPE_5__ bits_reader; TYPE_3__* r; } ;
typedef TYPE_1__ mpc_demux ;
struct TYPE_21__ {char* key; scalar_t__ size; } ;
typedef TYPE_2__ mpc_block ;
struct TYPE_22__ {int (* get_size ) (TYPE_3__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (TYPE_5__*,TYPE_2__*) ;
 char FUNC_3 (TYPE_5__*,int) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_10 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_11 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_12 (TYPE_4__*,TYPE_5__*,int) ;
 int FUNC_13 (TYPE_3__*) ;

__attribute__((used)) static mpc_status FUNC_14(mpc_demux * VAR_4)
{
 char VAR_5[4];

 VAR_4->si.pns = 0xFF;
 VAR_4->si.profile_name = "n.a.";


 VAR_4->si.header_position = FUNC_8(VAR_4);
 if(VAR_4->si.header_position < 0)
  return VAR_2;

 VAR_4->si.tag_offset = VAR_4->si.total_file_length = VAR_4->r->get_size(VAR_4->r);

 FUNC_7(VAR_4, 4, 0);
 VAR_5[0] = FUNC_3(&VAR_4->bits_reader, 8);
 VAR_5[1] = FUNC_3(&VAR_4->bits_reader, 8);
 VAR_5[2] = FUNC_3(&VAR_4->bits_reader, 8);
 VAR_5[3] = FUNC_3(&VAR_4->bits_reader, 8);

 if (FUNC_1(VAR_5, "MP+", 3) == 0) {
  VAR_4->si.stream_version = VAR_5[3] & 15;
  VAR_4->si.pns = VAR_5[3] >> 4;
  if (VAR_4->si.stream_version != 7)
   return VAR_2;
  if (FUNC_7(VAR_4, 6 * 4, VAR_1) < 6 * 4)
   return VAR_2;
  FUNC_0( FUNC_11(&VAR_4->si, &VAR_4->bits_reader) );
 } else if (FUNC_1(VAR_5, "MPCK", 4) == 0) {
  mpc_block VAR_6;
  int VAR_7;
  FUNC_7(VAR_4, 11, 0);
  VAR_7 = FUNC_2(&VAR_4->bits_reader, &VAR_6);
  while( FUNC_1(VAR_6.key, "AP", 2) != 0 ){
   if (FUNC_4(VAR_6.key) != VAR_3)
    return VAR_2;
   if (VAR_6.size > (mpc_uint64_t) VAR_0 - 11)
    return VAR_2;

   if (FUNC_7(VAR_4, 11 + (mpc_uint32_t) VAR_6.size, 0) <= VAR_6.size)
    return VAR_2;

   if (FUNC_1(VAR_6.key, "SH", 2) == 0) {
    FUNC_0( FUNC_12(&VAR_4->si, &VAR_4->bits_reader, (mpc_uint32_t) VAR_6.size) );
   } else if (FUNC_1(VAR_6.key, "RG", 2) == 0) {
    FUNC_10(&VAR_4->si, &VAR_4->bits_reader);
   } else if (FUNC_1(VAR_6.key, "EI", 2) == 0) {
    FUNC_9(&VAR_4->si, &VAR_4->bits_reader);
   } else if (FUNC_1(VAR_6.key, "SO", 2) == 0) {
    FUNC_0( FUNC_5(VAR_4, VAR_7, (mpc_uint32_t) VAR_6.size) );
   } else if (FUNC_1(VAR_6.key, "ST", 2) == 0) {
    FUNC_0( FUNC_6(VAR_4) );
   }
   VAR_4->bits_reader.buff += VAR_6.size;
   VAR_7 = FUNC_2(&VAR_4->bits_reader, &VAR_6);
  }
  VAR_4->bits_reader.buff -= VAR_7;
  if (VAR_4->si.stream_version == 0)
   return VAR_2;
 } else {
  return VAR_2;
 }

 return VAR_3;
}
