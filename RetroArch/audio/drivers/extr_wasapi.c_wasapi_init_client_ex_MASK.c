
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WAVEFORMATEXTENSIBLE ;
typedef int WAVEFORMATEX ;
typedef double UINT32 ;
struct TYPE_11__ {scalar_t__ (* Initialize ) (int ,int,double,double,int *,int *) ;TYPE_1__* lpVtbl; } ;
struct TYPE_10__ {scalar_t__ (* Initialize ) (TYPE_2__*,int ,int,double,double,int *,int *) ;} ;
typedef double REFERENCE_TIME ;
typedef int IMMDevice ;
typedef TYPE_2__ IAudioClient ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_2 (char*,char*,unsigned int,unsigned int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,double*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *,double*) ;
 scalar_t__ FUNC_6 (int *,int ,int ,int *,void**) ;
 scalar_t__ FUNC_7 (int ,int,double,double,int *,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,int,double,double,int *,int *) ;
 scalar_t__ FUNC_9 (int ,int,double,double,int *,int *) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ,int,double,double,int *,int *) ;
 scalar_t__ FUNC_11 (int ,int,double,double,int *,int *) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int ,int,double,double,int *,int *) ;
 unsigned int FUNC_13 (int) ;
 int FUNC_14 (int *,int,unsigned int) ;

__attribute__((used)) static IAudioClient *FUNC_15(IMMDevice *VAR_10,
      bool *VAR_11, unsigned *VAR_12, unsigned VAR_13)
{
   WAVEFORMATEXTENSIBLE VAR_14;
   int VAR_15, VAR_16;
   IAudioClient *VAR_17 = ((void*)0);
   bool VAR_18 = *VAR_11;
   unsigned VAR_19 = *VAR_12;
   REFERENCE_TIME VAR_20 = 0;
   REFERENCE_TIME VAR_21 = 0;
   UINT32 VAR_22 = 0;
   HRESULT VAR_23 = FUNC_6(VAR_10,
         VAR_9,
         VAR_8, ((void*)0), (void**)&VAR_17);
   if (FUNC_0(VAR_23))
      return ((void*)0);

   VAR_23 = FUNC_5(VAR_17, ((void*)0), &VAR_20);
   if (FUNC_0(VAR_23))
      goto error;


   VAR_21 = VAR_13 * 10000.0;
   if (VAR_21 < VAR_20)
      VAR_21 = VAR_20;


   for (VAR_15 = 0; VAR_15 < 2; ++VAR_15)
   {
      VAR_19 = *VAR_12;
      if (VAR_15 == 1)
         VAR_18 = !VAR_18;


      for (VAR_16 = 0; VAR_19; ++VAR_16)
      {
         FUNC_2("[WASAPI]: Initializing client (exclusive, %s, %uHz, %ums) ...\n",
               VAR_18 ? "float" : "pcm", VAR_19, VAR_13);

         FUNC_14(&VAR_14, VAR_18, VAR_19);





         VAR_23 = VAR_17->lpVtbl->Initialize(VAR_17, VAR_5,
               VAR_6 | VAR_7,
               VAR_21, VAR_21, (WAVEFORMATEX*)&VAR_14, ((void*)0));

         if (VAR_23 == VAR_1)
         {
            VAR_23 = FUNC_4(VAR_17, &VAR_22);
            if (FUNC_0(VAR_23))
               goto error;

            FUNC_1(VAR_17);
            VAR_23 = FUNC_6(VAR_10,
                  VAR_9,
                  VAR_8, ((void*)0), (void**)&VAR_17);
            if (FUNC_0(VAR_23))
               return ((void*)0);

            VAR_21 = 10000.0 * 1000.0 / VAR_19 * VAR_22 + 0.5;





            VAR_23 = VAR_17->lpVtbl->Initialize(VAR_17, VAR_5,
                  VAR_6 | VAR_7,
                  VAR_21, VAR_21, (WAVEFORMATEX*)&VAR_14, ((void*)0));

         }
         if (VAR_23 == VAR_0)
         {
            FUNC_1(VAR_17);
            VAR_23 = FUNC_6(VAR_10,
                  VAR_9,
                  VAR_8, ((void*)0), (void**)&VAR_17);
            if (FUNC_0(VAR_23))
               return ((void*)0);






            VAR_23 = VAR_17->lpVtbl->Initialize(VAR_17, VAR_5,
                  VAR_6 | VAR_7,
                  VAR_21, VAR_21, (WAVEFORMATEX*)&VAR_14, ((void*)0));

         }
         if (VAR_23 != VAR_4)
         {
            if (VAR_23 == VAR_2)
               goto error;

            if (VAR_23 == VAR_3)
               goto error;

            VAR_15 = 2;
            break;
         }

         FUNC_3("[WASAPI]: Unsupported format.\n");
         VAR_19 = FUNC_13(VAR_16);
         if (VAR_19 == *VAR_12)
            VAR_19 = FUNC_13(++VAR_16);
      }
   }

   if (FUNC_0(VAR_23))
      goto error;

   *VAR_11 = VAR_18;
   *VAR_12 = VAR_19;

   return VAR_17;

error:
   FUNC_1(VAR_17);

   return ((void*)0);
}
