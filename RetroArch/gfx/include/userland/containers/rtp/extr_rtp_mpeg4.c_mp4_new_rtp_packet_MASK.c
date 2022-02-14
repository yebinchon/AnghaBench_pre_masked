
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int payload; scalar_t__ extra; } ;
typedef TYPE_1__ VC_CONTAINER_TRACK_MODULE_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_BITS_T ;
struct TYPE_5__ {int auxiliary_length; scalar_t__ dts_delta_length; scalar_t__ cts_delta_length; scalar_t__ index_length; scalar_t__ size_length; int au_headers; } ;
typedef TYPE_2__ MP4_PAYLOAD_T ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *,int *,int,char*) ;
 int FUNC_3 (int *,int *,int ,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_6(VC_CONTAINER_T *VAR_2,
      VC_CONTAINER_TRACK_MODULE_T *VAR_3)
{
   VC_CONTAINER_BITS_T *VAR_4 = &VAR_3->payload;
   MP4_PAYLOAD_T *VAR_5 = (MP4_PAYLOAD_T *)VAR_3->extra;
   VC_CONTAINER_BITS_T *VAR_6 = &VAR_5->au_headers;


   if (VAR_5->size_length || VAR_5->index_length || VAR_5->cts_delta_length || VAR_5->dts_delta_length)
   {
      uint32_t VAR_7;


      VAR_7 = FUNC_2(VAR_2, VAR_4, 16, "AU headers length");
      VAR_7 = FUNC_4(VAR_7);


      FUNC_1(VAR_2, VAR_6, FUNC_0(VAR_2, VAR_4), VAR_7);
      FUNC_3(VAR_2, &VAR_3->payload, VAR_7, "Move payload past AU headers");
   }


   if (VAR_5->auxiliary_length)
   {
      uint32_t VAR_8;

      VAR_8 = FUNC_2(VAR_2, VAR_4, VAR_5->auxiliary_length, "Auxiliary length");
      VAR_8 = FUNC_4(VAR_8);
      FUNC_3(VAR_2, VAR_4, VAR_8, "Auxiliary data");
   }

   return FUNC_5(VAR_2, VAR_4) ? VAR_1 : VAR_0;
}
