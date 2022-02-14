
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int features; int channels; int * statcallb; int * rcvcallb_skb; int * readstat; int * writecmd; int writebuf_skb; int command; int hl_hdrlen; int maxbufsize; int owner; int id; } ;
struct cardstate {int minor_index; int myid; int channels; TYPE_1__ iif; } ;
typedef TYPE_1__ isdn_if ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int,char*,char const*,int) ;
 int VAR_10 ;

int FUNC_4(struct cardstate *VAR_11, const char *VAR_12)
{
 isdn_if *VAR_13 = &VAR_11->iif;

 FUNC_0(VAR_0, "Register driver capabilities to LL");

 if (FUNC_3(VAR_13->id, sizeof VAR_13->id, "%s_%u", VAR_12, VAR_11->minor_index)
     >= sizeof VAR_13->id) {
  FUNC_1("ID too long: %s\n", VAR_12);
  return 0;
 }

 VAR_13->owner = VAR_8;
 VAR_13->channels = VAR_11->channels;
 VAR_13->maxbufsize = VAR_7;
 VAR_13->features = VAR_3 |
  VAR_2 |



  VAR_5 |
  VAR_6;
 VAR_13->hl_hdrlen = VAR_1;
 VAR_13->command = VAR_9;
 VAR_13->writebuf_skb = VAR_10;
 VAR_13->writecmd = ((void*)0);
 VAR_13->readstat = ((void*)0);
 VAR_13->rcvcallb_skb = ((void*)0);
 VAR_13->statcallb = ((void*)0);

 if (!FUNC_2(VAR_13)) {
  FUNC_1("register_isdn failed\n");
  return 0;
 }

 VAR_11->myid = VAR_13->channels;
 return 1;
}
