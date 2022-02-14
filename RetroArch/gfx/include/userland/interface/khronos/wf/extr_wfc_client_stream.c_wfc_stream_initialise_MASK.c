
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WFC_STREAM_T ;
typedef scalar_t__ VCOS_STATUS_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ,int,int ,int ,char*) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_7(void)
{
   VCOS_STATUS_T VAR_10;

   FUNC_4(&VAR_7, VAR_4);
   FUNC_3("wfc_client_stream", &VAR_7);

   FUNC_5("%s", VAR_2);

   VAR_10 = FUNC_6(&VAR_9, "WFC stream global lock");
   FUNC_0(VAR_10 == VAR_3);

   VAR_10 = FUNC_1(&VAR_8,
         VAR_5, sizeof(WFC_STREAM_T),
         VAR_0, VAR_1,
         "wfc stream pool");
   FUNC_0(VAR_10 == VAR_3);

   VAR_10 = FUNC_2(&VAR_8,
         VAR_6, VAR_5);
   FUNC_0(VAR_10 == VAR_3);
}
