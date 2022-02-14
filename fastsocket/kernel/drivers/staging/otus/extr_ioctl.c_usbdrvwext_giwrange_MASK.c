
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16_t ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_4__ {int qual; int level; int noise; } ;
struct iw_range {int we_version_source; int max_retry; int num_channels; int num_frequency; int sensitivity; int max_rts; int min_frag; int max_frag; int max_encoding_tokens; int num_encoding_sizes; int* encoding_size; int throughput; scalar_t__ num_bitrates; scalar_t__ min_rts; TYPE_2__ max_qual; TYPE_1__* freq; scalar_t__ min_retry; void* retry_flags; void* retry_capa; int we_version_compiled; int txpower_capa; } ;
struct iw_point {int dummy; } ;
struct TYPE_3__ {int i; int m; int e; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,int*) ;

int FUNC_3(struct net_device *VAR_7,
  struct iw_request_info *VAR_8,
  struct iw_point *VAR_9, char *VAR_10)
{
 struct iw_range *VAR_11 = (struct iw_range *) VAR_10;
 int VAR_12, VAR_13;

 u16_t VAR_14[60];
 u16_t VAR_15;

 if (!FUNC_0(VAR_7))
  return -VAR_0;

 VAR_11->txpower_capa = VAR_3;


 VAR_11->we_version_compiled = VAR_4;
 VAR_11->we_version_source = 13;

 VAR_11->retry_capa = VAR_2;
 VAR_11->retry_flags = VAR_2;
 VAR_11->min_retry = 0;
 VAR_11->max_retry = 255;

 VAR_15 = FUNC_2(VAR_7, VAR_14);




 if (VAR_15 > VAR_1)
  VAR_15 = VAR_1;

 VAR_13 = 0;

 for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
  VAR_11->freq[VAR_13].i = FUNC_1(VAR_14[VAR_12]);
  VAR_11->freq[VAR_13].m = VAR_14[VAR_12];
  VAR_11->freq[VAR_13].e = 6;
  VAR_13++;
 }

 VAR_11->num_channels = VAR_15;
 VAR_11->num_frequency = VAR_15;
 VAR_11->max_qual.qual = 100;
 VAR_11->max_qual.level = 154;
 VAR_11->max_qual.noise = 154;
 VAR_11->sensitivity = 3;


 VAR_11->min_rts = 0;
 VAR_11->max_rts = 2347;
 VAR_11->min_frag = 256;
 VAR_11->max_frag = 2346;
 VAR_11->max_encoding_tokens = 4 ;
 VAR_11->num_encoding_sizes = 2;

 VAR_11->encoding_size[0] = 5;
 VAR_11->encoding_size[1] = 13;


 VAR_11->num_bitrates = 0;





 VAR_11->throughput = 300000000;

 return 0;
}
