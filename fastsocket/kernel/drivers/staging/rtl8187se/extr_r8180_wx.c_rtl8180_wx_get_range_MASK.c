
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
typedef size_t u16 ;
struct r8180_priv {int ieee80211; int max_sens; int * rf_set_sens; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_8__ {int qual; int level; int updated; scalar_t__ noise; } ;
struct TYPE_7__ {int qual; int noise; int updated; scalar_t__ level; } ;
struct iw_range {int throughput; int num_bitrates; int we_version_source; int num_channels; size_t num_frequency; int enc_capa; TYPE_4__* freq; int we_version_compiled; scalar_t__ pm_capa; int max_frag; int min_frag; int * bitrate; TYPE_3__ avg_qual; TYPE_2__ max_qual; int sensitivity; } ;
struct TYPE_10__ {scalar_t__* channel_map; } ;
struct TYPE_9__ {int i; int m; int e; } ;


 TYPE_5__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 int* VAR_10 ;
 int FUNC_2 (struct iw_range*,int ,int) ;
 int * VAR_11 ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_12,
    struct iw_request_info *VAR_13,
    union iwreq_data *VAR_14, char *VAR_15)
{
 struct iw_range *VAR_16 = (struct iw_range *)VAR_15;
 struct r8180_priv *VAR_17 = FUNC_1(VAR_12);
 u16 VAR_18;
 int VAR_19;


 VAR_14->data.length = sizeof(*VAR_16);
 FUNC_2(VAR_16, 0, sizeof(*VAR_16));
 VAR_16->throughput = 5 * 1000 * 1000;
 if(VAR_17->rf_set_sens != ((void*)0))
  VAR_16->sensitivity = VAR_17->max_sens;

 VAR_16->max_qual.qual = 100;

 VAR_16->max_qual.level = 0;
 VAR_16->max_qual.noise = -98;
 VAR_16->max_qual.updated = 7;

 VAR_16->avg_qual.qual = 92;

 VAR_16->avg_qual.level = 20 + -98;
 VAR_16->avg_qual.noise = 0;
 VAR_16->avg_qual.updated = 7;

 VAR_16->num_bitrates = VAR_8;

 for (VAR_19 = 0; VAR_19 < VAR_8 && VAR_19 < VAR_4; VAR_19++) {
  VAR_16->bitrate[VAR_19] = VAR_11[VAR_19];
 }

 VAR_16->min_frag = VAR_7;
 VAR_16->max_frag = VAR_6;

 VAR_16->pm_capa = 0;

 VAR_16->we_version_compiled = VAR_9;
 VAR_16->we_version_source = 16;
        VAR_16->num_channels = 14;

 for (VAR_19 = 0, VAR_18 = 0; VAR_19 < 14; VAR_19++) {


  if ((FUNC_0(VAR_17->ieee80211)->channel_map)[VAR_19+1]) {
          VAR_16->freq[VAR_18].i = VAR_19 + 1;
   VAR_16->freq[VAR_18].m = VAR_10[VAR_19] * 100000;
   VAR_16->freq[VAR_18].e = 1;
   VAR_18++;
  } else {


  }

  if (VAR_18 == VAR_5)
  break;
 }

 VAR_16->num_frequency = VAR_18;
 VAR_16->enc_capa = VAR_2 | VAR_3 |
                          VAR_1 | VAR_0;



 return 0;
}
