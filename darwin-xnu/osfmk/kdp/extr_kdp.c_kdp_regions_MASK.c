
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int kdp_regions_req_t ;
struct TYPE_7__ {int is_reply; int len; } ;
struct TYPE_8__ {int nregions; TYPE_1__ hdr; TYPE_3__* regions; } ;
typedef TYPE_2__ kdp_regions_reply_t ;
struct TYPE_9__ {int nbytes; int protection; scalar_t__ address; } ;
typedef TYPE_3__ kdp_region_t ;
struct TYPE_10__ {TYPE_2__ regions_reply; int regions_req; } ;
typedef TYPE_4__ kdp_pkt_t ;
typedef int boolean_t ;
struct TYPE_11__ {unsigned short reply_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_6__ VAR_3 ;

__attribute__((used)) static boolean_t
FUNC_1(
    kdp_pkt_t *VAR_4,
    int *VAR_5,
    unsigned short *VAR_6
)
{
    kdp_regions_req_t *VAR_7 = &VAR_4->regions_req;
    size_t VAR_8 = *VAR_5;
    kdp_regions_reply_t *VAR_9 = &VAR_4->regions_reply;
    kdp_region_t *VAR_10;

    if (VAR_8 < sizeof (*VAR_7))
 return (VAR_0);

    VAR_9->hdr.is_reply = 1;
    VAR_9->hdr.len = sizeof (*VAR_9);

    FUNC_0(("kdp_regions\n"));

    VAR_10 = VAR_9->regions;
    VAR_9->nregions = 0;

    VAR_10->address = 0;
    VAR_10->nbytes = 0xffffffff;

    VAR_10->protection = VAR_2; VAR_10++; VAR_9->nregions++;

    VAR_9->hdr.len += VAR_9->nregions * sizeof (kdp_region_t);

    *VAR_6 = VAR_3.reply_port;
    *VAR_5 = VAR_9->hdr.len;

    return (VAR_1);
}
