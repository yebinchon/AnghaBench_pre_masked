
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* szClassName; int Flags; int szRegSubkey; int * hRegKey; scalar_t__ lpCompatDrvList; scalar_t__ lpSelectedDriver; int atDriverPath; } ;
typedef scalar_t__ RETERR ;
typedef TYPE_1__* LPDEVICE_INFO ;
typedef int HKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int *,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__**,int *,int ,int *,int *,char const*,int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (char const*) ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,char*,int ,int ,unsigned char*,scalar_t__) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,char const*) ;
 scalar_t__ FUNC_12 (char const*) ;

RETERR FUNC_13(const char* VAR_11,
      const char* VAR_12,
      const char* VAR_13,
      const char* VAR_14)
{
 char *VAR_15 = "NetTrans";
 char *VAR_16 = "Net";
 char *VAR_17 = "NetClient";
 char *VAR_18 = "NetService";
 char *VAR_19 = "";
 char *VAR_20 = "Net.inf";
 char *VAR_21 = "Nettrans.inf";
 char *VAR_22 = "Netcli.inf";
 char *VAR_23 = "Netservr.inf";
 char *VAR_24 = "Ndi";
 char *VAR_25 = "Bindings";
 char *VAR_26 = "DeviceID";
 char *VAR_27 = "DriverDesc";
 char *VAR_28 = VAR_9;
 char *VAR_29 = "Enum\\Network\\";
 char *VAR_30 = "Enum\\Filter\\";
 char *VAR_31 = "\\Temp";
 char *VAR_32 = "VSERVER";
 LPDEVICE_INFO VAR_33 = ((void*)0);
 RETERR VAR_34 = VAR_8;

 VAR_34 = FUNC_3( &VAR_33, ((void*)0), 0, ((void*)0), ((void*)0), VAR_11, ((void*)0) );

 if (VAR_34 == VAR_8)
 {
  HKEY VAR_35;

  VAR_33->hRegKey = VAR_7;
  FUNC_11( VAR_33->szRegSubkey, VAR_29 );
  FUNC_10( VAR_33->szRegSubkey, VAR_33->szClassName );
  FUNC_10( VAR_33->szRegSubkey, VAR_31 );

  VAR_34 = FUNC_2( VAR_33, &VAR_35, ((void*)0), ((void*)0), VAR_1 );

  if (VAR_34 == VAR_8)
  {
   if (FUNC_9(VAR_35,
                         VAR_28,
                         0,
                         VAR_10,
                         (unsigned char *) VAR_12,
                         FUNC_12( VAR_12 ) + 1 ) == VAR_6 )
   {
            if ( VAR_13 )
            {
               if ( (VAR_33->atDriverPath = FUNC_7( VAR_13 )) )
                  VAR_33->Flags |= VAR_2;
    }

    VAR_34 = FUNC_0( VAR_33 );

    FUNC_8( VAR_35 );

    FUNC_4( VAR_33, VAR_1 );
    VAR_33->hRegKey = ((void*)0);
    FUNC_11( VAR_33->szRegSubkey, VAR_19 );

    if ( VAR_34 || !VAR_33->lpCompatDrvList )
    {
     VAR_34 = FUNC_6( VAR_33 );
    }
    else
    {
     VAR_33->lpSelectedDriver = VAR_33->lpCompatDrvList;
    }

    if ( VAR_34 == VAR_8 )
    {
     if ( VAR_14 )
     {
      VAR_33->hRegKey = VAR_7;
      FUNC_11( VAR_33->szRegSubkey, VAR_14 );

      FUNC_2( VAR_33, &VAR_35, ((void*)0), ((void*)0), VAR_1 );
     }

     VAR_33->Flags |= VAR_4 | VAR_3 | VAR_5;
               VAR_34 = FUNC_1( VAR_0, VAR_33 );
    }
            else
            {
               FUNC_5( VAR_33 );
            }
   }
   else
   {
    FUNC_4( VAR_33, VAR_1 );
            FUNC_5( VAR_33 );
   }
  }
      else
      {
         FUNC_5( VAR_33 );
      }
 }

 return VAR_34;
}
