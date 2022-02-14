
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_16__ {char* filename; } ;
struct TYPE_21__ {int segmentSize; int segmentNumber; int segmentWrap; char* imv_filename; char* pts_filename; scalar_t__ lasttime; scalar_t__ frame; scalar_t__ starttime; TYPE_2__* encoder_pool; scalar_t__ save_pts; scalar_t__ inlineMotionVectors; TYPE_1__ common_settings; scalar_t__ splitNow; scalar_t__ splitWait; } ;
struct TYPE_20__ {int length; int flags; scalar_t__ pts; scalar_t__ data; } ;
struct TYPE_19__ {scalar_t__ is_enabled; scalar_t__ userdata; } ;
struct TYPE_18__ {int* cb_buff; int cb_len; int cb_wptr; int header_wptr; int* header_bytes; int* iframe_buff; size_t iframe_buff_wpos; int iframe_buff_rpos; int cb_wrap; int abort; TYPE_6__* pstate; int * pts_file_handle; int * file_handle; scalar_t__ flush_buffers; int * imv_file_handle; } ;
struct TYPE_17__ {int queue; } ;
typedef TYPE_3__ PORT_USERDATA ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef TYPE_5__ MMAL_BUFFER_HEADER_T ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (scalar_t__,int,int,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int*,scalar_t__,int) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*,TYPE_5__*) ;
 TYPE_5__* FUNC_10 (int ) ;
 int * FUNC_11 (TYPE_6__*,char*) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,...) ;

