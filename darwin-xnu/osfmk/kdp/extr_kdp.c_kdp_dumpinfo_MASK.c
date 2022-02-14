
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int is_reply; int len; } ;
struct TYPE_11__ {TYPE_1__ hdr; } ;
struct TYPE_10__ {int type; int port; int routerip; int destip; int name; } ;
struct TYPE_9__ {TYPE_4__ dumpinfo_reply; TYPE_3__ dumpinfo_req; } ;
typedef TYPE_2__ kdp_pkt_t ;
typedef TYPE_3__ kdp_dumpinfo_req_t ;
typedef TYPE_4__ kdp_dumpinfo_reply_t ;
typedef int boolean_t ;
struct TYPE_12__ {unsigned short reply_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 TYPE_7__ VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int,int ,int ,int ,int ) ;

__attribute__((used)) static boolean_t
FUNC_3(
 kdp_pkt_t *VAR_5,
 int *VAR_6,
 unsigned short *VAR_7
        )
{
 kdp_dumpinfo_req_t *VAR_8 = &VAR_5->dumpinfo_req;
 kdp_dumpinfo_reply_t *VAR_9 = &VAR_5->dumpinfo_reply;
 size_t VAR_10 = *VAR_6;

 if (VAR_10 < sizeof (*VAR_8))
  return (VAR_0);

 FUNC_0(("kdp_dumpinfo file=%s destip=%s routerip=%s\n", VAR_8->name, VAR_8->destip, VAR_8->routerip));
 VAR_9->hdr.is_reply = 1;
 VAR_9->hdr.len = sizeof (*VAR_9);

        if ((VAR_8->type & VAR_2) != VAR_1) {
            FUNC_2(VAR_8->type, VAR_8->name, VAR_8->destip, VAR_8->routerip,
                                VAR_8->port);
        }


        FUNC_1(VAR_9);

 *VAR_7 = VAR_4.reply_port;
 *VAR_6 = VAR_9->hdr.len;

 return (VAR_3);
}
