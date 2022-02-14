
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WAVEFORMATEXTENSIBLE ;
typedef int WAVEFORMATEX ;
struct TYPE_8__ {scalar_t__ (* Initialize ) (int ,int,int ,int ,int *,int *) ;TYPE_1__* lpVtbl; } ;
struct TYPE_7__ {scalar_t__ (* Initialize ) (TYPE_2__*,int ,int,int ,int ,int *,int *) ;} ;
typedef int IMMDevice ;
typedef TYPE_2__ IAudioClient ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_2 (char*,char*,unsigned int,unsigned int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int *,void**) ;
 scalar_t__ FUNC_5 (int ,int,int ,int ,int *,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int,int ,int ,int *,int *) ;
 scalar_t__ FUNC_7 (int ,int,int ,int ,int *,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,int,int ,int ,int *,int *) ;
 unsigned int FUNC_9 (int) ;
 int FUNC_10 (int *,int,unsigned int) ;

__attribute__((used)) static IAudioClient *FUNC_11(IMMDevice *VAR_7,
      bool *VAR_8, unsigned *VAR_9, unsigned VAR_10)
{
   WAVEFORMATEXTENSIBLE VAR_11;
   int VAR_12, VAR_13;
   IAudioClient *VAR_14 = ((void*)0);
   bool VAR_15 = *VAR_8;
   unsigned VAR_16 = *VAR_9;
   HRESULT VAR_17 = FUNC_4(VAR_7,
         VAR_6,
         VAR_5, ((void*)0), (void**)&VAR_14);
   if (FUNC_0(VAR_17))
      return ((void*)0);


   for (VAR_12 = 0; VAR_12 < 2; ++VAR_12)
   {
      VAR_16 = *VAR_9;
      if (VAR_12 == 1)
         VAR_15 = !VAR_15;


      for (VAR_13 = 0; VAR_16; ++VAR_13)
      {
         FUNC_2("[WASAPI]: Initializing client (shared, %s, %uHz, %ums) ...\n",
               VAR_15 ? "float" : "pcm", VAR_16, VAR_10);

         FUNC_10(&VAR_11, VAR_15, VAR_16);





         VAR_17 = VAR_14->lpVtbl->Initialize(VAR_14, VAR_2,
               VAR_3 | VAR_4,
               0, 0, (WAVEFORMATEX*)&VAR_11, ((void*)0));


         if (VAR_17 == VAR_0)
         {
            HRESULT VAR_18;
            FUNC_1(VAR_14);
            VAR_18 = FUNC_4(VAR_7,
                  VAR_6,
                  VAR_5, ((void*)0), (void**)&VAR_14);
            if (FUNC_0(VAR_18))
               return ((void*)0);






            VAR_18 = VAR_14->lpVtbl->Initialize(VAR_14, VAR_2,
                  VAR_3 | VAR_4,
                  0, 0, (WAVEFORMATEX*)&VAR_11, ((void*)0));

         }
         if (VAR_17 != VAR_1)
         {
            VAR_12 = 2;
            break;
         }

         FUNC_3("[WASAPI]: Unsupported format.\n");
         VAR_16 = FUNC_9(VAR_13);
         if (VAR_16 == *VAR_9)
            VAR_16 = FUNC_9(++VAR_13);
      }
   }

   if (FUNC_0(VAR_17))
      goto error;

   *VAR_8 = VAR_15;
   *VAR_9 = VAR_16;

   return VAR_14;

error:
   FUNC_1(VAR_14);

   return ((void*)0);
}
