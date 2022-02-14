
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char key; int nbits; int nbytes; int framelen; int SyncInit; int dbit; int skbres; int maxsize; int * encodebuf; scalar_t__ b; scalar_t__ introducer; int OfflineFrame; int OnlineFrame; scalar_t__ decodelen; } ;
typedef TYPE_1__ isdn_v110_stream ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int,int ) ;
 TYPE_1__* FUNC_2 (int,int ) ;

__attribute__((used)) static isdn_v110_stream *
FUNC_3(unsigned char VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;
 isdn_v110_stream *VAR_11;

 if ((VAR_11 = FUNC_2(sizeof(isdn_v110_stream), VAR_0)) == ((void*)0))
  return ((void*)0);
 VAR_11->key = VAR_7;
 VAR_11->nbits = 0;
 for (VAR_10 = 0; VAR_7 & (1 << VAR_10); VAR_10++)
  VAR_11->nbits++;

 VAR_11->nbytes = 8 / VAR_11->nbits;
 VAR_11->decodelen = 0;

 switch (VAR_7) {
  case 128:
   VAR_11->OnlineFrame = VAR_5;
   VAR_11->OfflineFrame = VAR_2;
   break;
  case 129:
   VAR_11->OnlineFrame = VAR_4;
   VAR_11->OfflineFrame = VAR_1;
   break;
  default:
   VAR_11->OnlineFrame = VAR_6;
   VAR_11->OfflineFrame = VAR_3;
   break;
 }
 VAR_11->framelen = VAR_11->nbytes * 10;
 VAR_11->SyncInit = 5;
 VAR_11->introducer = 0;
 VAR_11->dbit = 1;
 VAR_11->b = 0;
 VAR_11->skbres = VAR_8;
 VAR_11->maxsize = VAR_9 - VAR_8;
 if ((VAR_11->encodebuf = FUNC_1(VAR_9, VAR_0)) == ((void*)0)) {
  FUNC_0(VAR_11);
  return ((void*)0);
 }
 return VAR_11;
}
