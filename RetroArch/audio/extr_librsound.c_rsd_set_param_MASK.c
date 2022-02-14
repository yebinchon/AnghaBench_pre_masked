
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int rate; int channels; int buffer_size; int max_latency; int samplesize; char* identity; scalar_t__ format; int * port; int * host; } ;
typedef TYPE_1__ rsound_t ;
typedef enum rsd_settings { ____Placeholder_rsd_settings } rsd_settings ;
 scalar_t__ VAR_0 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (char*,void*,int) ;

int FUNC_5(rsound_t *VAR_1, enum rsd_settings VAR_2, void* VAR_3)
{
 FUNC_1(VAR_1 != ((void*)0));
 FUNC_1(VAR_3 != ((void*)0));
 int VAR_4 = 0;

 switch(VAR_2)
 {
  case 128:
   if ( *(int*)VAR_3 > 0 )
   {
    VAR_1->rate = *((int*)VAR_3);
    break;
   }
   else
    VAR_4 = -1;
   break;
  case 134:
   if ( *(int*)VAR_3 > 0 )
   {
    VAR_1->channels = *((int*)VAR_3);
    break;
   }
   else
    VAR_4 = -1;
   break;
  case 132:
   if ( VAR_1->host != ((void*)0) )
    FUNC_0(VAR_1->host);
   VAR_1->host = FUNC_3((char*)VAR_3);
   break;
  case 129:
   if ( VAR_1->port != ((void*)0) )
    FUNC_0(VAR_1->port);
   VAR_1->port = FUNC_3((char*)VAR_3);
   break;
  case 135:
   if ( *(int*)VAR_3 > 0 )
   {
    VAR_1->buffer_size = *((int*)VAR_3);
    break;
   }
   else
    VAR_4 = -1;
   break;
  case 130:
   VAR_1->max_latency = *((int*)VAR_3);
   break;


  case 133:
   VAR_1->format = (uint16_t)(*((int*)VAR_3));
   VAR_1->samplesize = FUNC_2(VAR_1->format);

   if ( VAR_1->samplesize == -1 )
   {
    VAR_1->format = VAR_0;
    VAR_1->samplesize = FUNC_2(VAR_0);
    *((int*)VAR_3) = (int)VAR_0;
   }
   break;

  case 131:
   FUNC_4(VAR_1->identity, VAR_3, sizeof(VAR_1->identity));
   VAR_1->identity[sizeof(VAR_1->identity)-1] = '\0';
   break;

  default:
   VAR_4 = -1;
 }

 return VAR_4;
}
