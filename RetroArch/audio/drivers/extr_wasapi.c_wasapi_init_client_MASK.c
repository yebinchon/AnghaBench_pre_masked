
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double UINT32 ;
typedef unsigned int REFERENCE_TIME ;
typedef int IMMDevice ;
typedef int IAudioClient ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,double*) ;
 int FUNC_4 (int *,unsigned int*,unsigned int*) ;
 int FUNC_5 (int *,unsigned int*) ;
 int * FUNC_6 (int *,int*,unsigned int*,unsigned int) ;
 int * FUNC_7 (int *,int*,unsigned int*,unsigned int) ;

__attribute__((used)) static IAudioClient *FUNC_8(IMMDevice *VAR_0, bool *VAR_1,
      bool *VAR_2, unsigned *VAR_3, unsigned VAR_4)
{
   HRESULT VAR_5;
   IAudioClient *VAR_6;
   double VAR_7;
   REFERENCE_TIME VAR_8 = 0;
   REFERENCE_TIME VAR_9 = 0;
   UINT32 VAR_10 = 0;

   if (*VAR_1)
   {
      VAR_6 = FUNC_6(VAR_0, VAR_2, VAR_3, VAR_4);
      if (!VAR_6)
      {
         VAR_6 = FUNC_7(VAR_0, VAR_2, VAR_3, VAR_4);
         if (VAR_6)
            *VAR_1 = 0;
      }
   }
   else
   {
      VAR_6 = FUNC_7(VAR_0, VAR_2, VAR_3, VAR_4);
      if (!VAR_6)
      {
         VAR_6 = FUNC_6(VAR_0, VAR_2, VAR_3, VAR_4);
         if (VAR_6)
            *VAR_1 = 1;
      }
   }

   if (!VAR_6)
      return ((void*)0);



   if (*VAR_1)
      VAR_5 = FUNC_4(VAR_6, ((void*)0), &VAR_8);
   else
      VAR_5 = FUNC_4(VAR_6, &VAR_8, ((void*)0));

   if (FUNC_0(VAR_5))
   {
      FUNC_2("[WASAPI]: IAudioClient::GetDevicePeriod failed with error 0x%.8X.\n", VAR_5);
   }

   if (!*VAR_1)
   {
      VAR_5 = FUNC_5(VAR_6, &VAR_9);
      if (FUNC_0(VAR_5))
      {
         FUNC_2("[WASAPI]: IAudioClient::GetStreamLatency failed with error 0x%.8X.\n", VAR_5);
      }
   }

   VAR_5 = FUNC_3(VAR_6, &VAR_10);
   if (FUNC_0(VAR_5))
   {
      FUNC_2("[WASAPI]: IAudioClient::GetBufferSize failed with error 0x%.8X.\n", VAR_5);
   }

   if (*VAR_1)
      VAR_7 = (double)VAR_10 * 1000.0 / (*VAR_3);
   else
      VAR_7 = (double)(VAR_9 + VAR_8) / 10000.0;

   FUNC_1("[WASAPI]: Client initialized (%s, %s, %uHz, %.1fms).\n",
         *VAR_1 ? "exclusive" : "shared",
         *VAR_2 ? "float" : "pcm", *VAR_3, VAR_7);

   FUNC_1("[WASAPI]: Client's buffer length is %u frames (%.1fms).\n",
         VAR_10, (double)VAR_10 * 1000.0 / (*VAR_3));

   FUNC_1("[WASAPI]: Device period is %.1fms (%lld frames).\n",
         (double)VAR_8 / 10000.0, VAR_8 * (*VAR_3) / 10000000);

   return VAR_6;
}
