
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
typedef int u8 ;
struct net_device {int dummy; } ;
struct libipw_geo {int bg_channels; int a_channels; TYPE_6__* a; TYPE_5__* bg; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_11__ {int qual; int updated; scalar_t__ noise; scalar_t__ level; } ;
struct TYPE_10__ {int qual; int updated; scalar_t__ noise; scalar_t__ level; } ;
struct iw_range {int throughput; int num_bitrates; int* bitrate; int* encoding_size; int num_encoding_sizes; int we_version_source; int num_channels; int num_frequency; int* event_capa; int enc_capa; int scan_capa; TYPE_7__* freq; int we_version_compiled; int max_encoding_tokens; int max_frag; int min_frag; int max_rts; TYPE_3__ avg_qual; TYPE_2__ max_qual; } ;
struct TYPE_12__ {int* supported_rates; int num_rates; } ;
struct ipw_priv {int mutex; TYPE_8__* ieee; TYPE_4__ rates; } ;
struct TYPE_16__ {int mode; scalar_t__ iw_mode; } ;
struct TYPE_15__ {int m; int e; int i; } ;
struct TYPE_14__ {int flags; int freq; int channel; } ;
struct TYPE_13__ {int flags; int freq; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 struct libipw_geo* FUNC_2 (TYPE_8__*) ;
 struct ipw_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct iw_range*,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_23,
       struct iw_request_info *VAR_24,
       union iwreq_data *VAR_25, char *VAR_26)
{
 struct ipw_priv *VAR_27 = FUNC_3(VAR_23);
 struct iw_range *VAR_28 = (struct iw_range *)VAR_26;
 const struct libipw_geo *VAR_29 = FUNC_2(VAR_27->ieee);
 int VAR_30 = 0, VAR_31;

 VAR_25->data.length = sizeof(*VAR_28);
 FUNC_4(VAR_28, 0, sizeof(*VAR_28));


 VAR_28->throughput = 27 * 1000 * 1000;

 VAR_28->max_qual.qual = 100;

 VAR_28->max_qual.level = 0;
 VAR_28->max_qual.noise = 0;
 VAR_28->max_qual.updated = 7;

 VAR_28->avg_qual.qual = 70;

 VAR_28->avg_qual.level = 0;
 VAR_28->avg_qual.noise = 0;
 VAR_28->avg_qual.updated = 7;
 FUNC_6(&VAR_27->mutex);
 VAR_28->num_bitrates = FUNC_5(VAR_27->rates.num_rates, (u8) VAR_10);

 for (VAR_30 = 0; VAR_30 < VAR_28->num_bitrates; VAR_30++)
  VAR_28->bitrate[VAR_30] = (VAR_27->rates.supported_rates[VAR_30] & 0x7F) *
      500000;

 VAR_28->max_rts = VAR_0;
 VAR_28->min_frag = VAR_17;
 VAR_28->max_frag = VAR_16;

 VAR_28->encoding_size[0] = 5;
 VAR_28->encoding_size[1] = 13;
 VAR_28->num_encoding_sizes = 2;
 VAR_28->max_encoding_tokens = VAR_21;


 VAR_28->we_version_compiled = VAR_22;
 VAR_28->we_version_source = 18;

 VAR_30 = 0;
 if (VAR_27->ieee->mode & (VAR_2 | VAR_3)) {
  for (VAR_31 = 0; VAR_31 < VAR_29->bg_channels && VAR_30 < VAR_11; VAR_31++) {
   if ((VAR_27->ieee->iw_mode == VAR_12) &&
       (VAR_29->bg[VAR_31].flags & VAR_15))
    continue;

   VAR_28->freq[VAR_30].i = VAR_29->bg[VAR_31].channel;
   VAR_28->freq[VAR_30].m = VAR_29->bg[VAR_31].freq * 100000;
   VAR_28->freq[VAR_30].e = 1;
   VAR_30++;
  }
 }

 if (VAR_27->ieee->mode & VAR_1) {
  for (VAR_31 = 0; VAR_31 < VAR_29->a_channels && VAR_30 < VAR_11; VAR_31++) {
   if ((VAR_27->ieee->iw_mode == VAR_12) &&
       (VAR_29->a[VAR_31].flags & VAR_15))
    continue;

   VAR_28->freq[VAR_30].i = VAR_29->a[VAR_31].channel;
   VAR_28->freq[VAR_30].m = VAR_29->a[VAR_31].freq * 100000;
   VAR_28->freq[VAR_30].e = 1;
   VAR_30++;
  }
 }

 VAR_28->num_channels = VAR_30;
 VAR_28->num_frequency = VAR_30;

 FUNC_7(&VAR_27->mutex);


 VAR_28->event_capa[0] = (VAR_8 |
    FUNC_1(VAR_20) |
    FUNC_1(VAR_18) |
    FUNC_1(VAR_19));
 VAR_28->event_capa[1] = VAR_9;

 VAR_28->enc_capa = VAR_6 | VAR_7 |
  VAR_5 | VAR_4;

 VAR_28->scan_capa = VAR_13 | VAR_14;

 FUNC_0("GET Range\n");
 return 0;
}