__attribute__((used)) static void FUNC_15(MMAL_PORT_T *VAR_7, MMAL_BUFFER_HEADER_T *VAR_8)
{
   MMAL_BUFFER_HEADER_T *VAR_9;
   static int64_t VAR_10 = -1;
   static int64_t VAR_11 = -1;


   if (VAR_10 == -1)
      VAR_10 = FUNC_4()/1000;



   PORT_USERDATA *VAR_12 = (PORT_USERDATA *)VAR_7->userdata;

   if (VAR_12)
   {
      int VAR_13 = VAR_8->length;
      int64_t VAR_14 = FUNC_4()/1000;

      FUNC_13(VAR_12->file_handle);
      if(VAR_12->pstate->inlineMotionVectors) FUNC_13(VAR_12->imv_file_handle);

      if (VAR_12->cb_buff)
      {
         int VAR_15 = VAR_12->cb_len - VAR_12->cb_wptr;
         int VAR_16 = VAR_15 > VAR_8->length ? VAR_8->length : VAR_15;
         int VAR_17 = VAR_8->length - VAR_16;

         if(VAR_8->flags & VAR_2)
         {
            if(VAR_12->header_wptr + VAR_8->length > sizeof(VAR_12->header_bytes))
            {
               FUNC_14("Error in header bytes\n");
            }
            else
            {

               FUNC_6(VAR_8);
               FUNC_5(VAR_12->header_bytes + VAR_12->header_wptr, VAR_8->data, VAR_8->length);
               FUNC_7(VAR_8);
               VAR_12->header_wptr += VAR_8->length;
            }
         }
         else if((VAR_8->flags & VAR_1))
         {

         }
         else
         {
            static int VAR_18 = -1;
            int VAR_19;

            if(VAR_18 == -1)
               VAR_18 = VAR_12->cb_wptr;

            if(VAR_8->flags & VAR_4)
            {
               VAR_12->iframe_buff[VAR_12->iframe_buff_wpos] = VAR_18;
               VAR_12->iframe_buff_wpos = (VAR_12->iframe_buff_wpos + 1) % VAR_0;
            }

            if(VAR_8->flags & VAR_3)
               VAR_18 = -1;


            if((VAR_12->iframe_buff_rpos + 1) % VAR_0 != VAR_12->iframe_buff_wpos)
            {
               while(
                  (
                     VAR_12->cb_wptr <= VAR_12->iframe_buff[VAR_12->iframe_buff_rpos] &&
                     (VAR_12->cb_wptr + VAR_8->length) > VAR_12->iframe_buff[VAR_12->iframe_buff_rpos]
                  ) ||
                  (
                     (VAR_12->cb_wptr > VAR_12->iframe_buff[VAR_12->iframe_buff_rpos]) &&
                     (VAR_12->cb_wptr + VAR_8->length) > (VAR_12->iframe_buff[VAR_12->iframe_buff_rpos] + VAR_12->cb_len)
                  )
               )
                  VAR_12->iframe_buff_rpos = (VAR_12->iframe_buff_rpos + 1) % VAR_0;
            }

            FUNC_6(VAR_8);

            FUNC_5(VAR_12->cb_buff + VAR_12->cb_wptr, VAR_8->data, VAR_16);
            FUNC_5(VAR_12->cb_buff, VAR_8->data + VAR_16, VAR_17);
            FUNC_7(VAR_8);

            if((VAR_12->cb_wptr + VAR_8->length) > VAR_12->cb_len)
               VAR_12->cb_wrap = 1;

            VAR_12->cb_wptr = (VAR_12->cb_wptr + VAR_8->length) % VAR_12->cb_len;

            for(VAR_19 = VAR_12->iframe_buff_rpos; VAR_19 != VAR_12->iframe_buff_wpos; VAR_19 = (VAR_19 + 1) % VAR_0)
            {
               int VAR_20 = VAR_12->iframe_buff[VAR_19];
               if(VAR_12->cb_buff[VAR_20] != 0 || VAR_12->cb_buff[VAR_20+1] != 0 || VAR_12->cb_buff[VAR_20+2] != 0 || VAR_12->cb_buff[VAR_20+3] != 1)
               {
                  FUNC_14("Error in iframe list\n");
               }
            }
         }
      }
      else
      {




         if ((VAR_8->flags & VAR_2) &&
               ((VAR_12->pstate->segmentSize && VAR_14 > VAR_10 + VAR_12->pstate->segmentSize) ||
                (VAR_12->pstate->splitWait && VAR_12->pstate->splitNow)))
         {
            FILE *VAR_21;

            VAR_10 = VAR_14;

            VAR_12->pstate->splitNow = 0;
            VAR_12->pstate->segmentNumber++;


            if (VAR_12->pstate->segmentWrap && VAR_12->pstate->segmentNumber > VAR_12->pstate->segmentWrap)
               VAR_12->pstate->segmentNumber = 1;

            if (VAR_12->pstate->common_settings.filename && VAR_12->pstate->common_settings.filename[0] != '-')
            {
               VAR_21 = FUNC_11(VAR_12->pstate, VAR_12->pstate->common_settings.filename);

               if (VAR_21)
               {
                  FUNC_0(VAR_12->file_handle);
                  VAR_12->file_handle = VAR_21;
               }
            }

            if (VAR_12->pstate->imv_filename && VAR_12->pstate->imv_filename[0] != '-')
            {
               VAR_21 = FUNC_11(VAR_12->pstate, VAR_12->pstate->imv_filename);

               if (VAR_21)
               {
                  FUNC_0(VAR_12->imv_file_handle);
                  VAR_12->imv_file_handle = VAR_21;
               }
            }

            if (VAR_12->pstate->pts_filename && VAR_12->pstate->pts_filename[0] != '-')
            {
               VAR_21 = FUNC_11(VAR_12->pstate, VAR_12->pstate->pts_filename);

               if (VAR_21)
               {
                  FUNC_0(VAR_12->pts_file_handle);
                  VAR_12->pts_file_handle = VAR_21;
               }
            }
         }
         if (VAR_8->length)
         {
            FUNC_6(VAR_8);
            if(VAR_8->flags & VAR_1)
            {
               if(VAR_12->pstate->inlineMotionVectors)
               {
                  VAR_13 = FUNC_3(VAR_8->data, 1, VAR_8->length, VAR_12->imv_file_handle);
                  if(VAR_12->flush_buffers) FUNC_1(VAR_12->imv_file_handle);
               }
               else
               {

                  VAR_13 = VAR_8->length;
               }
            }
            else
            {
               VAR_13 = FUNC_3(VAR_8->data, 1, VAR_8->length, VAR_12->file_handle);
               if(VAR_12->flush_buffers) FUNC_1(VAR_12->file_handle);

               if(VAR_12->pstate->save_pts &&
                     (VAR_8->flags & VAR_3 ||
                      VAR_8->flags == 0 ||
                      VAR_8->flags & VAR_4) &&
                     !(VAR_8->flags & VAR_2))
               {
                  if(VAR_8->pts != VAR_6 && VAR_8->pts != VAR_12->pstate->lasttime)
                  {
                     int64_t VAR_22;
                     if(VAR_12->pstate->frame==0)VAR_12->pstate->starttime=VAR_8->pts;
                     VAR_12->pstate->lasttime=VAR_8->pts;
                     VAR_22 = VAR_8->pts - VAR_12->pstate->starttime;
                     FUNC_2(VAR_12->pts_file_handle,"%lld.%03lld\n", VAR_22/1000, VAR_22%1000);
                     VAR_12->pstate->frame++;
                  }
               }
            }

            FUNC_7(VAR_8);

            if (VAR_13 != VAR_8->length)
            {
               FUNC_14("Failed to write buffer data (%d from %d)- aborting", VAR_13, VAR_8->length);
               VAR_12->abort = 1;
            }
         }
      }


      if (VAR_14/1000 != VAR_11)
      {
         FUNC_12(VAR_12->pstate);
         VAR_11 = VAR_14/1000;
      }
   }
   else
   {
      FUNC_14("Received a encoder buffer callback with no state");
   }


   FUNC_8(VAR_8);


   if (VAR_7->is_enabled)
   {
      MMAL_STATUS_T VAR_23;

      VAR_9 = FUNC_10(VAR_12->pstate->encoder_pool->queue);

      if (VAR_9)
         VAR_23 = FUNC_9(VAR_7, VAR_9);

      if (!VAR_9 || VAR_23 != VAR_5)
         FUNC_14("Unable to return a buffer to the encoder port");
   }
}
