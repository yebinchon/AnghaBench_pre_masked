
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_8__ {int qual; int level; void* updated; scalar_t__ noise; } ;
struct TYPE_7__ {int qual; int level; void* updated; scalar_t__ noise; } ;
struct iw_range {int min_nwid; int max_nwid; int num_channels; int num_frequency; int* bitrate; int num_bitrates; int max_rts; int min_frag; int max_frag; int* encoding_size; int num_encoding_sizes; int max_encoding_tokens; int min_retry; int max_retry; scalar_t__ r_time_flags; void* retry_flags; void* retry_capa; void* we_version_compiled; void* we_version_source; scalar_t__ pm_capa; void* pmt_flags; void* pmp_flags; scalar_t__ min_rts; scalar_t__ sensitivity; TYPE_3__ avg_qual; TYPE_2__ max_qual; TYPE_1__* freq; } ;
struct iw_point {int length; } ;
struct atmel_private {scalar_t__ reg_domain; } ;
struct TYPE_9__ {scalar_t__ reg_domain; int max; int min; } ;
struct TYPE_6__ {int i; int m; int e; } ;


 int FUNC_0 (TYPE_4__*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iw_range*,int ,int) ;
 struct atmel_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5,
      struct iw_request_info *VAR_6,
      struct iw_point *VAR_7,
      char *VAR_8)
{
 struct atmel_private *VAR_9 = FUNC_3(VAR_5);
 struct iw_range *VAR_10 = (struct iw_range *) VAR_8;
 int VAR_11, VAR_12, VAR_13;

 VAR_7->length = sizeof(struct iw_range);
 FUNC_2(VAR_10, 0, sizeof(struct iw_range));
 VAR_10->min_nwid = 0x0000;
 VAR_10->max_nwid = 0x0000;
 VAR_10->num_channels = 0;
 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_4); VAR_13++)
  if (VAR_9->reg_domain == VAR_4[VAR_13].reg_domain) {
   VAR_10->num_channels = VAR_4[VAR_13].max - VAR_4[VAR_13].min + 1;
   break;
  }
 if (VAR_10->num_channels != 0) {
  for (VAR_11 = 0, VAR_12 = VAR_4[VAR_13].min; VAR_12 <= VAR_4[VAR_13].max; VAR_12++) {
   VAR_10->freq[VAR_11].i = VAR_12;


   VAR_10->freq[VAR_11].m = (FUNC_1(VAR_12) *
         100000);
   VAR_10->freq[VAR_11++].e = 1;
  }
  VAR_10->num_frequency = VAR_11;
 }

 VAR_10->max_qual.qual = 100;
 VAR_10->max_qual.level = 100;
 VAR_10->max_qual.noise = 0;
 VAR_10->max_qual.updated = VAR_1;

 VAR_10->avg_qual.qual = 50;
 VAR_10->avg_qual.level = 50;
 VAR_10->avg_qual.noise = 0;
 VAR_10->avg_qual.updated = VAR_1;

 VAR_10->sensitivity = 0;

 VAR_10->bitrate[0] = 1000000;
 VAR_10->bitrate[1] = 2000000;
 VAR_10->bitrate[2] = 5500000;
 VAR_10->bitrate[3] = 11000000;
 VAR_10->num_bitrates = 4;

 VAR_10->min_rts = 0;
 VAR_10->max_rts = 2347;
 VAR_10->min_frag = 256;
 VAR_10->max_frag = 2346;

 VAR_10->encoding_size[0] = 5;
 VAR_10->encoding_size[1] = 13;
 VAR_10->num_encoding_sizes = 2;
 VAR_10->max_encoding_tokens = 4;

 VAR_10->pmp_flags = VAR_0;
 VAR_10->pmt_flags = VAR_0;
 VAR_10->pm_capa = 0;

 VAR_10->we_version_source = VAR_3;
 VAR_10->we_version_compiled = VAR_3;
 VAR_10->retry_capa = VAR_2 ;
 VAR_10->retry_flags = VAR_2;
 VAR_10->r_time_flags = 0;
 VAR_10->min_retry = 1;
 VAR_10->max_retry = 65535;

 return 0;
}
