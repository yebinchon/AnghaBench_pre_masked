
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; int mtu; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctcm_priv {int buffer_size; TYPE_1__** channel; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int max_bufsize; int flags; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct net_device*,char const*) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 struct ctcm_priv* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,char*,int*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_10,
  struct device_attribute *VAR_11, const char *VAR_12, size_t VAR_13)
{
 struct net_device *VAR_14;
 int VAR_15;
 struct ctcm_priv *VAR_16 = FUNC_2(VAR_10);

 if (!(VAR_16 && VAR_16->channel[VAR_7] &&
   (VAR_14 = VAR_16->channel[VAR_7]->netdev))) {
  FUNC_1(VAR_8, VAR_2, "bfnondev");
  return -VAR_4;
 }

 FUNC_3(VAR_12, "%u", &VAR_15);
 if (VAR_15 > VAR_1)
     goto einval;
 if (VAR_15 < (576 + VAR_6 + 2))
     goto einval;
 VAR_16->buffer_size = VAR_15;

 if ((VAR_14->flags & VAR_5) &&
     (VAR_15 < (VAR_14->mtu + VAR_6 + 2)))
     goto einval;

 VAR_16->channel[VAR_7]->max_bufsize = VAR_15;
 VAR_16->channel[VAR_9]->max_bufsize = VAR_15;
 if (!(VAR_14->flags & VAR_5))
  VAR_14->mtu = VAR_15 - VAR_6 - 2;
 VAR_16->channel[VAR_7]->flags |= VAR_0;
 VAR_16->channel[VAR_9]->flags |= VAR_0;

 FUNC_0(VAR_8, VAR_14, VAR_12);
 return VAR_13;

einval:
 FUNC_0(VAR_8, VAR_14, "buff_err");
 return -VAR_3;
}
