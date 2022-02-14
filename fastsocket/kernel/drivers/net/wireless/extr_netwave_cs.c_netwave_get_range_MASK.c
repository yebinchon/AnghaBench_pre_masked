
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_4__ {int qual; int level; scalar_t__ noise; } ;
struct iw_range {int we_version_source; int throughput; int min_nwid; int max_nwid; int sensitivity; int num_bitrates; int* bitrate; int* encoding_size; int num_encoding_sizes; int max_encoding_tokens; TYPE_2__ max_qual; scalar_t__ num_frequency; scalar_t__ num_channels; int we_version_compiled; } ;


 int VAR_0 ;
 int FUNC_0 (struct iw_range*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
        struct iw_request_info *VAR_2,
        union iwreq_data *VAR_3,
        char *VAR_4)
{
 struct iw_range *VAR_5 = (struct iw_range *) VAR_4;
 int VAR_6 = 0;


 VAR_3->data.length = sizeof(struct iw_range);


 FUNC_0(VAR_5, 0, sizeof(struct iw_range));


 VAR_5->we_version_compiled = VAR_0;
 VAR_5->we_version_source = 9;


 VAR_5->throughput = 450 * 1000;
 VAR_5->min_nwid = 0x0000;
 VAR_5->max_nwid = 0x01FF;

 VAR_5->num_channels = VAR_5->num_frequency = 0;

 VAR_5->sensitivity = 0x3F;
 VAR_5->max_qual.qual = 255;
 VAR_5->max_qual.level = 255;
 VAR_5->max_qual.noise = 0;

 VAR_5->num_bitrates = 1;
 VAR_5->bitrate[0] = 1000000;

 VAR_5->encoding_size[0] = 2;
 VAR_5->num_encoding_sizes = 1;
 VAR_5->max_encoding_tokens = 1;

 return VAR_6;
}
