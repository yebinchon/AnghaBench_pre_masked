
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {unsigned int base_addr; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_8__ {int level; int noise; void* qual; } ;
struct TYPE_7__ {int noise; int level; void* qual; } ;
struct iw_range {int we_version_source; double throughput; int min_nwid; int max_nwid; int sensitivity; int num_bitrates; int* bitrate; int* event_capa; int num_channels; int num_frequency; int* encoding_size; int num_encoding_sizes; int max_encoding_tokens; int freq; TYPE_3__ avg_qual; TYPE_2__ max_qual; int we_version_compiled; } ;
struct TYPE_9__ {int spinlock; } ;
typedef TYPE_4__ net_local ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct iw_range*,int ,int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,int ) ;
 int VAR_8 ;
 int FUNC_4 (int ,int ) ;
 TYPE_4__* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_9,
        struct iw_request_info *VAR_10,
        union iwreq_data *VAR_11,
        char *VAR_12)
{
 unsigned int VAR_13 = VAR_9->base_addr;
 net_local *VAR_14 = FUNC_5(VAR_9);
 struct iw_range *VAR_15 = (struct iw_range *) VAR_12;
 unsigned long VAR_16;
 int VAR_17 = 0;


 VAR_11->data.length = sizeof(struct iw_range);


 FUNC_1(VAR_15, 0, sizeof(struct iw_range));


 VAR_15->we_version_compiled = VAR_7;
 VAR_15->we_version_source = 9;


 VAR_15->throughput = 1.4 * 1000 * 1000;
 VAR_15->min_nwid = 0x0000;
 VAR_15->max_nwid = 0xFFFF;

 VAR_15->sensitivity = 0x3F;
 VAR_15->max_qual.qual = VAR_4;
 VAR_15->max_qual.level = VAR_5;
 VAR_15->max_qual.noise = VAR_6;
 VAR_15->avg_qual.qual = VAR_4;

 VAR_15->avg_qual.level = 30;
 VAR_15->avg_qual.noise = 8;

 VAR_15->num_bitrates = 1;
 VAR_15->bitrate[0] = 2000000;


 VAR_15->event_capa[0] = (FUNC_0(0x8B02) |
    FUNC_0(0x8B04) |
    FUNC_0(0x8B06));
 VAR_15->event_capa[1] = VAR_0;


 FUNC_6(&VAR_14->spinlock, VAR_16);


 if (!(FUNC_3(VAR_13, FUNC_4(0, VAR_8)) &
       (VAR_3 | VAR_2))) {
  VAR_15->num_channels = 10;
  VAR_15->num_frequency = FUNC_8(VAR_13, VAR_15->freq,
       VAR_1);
 } else
  VAR_15->num_channels = VAR_15->num_frequency = 0;


 if (FUNC_2(VAR_13)) {
  VAR_15->encoding_size[0] = 8;
  VAR_15->num_encoding_sizes = 1;
  VAR_15->max_encoding_tokens = 1;
 } else {
  VAR_15->num_encoding_sizes = 0;
  VAR_15->max_encoding_tokens = 0;
 }


 FUNC_7(&VAR_14->spinlock, VAR_16);

 return VAR_17;
}
