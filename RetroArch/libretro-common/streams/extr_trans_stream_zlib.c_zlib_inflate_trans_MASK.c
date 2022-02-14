
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ avail_in; scalar_t__ avail_out; } ;
typedef TYPE_1__ z_stream ;
typedef scalar_t__ uint32_t ;
struct zlib_trans_stream {int inited; int ex; TYPE_1__ z; } ;
typedef enum trans_stream_error { ____Placeholder_trans_stream_error } trans_stream_error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static bool FUNC_3(
   void *VAR_8, bool VAR_9,
   uint32_t *VAR_10, uint32_t *VAR_11,
   enum trans_stream_error *VAR_12)
{
   int VAR_13;
   bool VAR_14 = 0;
   uint32_t VAR_15 = 0;
   uint32_t VAR_16 = 0;
   struct zlib_trans_stream *VAR_17 = (struct zlib_trans_stream *) VAR_8;
   z_stream *VAR_18 = &VAR_17->z;

   if (!VAR_17->inited)
   {
      FUNC_2(VAR_18, VAR_17->ex);
      VAR_17->inited = 1;
   }

   VAR_15 = VAR_18->avail_in;
   VAR_16 = VAR_18->avail_out;
   VAR_13 = FUNC_0(VAR_18, VAR_9 ? VAR_4 : VAR_5);

   if (VAR_13 == VAR_6)
   {
      if (VAR_12)
         *VAR_12 = VAR_0;
   }
   else if (VAR_13 == VAR_7)
   {
      if (VAR_12)
         *VAR_12 = VAR_2;
   }
   else
   {
      if (VAR_12)
         *VAR_12 = VAR_3;
      return 0;
   }
   VAR_14 = 1;

   if (VAR_18->avail_out == 0)
   {

      if (VAR_18->avail_in != 0)
      {
         VAR_14 = 0;
         if (VAR_12)
            *VAR_12 = VAR_1;
      }
   }

   *VAR_10 = VAR_15 - VAR_18->avail_in;
   *VAR_11 = VAR_16 - VAR_18->avail_out;

   if (VAR_9 && VAR_13 == VAR_7)
   {
      FUNC_1(VAR_18);
      VAR_17->inited = 0;
   }

   return VAR_14;
}
