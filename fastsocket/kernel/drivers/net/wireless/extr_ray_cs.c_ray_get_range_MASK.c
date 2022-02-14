
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_2__ {int level; int noise; scalar_t__ qual; } ;
struct iw_range {int we_version_source; double throughput; int num_bitrates; int* bitrate; TYPE_1__ max_qual; scalar_t__ num_frequency; int num_channels; int we_version_compiled; } ;
struct iw_point {int length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3,
    struct iw_request_info *VAR_4,
    struct iw_point *VAR_5, char *VAR_6)
{
 struct iw_range *VAR_7 = (struct iw_range *)VAR_6;

 FUNC_0((char *)VAR_7, 0, sizeof(struct iw_range));


 VAR_5->length = sizeof(struct iw_range);


 VAR_7->we_version_compiled = VAR_0;
 VAR_7->we_version_source = 9;


 VAR_7->throughput = 1.1 * 1000 * 1000;
 VAR_7->num_channels = VAR_2[(int)VAR_1];
 VAR_7->num_frequency = 0;
 VAR_7->max_qual.qual = 0;
 VAR_7->max_qual.level = 255;
 VAR_7->max_qual.noise = 255;
 VAR_7->num_bitrates = 2;
 VAR_7->bitrate[0] = 1000000;
 VAR_7->bitrate[1] = 2000000;
 return 0;
}
